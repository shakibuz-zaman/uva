#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    vector<int> v;
    long int n;
    int i,x;
    while(1){
        cin>>n;
        if(n==0)
            break;
        for(i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++){
            cout<<v[i];
            if(i<n-1)
                cout<<" ";
        }
        for(i=0;i<n;i++){
            v.pop_back();
        }
        cout<<endl;
    }
    return 0;
}
