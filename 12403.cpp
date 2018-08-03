#include<cstdlib>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    int i,t;
    long long int amnt,sum=0;
    char don[10],ope[10];
    cin>>t;
    for(i=0;i<t;i++){
        cin>>ope;
        if((strcmp(ope,"donate"))==0){
            cin>>amnt;
            sum=sum+amnt;
        }
        else{
            cout<<sum<<endl;
        }
    }
    return 0;
}
