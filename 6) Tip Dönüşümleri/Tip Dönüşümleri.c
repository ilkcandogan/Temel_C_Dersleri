#include<stdio.h>


int main()


{
	int x = 4;
	float y= 4.2;
    double g = 5.33;
	
	printf("%d\n",x);
	printf("%f\n", y);
	printf("%f\n",g);
	
	printf("%d\n", x);
	printf("%d\n",(int)y);
	
	printf("%f\n", (float)x);
	printf("%d\n", (int)g);
	
	//float veritipini tekrardan float a çevirmenin bir anlamý yok. 
	//Örneðin printf("%f", (float)y); anlamsýz olur çünkü zaten float 
	
	
	//Derleyici default ayarýnda yani oto tip dönüþtürürken 
	//bellekte daha fazla yer kaplayan veritipine dönüþtürür sonucu.
	
	return  0;
}
