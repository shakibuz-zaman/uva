#include<bits/stdc++.h>
using namespace std;
void binary(int n,int &co);
int main(){
    int n,co;
    while(cin>>n){
        if(n==0)
            break;
        co=0;
        cout<<"The parity of ";
        binary(n,co);
        cout<<" is "<<co<<" (mod 2)."<<endl;
    }
    return 0;
}
void binary(int n,int &co){
    if(n<=1){
        if(n==1)
            co++;
        cout<<n;
        return;
    }
    int rem=n%2;
    binary(n>>1,co);
    if(rem==1)
        co++;
    cout<<rem;
}
