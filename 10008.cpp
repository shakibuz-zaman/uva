#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

struct paird{
    char ch;
    int co;
};
void searc(char c,vector<paird> &d);
void print(vector<paird> f);
void sortt(vector<paird> &v);
int main(){
    int n,i,j;
    string str;
    char ch;
    cin>>n;
    vector<paird> data;
    getchar();
    paird tmp;
    for(i=1;i<=n;i++){
        getline(cin,str);
        for(j=0;j<str.length();j++){
          if(isalpha(str[j])){
            ch=toupper(str[j]);
            searc(ch,data);
          }
        }
    }
    sortt(data);
    print(data);
    return 0;
}
void searc(char c,vector<paird> &d){
    int i,nn=0;
    paird dd;
    for(i=0;i<d.size();i++){
        if(d[i].ch==c){
            d[i].co++;
            nn=1;
            break;
        }
    }

    if(nn==0){
        dd.ch=c;
        dd.co=1;
        d.push_back(dd);
    }
}
void print(vector<paird> f){
    int i;
    for(i=0;i<f.size();i++){
        cout<<f[i].ch<<" "<<f[i].co<<endl;
    }
}
void sortt(vector<paird> &v){
    int i,t,j;
    paird tmp;
    for(i=0;i<v.size();i++){
        for(j=i+1;j<v.size();j++){
            if(v[j].co>v[i].co){
                tmp=v[i];
                v[i]=v[j];
                v[j]=tmp;
            }
            else if(v[j].co==v[i].co){
                if(v[j].ch<v[i].ch){
                    tmp=v[i];
                    v[i]=v[j];
                    v[j]=tmp;
                }
            }
        }
    }
}
