#include<cstdlib>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    int t=1;
    char input[10];
    while(1){
        cin>>input;
        if((strcmp(input,"*"))==0){
            break;
        }
        else if((strcmp(input,"Hajj"))==0){
            cout<<"Case "<<t<<": Hajj-e-Akbar\n";
        }
        else{
            cout<<"Case "<<t<<": Hajj-e-Asghar\n";
        }
        t++;
    }
    return 0;
}
