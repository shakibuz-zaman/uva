#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli prime(lli n);
lli res(lli n);
int main(){
    lli n;
    while(cin>>n){
        if(n<0)
            n=-n;
        if(n==0)
            break;
        if(n==1)
            cout<<"-1\n";
        else
            cout<<res(n)<<endl;
    }
    return 0;
}
lli res(lli n){
    priority_queue<lli> p,q;
    if(prime(n))
        return -1;
    lli flag=0,tmp;
    for(lli i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(prime(n/i))
              p.push(n/i);
            if(prime(i))
                p.push(i);
        }
    }
    if(p.size()==1)
        return -1;
    if(p.size()==2){
        lli x=p.top();
        p.pop();
        lli y=p.top();
        if(x==y)
            return -1;
        else
            return x;
    }
    return p.top();
}
lli prime(lli n){
    if(n==2)
        return 1;
    if(n%2==0||n==1)
        return 0;
    for(lli i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}

