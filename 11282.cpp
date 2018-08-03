#include<bits/stdc++.h>
using namespace std;
long long int F(int n){
    long long int sum=1;
    for(int i=1;i<=n;i++)
        sum*=i;
    return sum;
}
long long int D(int n){
    if(n==0||n==2)
        return 1;
    if(n==1)
        return 0;
    return (n-1)*D(n-2)+(n-1)*D(n-1);
}
long long int ncr(int n,int r){
    return (F(n))/(F(n-r)*F(r));
}
int main(){
    int N,M;
    long long int sum;
    while(cin>>N>>M){
        sum=0;
        for(int i=0;i<=M;i++){
            sum+=ncr(N,i)*D(N-i);
            printf("D(%d-%d)=%lld\n",N,i,D(N-i));
        }
        cout<<sum<<endl;
    }
    return 0;
}
