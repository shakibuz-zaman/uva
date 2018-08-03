#include<bits/stdc++.h>
using namespace std;
int gcd(int a1,int b1);
int main(){
    int x,g;
    while(cin>>x){
        if(x==0)
        break;
        g=0;
        for(int i=1;i<x;i++){
            for(int j=i+1;j<=x;j++){
                g+=gcd(i,j);
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
int gcd(int a1,int b1){
    long long int a=a1,b=b1;
    if( a<0 ) a = -a;
    if( b<0 ) b = -b;
    while( b!=0 ){
        a %= b;
        if( a==0 ){
            a=b;
            break;
        }
        b %= a;
    }
    return a;
}
