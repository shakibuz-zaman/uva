#include<bits/stdc++.h>
#define lli long long int
using namespace std;
void prlli(lli G,lli L);
int main(){
    lli t,a,b;
    cin>>t;
    for(lli i=0;i<t;i++){
        cin>>a>>b;
        prlli(a,b);
    }
    return 0;
}
void prlli(lli G,lli L){
    lli a=1,b=1,factor=1;
    while(a<=L){
        a=G*factor;
        b=(G*L)/a;
        if(b%G==0&&L%b==0){
            cout<<a<<" "<<b<<endl;
            return;
        }
        factor++;
    }
    cout<<"-1\n";
}
