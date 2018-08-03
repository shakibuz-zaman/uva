#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    string str;
    string::iterator s;
    while(1){
        cin>>n;
        if(n==0)
            break;
        cin>>str;
        s=str.begin();
        int len=str.length();
        n=len/n;
        for(i=0;i<=len-n;i=i+n){
            reverse(s,s+n);
            s=s+n;
        }
        cout<<str<<endl;
        str.clear();
    }
    return 0;
}

