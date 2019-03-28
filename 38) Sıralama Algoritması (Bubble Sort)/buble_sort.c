#include<stdio.h>

#define MAX 50

void sirala(int dizi_1[],int boyut){
	int i,j;
	
	for(i=0; i < boyut; i++){
		for(j=1; j < boyut-i; j++){
		    if(dizi_1[j-1] > dizi_1[j]){
		    	int gecici = dizi_1[j];
		    	dizi_1[j] = dizi_1[j-1];
		    	dizi_1[j-1] = gecici;
			}
		}
	}
}

int main(){
	int dizi_2[MAX],boyut;
	int i;
	
	printf("Kac elemanli: ");
	scanf("%d",&boyut);
	
	for(i=0; i < boyut; i++){
		
		scanf("%d",&dizi_2[i]);
	}
	
	sirala(dizi_2,boyut);
	
	for(i=0; i < boyut; i++){
		
		printf("%d ",dizi_2[i]);
	}
	
	return 0;
}
