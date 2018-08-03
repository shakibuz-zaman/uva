#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
    int i,m,n,t;
    long long int x,k,sum,a,b;
    cin>>t;
    for(i=1;i<=t;i++){
        m=1;
        cin>>x>>k;
        a=floor(x*1.0/k);b=ceil(x*1.0/k);
        while(1){
            for(n=0;n<=k;n++){
                sum=m*a+n*b;
                if(sum==x)
                    break;
            }
            if(sum==x)
                break;
            m++;

        }
        cout<<m<<" "<<n<<endl;
    }
    return 0;
}
