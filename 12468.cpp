#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,m;
    while(cin>>a>>b){
        if(a+b<0)
            break;
        if(b>=a){
            m=min(99-b+a+1,b-a);
            cout<<m<<endl;
        }
        else{
            m=min(a-b,99-a+b+1);
            cout<<m<<endl;
        }
    }
    return 0;
}
