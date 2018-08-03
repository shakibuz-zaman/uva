#include<bits/stdc++.h>
using namespace std;
int cl(int a);
int main(){
    long long int x,m,y,i,maxx,a,b;
    while(cin>>x>>y){
        a=(x<=y)?x:y;
        b=(x>=y)?x:y;
        maxx=0;
        for(i=a;i<=b;i++){
            m=cl(i);
            if(m>maxx)
                maxx=m;
        }
        cout<<x<<" "<<y<<" "<<maxx<<endl;
    }
}
int cl(int a){
    int i,j,co=0;
    while(a!=1){
        if(a%2==0)
            a=a/2;
        else
            a=3*a+1;
        co++;
    }
    return co+1;
}
