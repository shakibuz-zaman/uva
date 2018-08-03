#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int t,a,b,r,i;
    float x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&a,&b,&r);
        x=r-sqrt(a*a+b*b);
        y=r+sqrt(a*a+b*b);
        printf("%.2f %.2f\n",x,y);
    }
    return 0;
}
