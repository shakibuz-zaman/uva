#include<bits/stdc++.h>
using namespace std;
long long int H( long long int n ) ;
int main(){
    long long int N;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>N;
        cout<<H(N)<<endl;
    }
    return 0;
}
long long int H(long long int n ) {
    if(n<1)
        return 0;
    long long int rt,i;
    long long int tmp,sum=0,end=n;
    rt=floor(sqrt(n));
    for(i=1;i<=rt;i++){
        tmp=n/i;
        sum+=tmp+(end-tmp)*(i-1);
        end=n/i;
    }
    if (n / rt > rt) {
        sum += rt;
    }
    return sum;
}
