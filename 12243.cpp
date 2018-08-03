#include<bits/stdc++.h>
using namespace std;
bool res(string str);
int main(){
    string s;
    bool f;
    while(getline(cin,s)){
        if(s=="*")
            break;
        else if(res(s))
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
bool res(string str){
    if(str[0]==' ')
        return false;
    char ch=toupper(str[0]);
    int len=str.length();
    for(int i=0;i<len;i++){
        if(str[i]==' '&&(i+1)<len){
            if(toupper(str[i+1])!=ch){
                return false;
            }
        }
    }
    return true;
}
