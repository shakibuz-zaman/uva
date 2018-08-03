#include<bits/stdc++.h>
using namespace std;
long long int revv(long long int n);
int main(){
    int n,t,i,j;
    long long int tmp,tt;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        tmp=n;
        j=0;
        while(1){
            tt=revv(tmp);
            if(tmp==tt)
                break;
            tmp=tmp+tt;
            j++;
        }
        cout<<j<<" "<<tmp<<endl;
    }
    return 0;
}
long long int revv(long long int n){
    long long int tmp,i,r,co=0,rrea=0;
   long long int sum=0;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return  sum;
}

