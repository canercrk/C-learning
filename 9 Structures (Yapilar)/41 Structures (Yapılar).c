#include <stdio.h>
/*
Struct yap�lar:

 de�i�ken tiplerimiz sadece 1 tane de�er tutuyorlard� ancak bizim bir tane veri tipimiz olsun ve bu veri tipimiz birden fazla de�i�keni tutabilen �eylere yap� diyoruz bu yap�lar
 de�i�ken veri tiplerinin tuttu�u de�i�kenleri bir arada birden fazlas�n� tutabiliyor.
 */
 
 /*
 	struct 							etiketad� {
yap� oldu�unu belirtiyoruz			yap�n�n ismi ahmet ay�e ��renci felan
			
			de�i�ken tipi ,veri tipi yani    de�i�ken1;
			de�i�ken tipi                   de�i�ken2;
			de�i�ken tipi   				de�i�ken3;
			.
			.
			.
};
diyerek kapat�yoruz. ve tan�mlam�� oluyoruz ama a����da olu�turmama�z gerekiyor

*/			
struct student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};

int main(){
/*bu yap�dan bir de�i�ken ismi olturacaz 
ve bu de�i�keni i�indeki de�erle ba�da�t�racaz.

Student veri tipinden(de�i�ken tipinden,veri yap�s�ndan)  
biz bir tane nesne olu�turaracaz diyoruz mesala ahmet:

	yap� | bizim olu�turdu�umuz veri tipi  | de�i�ken(nesne)
 */
 
	struct student caner = {"Caner","Crk",135,21};
		
		printf("%s %s %d %d",caner.isim,caner.soyisim,caner.numara,caner.yas);
		
	//nesne i�inde 4 tane de�i�ken sakl�yor ancak bizim bunalr� ba�latmam�z laz�m ayn� array mant���
			
	
	return 0;
}
