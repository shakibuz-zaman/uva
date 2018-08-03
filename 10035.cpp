#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,count;
    int dig1,dig2,ta,tb,hand,f,dig;
    //cout<<log10(122);
    while(1){
        count=0;
        cin>>a>>b;
        if(a+b==0)
            break;
        dig1=log10(a)+1;
        dig2=log10(b)+1;
        dig=(dig1>=dig2)?dig1:dig2;
        f=0;
        while(1){
            if(a==0&&b==0)
                break;
            ta=a%10;
            tb=b%10;
            if(f==0){
                if(ta+tb>=10){
                    count++;
                    hand=1;
                }
                else
                    hand=0;
            }
            if(f!=0){
                if(ta+tb+hand>=10){
                    count++;
                    hand=1;
                }
                else
                    hand=0;
            }
            a=a/10;
            b=b/10;
            f++;
        }
        if(count==0)
            cout<<"No carry operation.\n";
        else if(count==1)
            printf("%lld carry operation.\n",count);
        else
            printf("%lld carry operations.\n",count);
    }
    return 0;
}
