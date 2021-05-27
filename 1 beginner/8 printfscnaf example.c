#include<stdio.h>

int main() {
	
    int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 tane deger gir lutfen= ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); //her giridði deðerden sonra enter demesi lazým.
	aritmetik = (a+b+c+d+e)/5.0;     
	printf("Girdiginiz sayilarin aritmetik ortlamasi %f",aritmetik); // artimetik direk %f e atanýyor	
	
	return 0;
}
