#include<stdio.h>


int main(){
	/*
	 int matris[3][3] = {{1,2,3}, {4,5,6},{7,8,9}}; // diziler sýfýrdan baþlar. 
	 
	 printf("%d", matris[2][2]);
	 
	 */
	 
	 
	
	int matris[3][3];
	int i, j;
	////////////////////////////////////////////////////////////////////////////////
	for(i = 0; i < 3; i++){     
		
		for(j = 0; j<3; j++){
		                                  //for döngüsü içinde scanf() kullanarak matrisin
		scanf("%d", &matris[i][j]);       //içini doldurdum.
		
		}
	
	}
	////////////////////////////////////////////////////////////////////////////////
	
	
	////////////////////////////////////////////////////////////////////////////////
	for(i = 0; i< 3; i++){
		
		   for(j = 0; j<3; j++){
		   	  printf("%d ",matris[i][j]);     //for düngüsü içinde printf() kullanarak
		   }                                  //matrisi ekrana yazdýrdým.
	          printf("\n");  
	     
	}
	    
	/////////////////////////////////////////////////////////////////////////////////
	
	return 0;
}
