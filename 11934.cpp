#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
int main (){
    long long int x,a,b,c,d,l,i,j;
    while(1){
        cin>>a>>b>>c>>d>>l;
        if(a==0&&b==0&&c==0&&d==0&&l==0){
            break;
        }
        j=0;
        for(i=0;i<=l;i++){
            x=a*i*i+b*i+c;
            if(x%d==0){
                j++;
            }
        }
        cout<<j<<endl;;
    }
}
