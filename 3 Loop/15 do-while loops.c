/*
kosusu islemlerden sonra kontorl ediyoruz burada.

do {

i�lemler

]
while(kosul);  dogruysa tekrar giriyor flase olunca assag�dan devam ediyor. 
Wgile ile terk fark ilk basta islem yap�oyr olmas� direkt
*/
#include<stdio.h>
int main() {
	
	int n=10 ;
	
	do{
		printf("%d\n",n);
		n--;
	}
	while(n>0);  /* burada sole bir proglem var e�er biz 0 � bast�rmak istemezsek ve n = 0 dersek gene 0 � yazd�racak
	��nk� while assag�da kal�yor daha sonra kontrol ediyor bu do while s�k�nt�l�. */
		
	/*
	??? 1234 rakamlar� top vekac haneli oldugunu */
	
	int a, hane = 0, toplam = 0;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	
	do{
		                          // 1234 degeri giirlince olacanlar
		toplam = toplam + (a%10); // kalanlar rakamlar� toplam�n� geliyor 4 + 3 + 2 + 1 
		hane++; // 1 , 2 , 3 , 4
		a = a/10; // 123, 12, 1 ve 0.1 oluyor a degeri ve dongu bozuluyor. 10 a sondaki rakam� ogrenmek i�in bboluyoruz.
	}
	while (a> 0);
	printf("Rakamlari toplam� %d %d haneli",toplam,hane);
	return 0; 
}
