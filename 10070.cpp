#include<bits/stdc++.h>
#define lli long long int
using namespace std;
void res(string ss);
int main(){
        string s;
        int co=0;
        while(cin>>s){
            if(co>0)
                cout<<endl;
            res(s);

            co++;
        }
        return 0;
}
void res(string ss){
    bool f=false;
    int m4=0, m100=0,m15=0,m55=0,m400=0;
    for(int i=0;i<ss.length();i++){
        m4=(m4*10+ss[i]-'0')%4;
        m15=(m15*10+ss[i]-'0')%15;
        m55=(m55*10+ss[i]-'0')%55;
        m100=(m100*10+ss[i]-'0')%100;
        m400=(m400*10+ss[i]-'0')%400;
    }

   if ((!m4 && m100) || !m400){
            printf("This is leap year.\n");
            if (!m15)
                printf("This is huluculu festival year.\n");
            if (!m55)
                printf("This is bulukulu festival year.\n");
        }
        else{
            if (!m15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
}
