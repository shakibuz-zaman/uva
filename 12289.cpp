#include<iostream>
using namespace std;
int main(){
    int n,i;
    string in;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>in;
        if(in.length()==3){
            if(in[0]=='o'&&in[1]=='n'||in[0]=='o'&&in[2]=='e'||in[1]=='n'&&in[2]=='e'){
                cout<<"1\n";
            }
            else
                cout<<"2\n";
        }
        else
            cout<<"3\n";
    }
    return 0;
}

