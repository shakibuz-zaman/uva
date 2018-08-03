#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#define H 1.008
#define C 12.01
#define O 16.0
#define N 14.01
int digitc(int x);
void remove(char *str,int pos,int l);
using namespace std;
int main(){
    char s[100],ch;
    int n,t,y,i;
    double sum;
    cin>>t;
    for(i=0;i<t;i++){
        sum=0;
        cin>>s;
        int le=strlen(s);
        while(s[0]!='\0'){
            ch=s[0];
            remove(s,0,1);
            n=atoi(s);
            y=digitc(n);
            if(n==0){
                n=1;
                y=0;
            }
            if(ch=='C'){
                sum+=C*n;
            }
            else if(ch=='H'){
                sum+=H*n;
            }
            else if(ch=='O'){
                sum+=O*n;
            }
            else{
                sum+=N*n;
            }
            remove(s,0,y);
        }
        printf("%.3lf\n",sum);
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
