#include<iostream>
#include<cmath>
#include<iostream>
#include<cctype>
#include<cstdlib>
#include<cstdio>
void ter(long long int n);
using namespace std;
int main(){
    long long int n;
    while(1){
        cin>>n;
        if(n<0)
            break;
        ter(n);
        cout<<endl;
    }
    return 0;
}
void ter(long long int n){
    if(n<=2){
        cout<<n;
        return;
    }
    int re=n%3;
    ter(n/3);
    cout<<re;
}
