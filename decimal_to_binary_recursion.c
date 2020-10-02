#include<stdio.h>
#include<stdlib.h>
void binary(int x){
	if(x>0){
		binary(x/2);
		if(x%2==0) printf("0 ");
		else printf("1 ");
	}
}
int main(){
	int a,b,run=1;
	while(run){
	printf("\n\nPodaj 1, aby wpisac liczbe. / Type 1 to give a number.\nPodaj 2, aby zakonczyc program. / Type 2 to end the programme.\n");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("Podaj liczbe calkowita dodatnia / Give a positive integer number: ");
			scanf("%d",&b);
			if (b>=0){
				printf("Reprezentacja binarna / Binary representation:\t");
				binary(b);
			}
			else printf("Podales zla wartosc. / You have given a wrong number.\n");
			break;
		case 2:
			printf("Koniec. / End.");
			run=0;
			break;
		default:
			printf("Podales zla wartosc. / You have given a wrong number.");
			break;
	}
	}
	

	return 0;
}

