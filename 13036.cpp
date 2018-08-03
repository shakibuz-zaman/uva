#include<bits/stdc++.h>
#define lli long long int
using namespace std;
bool check(lli N,lli pos){return (bool)(N & (1<<pos));}
int Set(lli N,lli pos){	return N=N | (1<<pos);}
int prime[100];
int status[1000000001/32];
void sieve()
{
     lli N=1000000001,i,j;
     int sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( check(status[i/32],i%32)==0)
		 {
	 		 for( j = i*i; j <= N; j += 2*i )
			 {
				 status[j/32]=Set(status[j/32],j % 32)   ;
	 		 }
		 }
	 }
	 puts("2");
	 for(i=3;i<=1000;i+=2)
		 if( check(status[i/32],i%32)==0)
	 	 printf("%d\n",i);

}
int main(){
    sieve();
    cout<<check(status[31250001/32],2%32);
}
