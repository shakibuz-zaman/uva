#include<bits/stdc++.h>
using namespace std;
int isprime(int x);
int main(){
    int T,N,i,co,j;
    while(cin>>N){
        if(N==0)
            break;
        co=0;
        for(j=N-1;j>=ceil(N/2.0);j--){
            if(isprime(j))
                if(isprime(N-j))
                    co++;
        }
        cout<<co<<endl;
    }
    return 0;
}
int isprime(int x){
    if(x==1||x==0)
        return 0;
    if(x==2)
        return 1;
    if(x%2==0)
        return 0;
    for(int i=3;i<=sqrt(x);i=i+2){
        if(x%i==0)
            return 0;
    }
    return 1;
}
