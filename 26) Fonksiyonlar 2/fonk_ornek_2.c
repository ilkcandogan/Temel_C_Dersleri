#include<stdio.h>

int faktoriyel(int sayi){
	int fak = 1;
	
	for(; sayi > 0; sayi--){
		
		fak *= sayi;
		
	}
	
	return (fak);
}



int main(){
	
	int n;
	
	printf("faktoriyelini istediginiz sayi:");
	scanf("%d",&n);
	
	printf("%d",faktoriyel(n));
	
	
	
	
	
	return 0;
}
