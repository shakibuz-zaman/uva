#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main(){
    float l,w,h,x;
    while(cin>>l>>w>>h>>x){
        float xx=(pi*x)/180.0;
        float vr=l*w*h,ans;
        float b=l*tan(xx),vt=.5*b*l*w;
        if(b>h){
            x=90-x;
            xx=(pi*x)/180.0;
            ans=(.5*h*h*tan(xx)*w);
        }
        else
            ans=l*w*(h-.5*b);
        printf("%.3f mL\n",ans);
    }
    return 0;
}
