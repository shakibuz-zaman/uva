#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<cstdlib>
int digitc(int x);
void remove(char *str,int pos,int l);
using namespace std;
int main(){
    char s[201],ch;
    int n,t,y,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>s;
        int le=strlen(s);
        printf("Case %d: ",i);
        while(s[0]!='\0'){
            ch=s[0];
            remove(s,0,1);
            n=atoi(s);
            y=digitc(n);
            if(n==0){
                n=1;
                y=0;
            }

            for(j=0;j<n;j++){
                cout<<ch;
            }
            remove(s,0,y);
        }
        cout<<endl;
    }
}
void remove(char *str,int pos,int l){
    int len=strlen(str),m,n=pos+l;
    for(m=pos;m<len-l;m++){
        str[m]=str[n];
        n++;
    }
    str[len-l]='\0';
}
int digitc(int x){
    int r,c=0;
    while(x>0){
        c++;
        x=x/10;
    }
    return c;
}
