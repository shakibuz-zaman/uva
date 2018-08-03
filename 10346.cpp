#include<iostream>
#include<cstdio>
using namespace std;
int main (){
    int x,y,r,sum,xx;
    while((scanf("%d%d",&x,&y))!=EOF){
        sum=0;
        xx=x;
        while(x>=y){
            sum+=(x/y);
            r=x%y;
            x=(x/y)+r;
        }
        cout<<sum+xx<<endl;
    }
    return 0;
}
