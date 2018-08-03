#include <bits/stdc++.h>
#define pi 4*atan(1)
using namespace std;
int main(){
    double a,b,c;
    double porib,rp,A,ro,ontob,s;
    while(cin>>a>>b>>c){
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        rp=(1.0*(a*b*c))/sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        porib=pi*rp*rp;
        ro=A/s;
        ontob=pi*ro*ro;
        printf("%.4lf %.4lf %.4lf\n",porib-A,A-ontob,ontob);
    }
    return 0;
}
