#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int func(lli n);
int main(){
    int i,t;
    lli n;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        cout<<"Case "<<i<<": "<<func(n)<<endl;
    }
    return 0;
}
int func(lli n){
    double sum=0,tmp;
    double tax;
    if(n>180000){
        tmp=n-180000;
        tmp=min(tmp,300000.0);
        sum+=(tmp*0.1);
    }
    if(n>180000+300000){
        tmp=n-(180000+300000);
        tmp=min(tmp,400000.0);
        sum+=(tmp*0.15);
    }
    if(n>180000+300000+400000){
        tmp=n-(180000+300000+400000);
        tmp=min(tmp,300000.0);
        sum+=(tmp*0.2);
    }
    if(n>180000+300000+400000+300000){
        tmp=n-180000-300000-400000-300000;
        sum+=(tmp*0.25);
    }
    if(sum>0.0){
        sum=max(2000.0,sum);
        return (ceil(sum));
    }
    return 0;
}
