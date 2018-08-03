#include<bits/stdc++.h>
#define pi 3.141592653589793
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3,l1,l2,l3,s,K,r,A;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        l1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        l2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        l3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        s=(l1+l2+l3)/2.0;
        K=sqrt(s*(s-l1)*(s-l2)*(s-l3));
        r=(l1*l2*l3)/(4*K);
        printf("%.2lf\n",2*pi*r);
    }
    return 0;
}
