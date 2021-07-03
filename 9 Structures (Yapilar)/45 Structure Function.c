#include<stdio.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	
};
void goster(struct ogrenci a){ //ogrenci1=a
	
	printf("Ogrencinin bilgileri: %s %s %d",a.isim,a.soyisim,a.numara);
}

struct ogrenci degerAl(){
	
	struct ogrenci yeni;
	printf("Bilgilerini giriniz: ");
	scanf ("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);
	
	return yeni;
}


int main(){
//	struct ogrenci ogrenci1={"Mustafa Murat", "Coskun", 156};    
	struct ogrenci ogrenci1= degerAl() ;   	
	goster(ogrenci1);
	return 0;
}
