#include<bits/stdc++.h>
using namespace std;
#define Phi 1.618034
#define phi -0.618034
int main(){
   long long int n,fib,sum,nth,i=1,nthh;
    while(cin>>n){
        n--;
        nth=((pow(Phi,n+1)-pow(phi,n+1))/sqrt(5))/2;
        nthh=((pow(Phi,n+1)-pow(phi,n+1))/sqrt(5));
        sum=(pow(Phi,n+2)-pow(phi,n+2))/sqrt(5)-1;
        if(nthh%2==0){
            nthh=nthh/2;
            cout<<"Set "<<i<<":\n"<<sum+nth-1<<endl;
        }
        else{
            nthh=(nthh+1)/2;
            cout<<"Set "<<i<<":\n"<<sum+nthh-1<<endl;
        }
        i++;

    }
}
