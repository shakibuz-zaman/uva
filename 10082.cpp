#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t,i;
    float x,y;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        x=(a*1.0+b*1.0)/2.0;
        y=(a*1.0-b*1.0)/2.0;
        if(y!=ceil(y)||x!=ceil(x)||(x<0)||(y<0)){
            cout<<"impossible\n";
            continue;
        }
        cout<<max(x,y)<<" "<<min(x,y)<<endl;
    }
    return 0;
}
