#include<stdio.h>
/* Fonksiyonlar int main//programlar�n cal��mas� icin gerekli 
printf ve scanf diye 4 tane fonkisyon gorduk bu zamana kaadar.

k�t�phanlerin icinde olanlar�n d�s�nda kendimiz olusturmak istersek :
	Fonksiyon TaNIMLAMA
	
	DonusTipi fonksiyonadi (parametreler(parametre olmasada olur birden fazlada olabilir)){
int donebilri float donebilir.  paramtre tan�mlama gibi bir �ey . 	
		
		yap�lacak islemler
	}
*/

/*
int mainin icinde bir say� alacaz ama negatif olmayacak negatif girerse hata mesaj� bast�rca��z.

fonksiyon hic bir �ey donmezse fonksiyon void oluyor.
 �cinde sadece printf felan oluyor gercek dunyaya hic bir �ey b�rakm�yor
*/
void hatayibas(int hata){  //parametrenin tipi olmal� bu parametrenin bu parametreye gore neler yap�laca�� bu veri tipi belirliyor.

//void fonk d�� d�nyaya bu fonksiyon i�indeki i�lemler sonucunda hii� bir �ey d�nmedi�i anlam�na geliyor

	printf("Hata Kodu %d",hata);
	
}
/* BU yukarda yapt�g�n �uanda bir ifade etmiyor.
Assag�da mainin icine printf scanf yapt�g�m�z gibi icine �a��rmam�z gerekiyor
*/

int main(){  //donen degerimiz int.   

 
	int sayi;
	printf("Lutfen negatif olmayan bir say� giriniz ");
	scanf("%d",&sayi);
	if (sayi < 0){
	
	hatayibas(404); /*voidi burada degimiz gibi iceriye ekledik
	             buraya gelince voide gidiyor ve bast�royr.(fonksiyon cagr�s� yukarda tan�mla burada ca��r)
	            	int hata=404;
                	printf("hata kodunuz %d",hata) ayn�s�. 
	!!!!!! Hatayi bas� gorunce yuka�r c�kt� .(404) gorunte hata degeri 404 esitlendi sonra geri kaaln islemelr yap�ld�.
	              */
	}
	else {
		printf("Tebrikler");
	}
	
	return 0;
}
