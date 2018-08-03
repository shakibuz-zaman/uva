#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
    int i,t,h1,hh,m1,h2,m2,tt;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%d:%d",&h1,&m1);
        if((h1==12&&m1==0)||(h1+m1==0)||(h1==6&&m1==0)){
            printf("%.2d:%.2d\n",h1,m1);
        }
        else{
            if(h1==12){
                tt=12*60-m1;
                (tt/60==0)?hh=12:hh=tt/60;
                printf("%.2d:%.2d\n",hh,tt%60);
            }
            else{
                tt=12*60-h1*60-m1;
                (tt/60==0)?hh=12:hh=tt/60;
                printf("%.2d:%.2d\n",hh,tt%60);
            }
        }
    }
    return 0;
}
