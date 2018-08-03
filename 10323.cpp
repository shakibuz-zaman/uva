#include<bits/stdc++.h>
using namespace std;
int sum(int n);
int main(){
    int f,n;
    while(cin>>n){
       if(n<0&&n%2==0){
            printf("Underflow!\n");
        }
       else if(n<0&&n%2!=0){
            printf("Overflow!\n");
       }
       else if(n>=0&&n<=7){
           cout<<"Underflow!\n";
       }
       else if(n>7&&n<13){
           cout<<sum(n)<<endl;
       }
       else if(n==13){
            cout<<"6227020800\n";
       }
       else if(n>13){
            cout<<"Overflow!\n";
       }
    }
    return 0;
}
int sum(int n){
    int i;
    unsigned long long int sum=1;
    for(i=n;i>=1;i--){
        sum*=i;
    }
    return sum;
}
