#include<stdio.h>
int main (){
	//5 sayı iste arrayle o sayıların aritmetik ort al
	
	
	float sayilar[5]; //arrayin boyutu 5 den fazla değer alamaz. zaten assagıda i de d 5 deger isteyecek sekilde ayarlamıssın
	float toplam=0.0;
	int i;
	for(i=0;i<5;i++){
		
		printf("Aritmetik hesaplama icin deger girer misiniz: ");
		scanf("%f",&sayilar[i]);    //burada 5 deger girdi ve bunlar depolandı sırasıyla .işte 0. indexe ilk girdiği felan diye.
	}
    for(i=0;i<5;i++){
    	toplam = toplam +sayilar[i];          //sırasıyla depolanan degerler sırasıyla isleme alındı.
                                                   
	}
	printf("Girdiginiz sailarin aritmetik ortlaması: %.2f",toplam/5);
	
	return 0;
}
