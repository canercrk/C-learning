#include<stdio.h>
int main (){
	//5 say� iste arrayle o say�lar�n aritmetik ort al
	
	
	float sayilar[5]; //arrayin boyutu 5 den fazla de�er alamaz. zaten assag�da i de d 5 deger isteyecek sekilde ayarlam�ss�n
	float toplam=0.0;
	int i;
	for(i=0;i<5;i++){
		
		printf("Aritmetik hesaplama icin deger girer misiniz: ");
		scanf("%f",&sayilar[i]);    //burada 5 deger girdi ve bunlar depoland� s�ras�yla .i�te 0. indexe ilk girdi�i felan diye.
	}
    for(i=0;i<5;i++){
    	toplam = toplam +sayilar[i];          //s�ras�yla depolanan degerler s�ras�yla isleme al�nd�.
                                                   
	}
	printf("Girdiginiz sailarin aritmetik ortlamas�: %.2f",toplam/5);
	
	return 0;
}
