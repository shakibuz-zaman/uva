#include<bits/stdc++.h>
using namespace std;
struct node{
    bool endmark;
    node *next[15];
    node(){
        endmark=false;
        for(int i=0;i<10;i++){
            next[i]=NULL;
        }
    }
}*root;
bool insertion(string str){
    node *curr=root;
    bool rr=true;
    int len=str.length();
    for(int i=0;i<len;i++){
        int id=str[i]-'0';
        if(curr->next[id]==NULL){
            curr->next[id]=new node();
        }
        else{
            if(curr->next[id]->endmark==true){
                rr=false;
            }
        }
        curr=curr->next[id];
    }
    curr->endmark=true;
    return rr;
}
void del(node *cur){
      for(int i=0;i<10;i++)
             if(cur->next[i])
                  del(cur->next[i]) ;
          delete(cur);
}
int main(){

    string sin[10010];
    int i,j,t,n,m,x;
    bool res,tmp;
    cin>>t;

    for(i=1;i<=t;i++){
        root=new node();
        res=true;
        cin>>n;
        for(j=0;j<n;j++){
            cin>>sin[j];
        }
        sort(sin,sin+n);
        for(j=0;j<n;j++){
          tmp=insertion(sin[j]);
            if(!tmp){
                res=false;
                break;
            }
        }
        if(!res)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        del(root);
    }
    return 0;
}
