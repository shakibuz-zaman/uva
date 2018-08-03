#include<bits/stdc++.h>
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;
struct node{
    bool endmark;
    node *next[3];
    node(){
        endmark=NULL;
        for(int i=0;i<3;i++)
            next[i]=NULL;
    }

}*root;
void insertion(string str){
    int len=str.length(),i,id;
    node *curr=root;
    for(i=0;i<len;i++){
        id=str[i]-'0';
        if(curr->next[id]==NULL)
            curr->next[id]=new node();
        curr=curr->next[id];
    }
    curr->endmark=1;
}



int main(){

}
