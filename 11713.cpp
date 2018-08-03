#include<bits/stdc++.h>
using namespace std;
bool isconso(char ch);
bool res(string s,string ss);
int main(){
    int i,t;
    string s,ss;
    cin>>t;
    while(t--){
        cin>>s>>ss;
        if(res(s,ss))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
bool res(string s,string ss){
    int i,lens=s.length(),lenss=ss.length();
    if(lens!=lenss)
        return false;
    for(i=0;i<lens;i++){
        if(isconso(s[i])){
            if(s[i]!=ss[i])
                return false;
        }
    }
    return true;
}
bool isconso(char ch){
    if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u')
        return true;
    return false;
}
