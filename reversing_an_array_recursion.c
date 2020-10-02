#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15
void losuj(int *,int);
void drukuj(int *,int);
void odwrot(int *,int,int,int);
int main(){
	int tab[N],a=0;
	losuj(tab,N);
	drukuj(tab,N);
	odwrot(tab,N,a,N-1);
	printf("\n");
	drukuj(tab,N);
	return 0;
}
void losuj(int *t,int n){
int i;
for (i=0;i<n;i++) 
   t[i]=rand()%100;	
}
void drukuj(int *t,int n){
int i;
for (i=0;i<n;i++) printf("%d  ",t[i]);
}
void odwrot(int *t,int n,int i,int j){
	int temp;
	if(i<=(n/2)){
		temp=t[i];
		t[i]=t[j];
		t[j]=temp;
		odwrot(t,n,++i,--j);
	}
}
