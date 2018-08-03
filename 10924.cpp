#include<iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    char s[32];
    int x,i,sum,flag;
    while((scanf("%s",s))!=EOF){
        flag=0;
        sum=0;
        for(i=0;i<strlen(s);i++){
            if(s[i]>='a'&&s[i]<='z'){
            sum+=(s[i]-'a'+1);
            }
            else{
                sum+=(s[i]-'A'+27);
            }
        }
        for(i=2;i<=sum/2;++i){
            if(sum%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"It is not a prime word.\n";
        }
        else{
            cout<<"It is a prime word.\n";
        }
    }
    return 0;
}
