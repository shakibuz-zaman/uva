#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    int x,i,j,tmp,N,co;
    while(cin>>N){
        co=0;
        for(i=0;i<N;i++){
            cin>>x;
            v.push_back(x);
        }
        for(i=0;i<N;i++){
            for(j=i+1;j<N;j++){
                if(v[j]<v[i]){
                        co=co+j-i;
                        tmp=v[j];
                        v.erase(v.begin()+j);
                        v.insert(v.begin()+i,tmp);
                }
            }
        }
    cout<<"Minimum exchange operations : "<<co<<endl;
    v.clear();
    }
    return 0;
}
