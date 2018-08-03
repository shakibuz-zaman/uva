#include<iostream>
using namespace std;
int main (){
    int t,a,b,c,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a+b>c)
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}

