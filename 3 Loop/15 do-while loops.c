/*
kosusu islemlerden sonra kontorl ediyoruz burada.

do {

iþlemler

]
while(kosul);  dogruysa tekrar giriyor flase olunca assagýdan devam ediyor. 
Wgile ile terk fark ilk basta islem yapýoyr olmasý direkt
*/
#include<stdio.h>
int main() {
	
	int n=10 ;
	
	do{
		printf("%d\n",n);
		n--;
	}
	while(n>0);  /* burada sole bir proglem var eðer biz 0 ý bastýrmak istemezsek ve n = 0 dersek gene 0 ý yazdýracak
	çünkü while assagýda kalýyor daha sonra kontrol ediyor bu do while sýkýntýlý. */
		
	/*
	??? 1234 rakamlarý top vekac haneli oldugunu */
	
	int a, hane = 0, toplam = 0;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	
	do{
		                          // 1234 degeri giirlince olacanlar
		toplam = toplam + (a%10); // kalanlar rakamlarý toplamýný geliyor 4 + 3 + 2 + 1 
		hane++; // 1 , 2 , 3 , 4
		a = a/10; // 123, 12, 1 ve 0.1 oluyor a degeri ve dongu bozuluyor. 10 a sondaki rakamý ogrenmek için bboluyoruz.
	}
	while (a> 0);
	printf("Rakamlari toplamý %d %d haneli",toplam,hane);
	return 0; 
}
