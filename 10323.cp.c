#include<bits/stdc++.h>
using namespace std;
int sum(unsigned long long int &fact,int n);
int main(){
    unsigned long int n;
    unsigned long long int f;
    while(cin>>n){
        if(sum(f,n)==1){
            cout<<f<<"    Underflow!\n";
            continue;
        }
        if(sum(f,n)==3){
            cout<<f<<"    Overflow!\n";
            continue;
        }
        cout<<f<<endl;
    }
    return 0;
}
int sum(unsigned long long int &fact,int n){
    int i;
    unsigned long long int sum=1;
    for(i=n;i>=1;i--){
        sum*=i;
        if(sum>6227020800){
            fact=sum;
            return 3;
        }
    }
    if(sum<1000){
        fact=sum;
        return 1;
    }
    fact=sum;
    return 2;
}
