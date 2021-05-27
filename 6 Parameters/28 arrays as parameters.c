#include<stdio.h>
/*arraylerin parametre olarak fonksiyonlara nasýl göndereciðini öðreneceðiz*/


int carp(int matris[],int size){ // tek boyutlu arrayler bu sekilde gönderiliyor array boyutuda belirtmelisin,int size diye.

	int carpim =1;
	
	int i = 0;
	for(;i<size;i++){
		
		carpim *= matris[i];
	}
	return carpim;
	
}

int main(){
	
	int sayilar[5] = {1,2,3,4,5};
	
	printf("%d",carp(sayilar,5)); //5 boyut bilgiis arrayde ble yazýlýyor
	
	

	return 0;
}
