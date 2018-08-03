#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
    int t,i,j,a,n,h,lo,b;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        h=0;
        lo=0;
        cin>>a;
        for(j=0;j<n-1;j++){
            cin>>b;
            if(b>a){
                h++;
            }
            if(a>b){
                lo++;
            }
            a=b;
        }
        cout<<"Case "<<i<<": "<<h<<" "<<lo<<endl;
    }
    return 0;
}
