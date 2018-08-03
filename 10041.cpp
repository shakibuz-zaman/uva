#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a[100000],i,j,k,sum,tmp,mid;
    cin>>t;
    for(i=0;i<t;i++){
        tmp=0;sum=0;
        cin>>n;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            sum+=abs(a[0]-a[j]);
        }
        for(j=1;j<n;j++){
            mid=a[j];
            tmp=0;
            for(k=0;k<n;k++){
                tmp+=abs(mid-a[k]);
            }
            sum=min(sum,tmp);
        }
        cout<<sum<<endl;
    }
    return 0;
}
