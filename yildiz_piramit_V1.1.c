#include<stdio.h>
int main () {
	int i,k,j,satir=0,yildiz,bosluk;
	
	printf("Satir sayisi girin:");
	scanf("%d", &satir);
	
	yildiz=1;
	bosluk=satir-1;
	
	for(i=0; i< satir; i++) {
		for(j=0;j < bosluk; j++) {
			printf(" ");
		}
		for(k=0;k < yildiz; k++) {
			printf("*");
		}
			
	printf("\n");
	bosluk--;
	yildiz += 2;	
	}

return 0;
}
