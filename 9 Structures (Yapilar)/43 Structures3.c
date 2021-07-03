#include<stdio.h>
#define MAX 100
#include<string.h> //strcopy için	
struct adress{
	char mahalle[MAX];
	char cadde[MAX];
	char sokak[MAX];
	
};

struct ogrenci{
	char isim[MAX];
	char soyisim[MAX];
	char numara;
	char yas;
	struct adress adres;
};



int main(){
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Caner");	// ogrenci1.iism içine caneri koyuyor ogrenci1.isim = "Caner"; gibi
	strcpy(ogrenci1.soyisim,"Crk");
	ogrenci1.numara =124; // int degerler direkt eþitleneceði için strcpy yapmaya gerek yok
	ogrenci1.yas = 21;
	strcpy(ogrenci1.adres.mahalle,"Bahcelievler");
	strcpy(ogrenci1.adres.cadde,"7.cad");
	strcpy(ogrenci1.adres.sokak,"1032 sok.") ;
	
	printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle, ogrenci1.adres.cadde, ogrenci1.adres.sokak);
	
	return 0;
}
