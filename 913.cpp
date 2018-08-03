#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    long long int n,sum,line;
    while((scanf("%lld",&n))!=EOF){
        line=(n/2);
        sum=(2*line)*(line+2)+1;
        cout<<3*sum-6<<endl;
    }
    return 0;
}
