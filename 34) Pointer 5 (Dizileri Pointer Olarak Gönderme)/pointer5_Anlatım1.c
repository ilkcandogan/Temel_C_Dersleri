#include<stdio.h>


int main(){
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; //  int *p = sayilar; da yazabiliriz. Ýlk baþlangýc indexini alabilmek için.
	
/*	
	printf("%u\n",p);
	printf("%u\n",p+1); // p+1 yazdýðým zaman adresin 4 fazlasýný verir çünkü bellekte her kutucuk 4 byte'týr. 4 fazlasýnýn baþlangýc adresini verir.
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4);
	
*/

      printf("%d\n",*p);	
      printf("%d\n",*(p+1));
      printf("%d\n",*(p+2));
      printf("%d\n",*(p+3));
      printf("%d\n",*(p+4));
	

	printf("\n\n\n"); // çýktýlar karýþmasýn diye 3 satýr aþaðýya atladým.
	
	
		// *(p+1)  ---------------> p[1]  ikiside aynýdýr ve offset adý verilir. Assembly de offset kavramý önemli burda önemli deðil.
	
	  printf("%d\n",p[0]);	
      printf("%d\n",p[1]);
      printf("%d\n",p[2]);
      printf("%d\n",p[3]);
      printf("%d\n",p[4]);
	
	
	return 0;
}
