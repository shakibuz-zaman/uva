#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
int sumd(int n);
using namespace std;
int main(){
    char n[20];
    int t,i,j,x,sumo,sume,nn[20];
    while((scanf("%d",&t))!=EOF){
    for(i=1;i<=t;i++){
        sumo=0;
        sume=0;
        for(j=1;j<=16;j++){
            scanf("%1d",&nn[j]);
            if(j%2==0){
                sume+=nn[j];
            }
            else{
                x=nn[j]*2;
                sumo=sumo+sumd(x);
            }
        }
        x=sumo+sume;
        if(x%10==0){
            cout<<"Valid\n";
        }
        else{
            cout<<"Invalid\n";
        }
    }
    }
    return 0;
}
int sumd(int n){
    int r,sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
