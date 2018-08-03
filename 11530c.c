#include<stdio.h>
#include<string.h>
int main(){
    int t,i,j,x,m,n;
    char ch,str[100];
    while((scanf("%d",&t))!=EOF){
        i=1;
    while(i<=t){
        gets(str);
        m=0;
        x=strlen(str);
        if(x==0) continue;
        for(j=0;j<x;j++){
            switch(str[j]){

                case 'a' :{m+=1;break;}
                case 'b' :{m+=2;break;}
                case 'c' :{m+=3;break;}
                case 'd' :{m+=1;break;}
                case 'e' :{m+=2;break;}
                case 'f' :{m+=3;break;}
                case 'g' :{m+=1;break;}
                case 'h' :{m+=2;break;}
                case 'i' :{m+=3;break;}
                case 'j' :{m+=1;break;}
                case 'k' :{m+=2;break;}
                case 'l' :{m+=3;break;}
                case 'm' :{m+=1;break;}
                case 'n' :{m+=2;break;}
                case 'o' :{m+=3;break;}
                case 'p' :{m+=1;break;}
                case 'q' :{m+=2;break;}
                case 'r' :{m+=3;break;}
                case 's' :{m+=4;break;}
                case 't' :{m+=1;break;}
                case 'u' :{m+=2;break;}
                case 'v' :{m+=3;break;}
                case 'w' :{m+=1;break;}
                case 'x' :{m+=2;break;}
                case 'y' :{m+=3;break;}
                case 'z' :{m+=4;break;}
                case ' ' :{m+=1;break;}
                default  :m+=0;
            }
        }
        printf("Case #%d: %d\n",i,m);
        i++;
    }
    }
    return 0;
}
