#include<bits/stdc++.h>
#define pb push_back
#define lli long long int
using namespace std;
int res(lli fct,lli dvd){
    lli x=dvd,gc;
    for(lli i=fct;i>=1;i--){
        if(x==1)
            return 1;
        lli y=i;
        gc=__gcd(x,y);
        x/=gc;
    }
    return (x==1)?1:0;
}

int main(){
    lli n,f,d;
    while(cin>>f>>d){
        if(res(f,d))
            printf("%lld divides %lld!\n",d,f);
        else
            printf("%lld does not divide %lld!\n",d,f);
    }
    return 0;
}
