#include<iostream>
#include<cstdio>
using namespace std;
int main (){
    int t,n,x=1,flag,i;
    while(1){
        cin>>t;
        if(t==0)
            break;
        flag=0;
        for(i=1;i<=t;i++){
            cin>>n;
            if(n>0){
                flag++;
            }
            else{
                flag--;
            }
        }
        cout<<"Case "<<x<<": "<<flag<<endl;
        x++;
        }

}
