#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    long int t,a,b,c;
    int i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(a+b>c&&b+c>a&&a+c>b){
            if(a==b&&b==c&&a==c){
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b||b==c||a==c){
                printf("Case %d: Isosceles\n",i);
            }
            else{
                printf("Case %d: Scalene\n",i);
            }
        }
        else{
            printf("Case %d: Invalid\n",i);
        }
    }
    return 0;
}
