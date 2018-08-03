#include <bits/stdc++.h>
using namespace std;
int age();
int td,tmm,ty,bd,bm,by;
int main(){
    int t,i,j;
    while((scanf("%d",&t))!=EOF){
        for(int i=1;i<=t;i++){
            scanf("%d/%d/%d",&td,&tmm,&ty);
            scanf("%d/%d/%d",&bd,&bm,&by);
            int a=age();
            if(a<0)
                cout<<"Case #"<<i<<": Invalid birth date\n";
            else if(a>130)
                cout<<"Case #"<<i<<": Check birth date\n";
            else
                cout<<"Case #"<<i<<": "<<a<<endl;
        }
    }
    return 0;
}
int age(){
    if(td-bd<0){
        bm++;
    }
    if(tmm-bm<0){
        by++;
    }
    return ty-by;
}

