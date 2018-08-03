#include<iostream>
#include<cmath>
using namespace std;
int sumn(int n);
int main(){
    long long int x,sum;
    while(1){
        cin>>x;
        if(x==0)
            break;
        sum=sumn(x);
        while(sum>=10){
            sum=sumn(sum);
        }
        cout<<sum<<endl;
    }
}
int sumn(int n){
    int r,sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
