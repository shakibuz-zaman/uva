#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int stoi(string s){
    return (isalpha(s[0]))?10:s[0]-'0';
}
void show(vector<string>s){
    cout<<"Printing Data : \n";
    for(int i=0;i<s.size();i++)
        cout<<s[i]<<" ";
    cout<<"\n-----------------"<<endl;
}
int main(){
    string str;
    vector<string> vstr;
    int i,j,t,k,x,y;
    cin>>t;
    for(int ii=1;ii<=t;ii++){
        vstr.clear();
        y=0;
        for(i=0;i<52;i++){
            cin>>str;
            vstr.pb(str);
        }
        reverse(vstr.begin(),vstr.end());
        int top=25;
        //vstr.erase(vstr.begin()+25,vstr.begin()+25+1);
        //show(vstr);
        for(i=1;i<=3;i++){
            //cout<<vstr[top]<<endl;
            x=stoi(vstr[top]);
            int remove=10-x+1;
            //printf("Y=%d  X=%d  Top=%d Remove=%d\n",y,x,top,remove);
            y+=x;
            vstr.erase(vstr.begin()+25,vstr.begin()+25+remove);
        }
        reverse(vstr.begin(),vstr.end());
        cout<<"Case "<<ii<<": "<<vstr[y-1]<<endl;
    }
    return 0;
}
