#include<bits/stdc++.h>
using namespace std;
int per(string s);
int summ(int x);
int main(){
    int d1,d2,m1,m2,y1,y2,age,t,i;
    string s,ss;
    float res;
    while(getline(cin,s)){
        getline(cin,ss);
        (per(s)<per(ss))?res=(1.0*per(s))/per(ss):res=(1.0*per(ss))/per(s);
        printf("%.2f %%\n",res*100);
    }
    return 0;
}
int per(string s){
    int i,j,len=s.length(),sum=0;
    for(i=0;i<len;i++){
        if(isalpha(s[i])){
        if(isupper(s[i]))
            sum=sum+s[i]-64;
        else
            sum=sum+s[i]-96;
        }
    }
    while(sum>=10){
        sum=summ(sum);
    }
    return sum;
}
int summ(int x){
    int sum=0;
    while(x>0){
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}

