#include<stdio.h>

int main()

{
    
	int vize,final;
	float ort,sinifort;
	
	
	printf("vize notunu giriniz:");
	scanf("%d",&vize);
	
	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	
	printf("Sinif ortalamanizi giriniz:");
	scanf("%f", &sinifort);
	
	ort = (vize * 40/100 + final * 60/100) / 2.0;  // þöyle de yazýlabilir. ort = (vize * 0.4 + final *0.6) / 2.0;
	
	printf("Ders ortalamaniz %.2f'dir.", ort);
	// sinifort = (sinifort * 1.0);	----> istersek bu kodu yazmayabiliriz.
	
	if(ort < sinifort ){
	printf("dersten kaldiniz.");
	
	}
	else if(ort >=sinifort){
	
	     printf("Dersten gectiniz.");
	
	}
	return 0;
}
