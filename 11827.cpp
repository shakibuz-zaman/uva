#include<bits/stdc++.h>
using namespace std;
int len(int x);
void ers(string &s,int x);
int stov(string s);
void show();
int mn();
int GCD(int a1,int b1);
vector<int> v;
int main(){
    int i,j,t,m,n,tmp;
    string s;
    /*string s="10       43";
    ers(s,10);
    cout<<s;
    istringstream ms(s);
    ms>>tmp;
    //cout<<tmp;*/
    cin>>t;
    for(i=0;i<t;i++){
        getline(cin,s);
        cout<<"String="<<s<<endl;
        stov(s);
        cout<<endl;
        tmp=mn();
        cout<<tmp<<endl;
        v.clear();
    }
    return 0;
}
int stov(string s){
    int x;
    while(!s.empty()){

        istringstream buf(s);
        buf>>x;
        v.push_back(x);
        ers(s,x);
    }
}
int len(int x){
    int c=0;
    while(x>0){
        x=x/10;
        c++;
    }
    return c;
}
void ers(string &s,int x){
    int l=len(x);
    s.erase(s.begin(),s.begin()+l);
    int i=0;
    while(!isdigit(s[0])&&!s.empty()){
        s.erase(s.begin());
    }
}
void show(){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int GCD(int a1,int b1){
    int a=a1,b=b1;
    if( a<0 ) a = -a;
    if( b<0 ) b = -b;
    while( b!=0 ){
        a %= b;
        if( a==0 ){
            a=b;
            break;
        }
        b %= a;
    }
    return a;
}
int mn(){
    int gc=GCD(v[0],v[1]);
    for(int i=1;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            int tmp=GCD(v[i],v[j]);
            gc=max(gc,tmp);
        }
    }
    v.clear();
    return gc;
}
