#include<bits/stdc++.h>
using namespace std;
int best2(int a,int b,int c);
int main(){
    int t1,t2,f,a,ct1,ct2,ct3,i,t,sum;
    best2(12,4,3);
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
        sum=t1+t2+f+a+best2(ct1,ct2,ct3);
        if(sum>=90){
            cout<<"Case "<<i<<": A\n";
        }
        else if(sum>=80){
            cout<<"Case "<<i<<": B\n";
        }
        else if(sum>=70){
            cout<<"Case "<<i<<": C\n";
        }
        else if(sum>=60){
            cout<<"Case "<<i<<": D\n";
        }
        else{
            cout<<"Case "<<i<<": F\n";
        }
    }
    return 0;
}
int best2(int a,int b,int c){
    if(a<=b&&a<=c){
        return (b+c)/2;
    }
    else if(b<=a&&b<=c){
        return (a+c)/2;
    }
    else{
        return (b+a)/2;
    }
}
