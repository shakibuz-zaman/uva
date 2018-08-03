#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    int i,co;
    char sen[500];
    while((gets(sen))!=0){
        co=0;
        for(i=0;i<strlen(sen);i++){
            if(isalpha(sen[i])){
                if(!isalpha(sen[i+1]))
                    co++;
                }
        }
        cout<<co<<endl;
    }
    return 0;
}
