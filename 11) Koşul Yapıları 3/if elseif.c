#include<stdio.h>

int main(){
	
	int vize,final;
	float ort;
	float genelort;  
	
	
	printf("vize notunuzu giriniz:");
	scanf("%d",&vize);
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	printf("universite ortalamanizi girin:");
	scanf("%f",&genelort);
	ort = (vize + final) / 2.0;
	
	if(ort >60){
		
	    printf("dersten gectiniz");
		
	}
	
	
	
	
	
		
	else if(ort >50 ) {
		
       printf("bute kaldiniz");
   }
   
       if(genelort < 2.5){
	   
	       printf("butten gecseniz bile seneye dersi tekrar alin.cunku genel ortalama dusuk.");
	   
	   }
	
	else {
		
	    printf("dersten kaldiniz.");
	}
	
	
	return 0;
}
