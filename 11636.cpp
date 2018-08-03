#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int sum,c,i,x,t=0;
    while(1){
        cin>>x;
        if(x<0){
            break;
        }
        c=0;
        t++;
        if(x==1)
            cout<<"Case "<<t<<": 0"<<endl;
        else{
            for(i=1;i<x;i=i*2){
                c++;
                }
            cout<<"Case "<<t<<": "<<c<<endl;
        }

    }
    return 0;
}
