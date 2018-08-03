#include<stdio.h>
int main()
{
    long long a,t,n,b,c,i,j,s;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
        {
        s=0;
        scanf("%lld",&n);
        for(j=0;j<n;j++)
            {
            scanf("%lld %lld %lld",&a,&b,&c);
            s+=a*c;
            }
        printf("%lld\n",s);
        }
return 0;
}
