#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    int te,top,l,j;
    char s[130],stack[130];
    cin>>te;
    getc(stdin);
    while(te>=1){
        te--;
        top=-1;
        gets(s);
        l=strlen(s);
        if(s[0]==')'||s[0]==']'){
            cout<<"No\n";
        }
        else{
            for(j=0;j<l;j++){
                if(s[j]=='['||s[j]=='('){
                    top++;
                    stack[top]=s[j];
                }
                else if(s[j]==')'){
                    if(stack[top]=='('){
                        top--;
                    }
                    else{
                        top++;
                    }
                }
                else if(s[j]==']'){
                    if(stack[top]=='['){
                        top--;
                    }
                    else{
                        top++;
                    }
                }
            }
            if(top==-1){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }

    }
    return 0;
}
