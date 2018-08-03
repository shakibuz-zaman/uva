#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d%d",&a,&b,&c);
        printf("%d\n",c*(2*a-b)/(a+b));
    }
    return 0;
}
