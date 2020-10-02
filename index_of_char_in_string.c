#include<stdio.h>
#include<stdlib.h>
#define N 20
void check(char*,char);
int main(){
	char s[N], znak;
	puts("Enter text: ");
	gets(s);
	printf("\nEnter a character: ");
	scanf("%c",&znak);
	check(s,znak);
	
	return 0;
}
void check(char *t, char ch){
	int k=0,j=0,i;
	while(t[j]!='\0'){
		k++;
		j++;
	}
	for(i=k-1; i>=0;i--){
		if(t[i]==ch){
			printf("\nindex of the last occurrence of %c int the string= %d.",ch,i);
			i=-1;
		}
	}
	if(i==-1) printf("Character %c does not occur.",ch);
}
