#include<stdio.h>
#define PI 3.14


int main(){           //kürenin hacmini hesaplayan program.
	
	int yaricap;
	float hacim;
	
	
	printf("kurenin yaricapini giriniz:");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)* PI * (yaricap * yaricap * yaricap);
	
	printf("kurenin hacmi %.2f'dir.", hacim); 	
	
	
	
	
	return 0;
}
