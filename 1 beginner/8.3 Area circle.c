#include<stdio.h>
#define PI 3.14
int main(){
	float yaricap;
	float alan;
	printf("Alanini merak ettiginiz daire yar�capini metre cinsinden giriniz: ");
	scanf("%f",&yaricap);
	 
	alan =  PI*yaricap*yaricap;
	
	printf("Darienin alan� %.2f ",alan);

	
return 0;
}
