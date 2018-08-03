#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
void res(int a[],int n,int sum){
    int i,j,tmp,x,diff,mind=9999999;
    pair<int,int> pr;
    sort(a,a+n);
    for(i=n-1;i>0;i--){
        if(a[i]+a[i-1]<sum)
            continue;
        if(a[i]+a[0]<=sum){
            int tmp=0;
            while(a[i]+a[tmp]<=sum){
                if(tmp==i)
                    break;
                //printf("a[%d]=%d  a[%d]=%d\n",i,a[i],tmp,a[tmp]);
                if(a[i]+a[tmp]==sum){
                    if(abs(a[i]-a[tmp])<mind){
                        mind=abs(a[i]-a[tmp]);
                        pr.f=a[i];pr.s=a[tmp];
                    }
                }
                tmp++;
            }
        }
    }
    printf("Peter should buy books whose prices are %d and %d.\n",pr.f,pr.s);
}
int main(){
    int N,s,a[10010];
    while(cin>>N){
    for(int i=0;i<N;i++)
        cin>>a[i];
        cin>>s;
        res(a,N,s);
        cout<<endl;
    }
    return 0;
}
