#include<stdio.h>
#include<string.h>

	struct ogrenci{
		
		char isim[20];
		char soyisim[20];
		int numara;
	};
	
struct ogrenci *degerAl(struct ogrenci *p){    // *degerAl = *p yani *o deki degerler degerAl kolesür içine kopyalandý ve o kolser içindeki p ler deðiþtirildi
		
	strcpy(p->isim, "Caner");
	strcpy(p->soyisim, "Crk");
	p->numara=455;
	return p;
};
	
	void goster (struct ogrenci *p){
		
		printf("Ogrencinin bilgileri \nIsim:%s \nSoyisim:%s \nNumara:%d",p->isim, p->soyisim, p->numara);
	}
	
	int main(){
		struct ogrenci *tut;
		
		struct ogrenci ogrenci1 = {"ibircik","cibircik",505};
		/*
		goster(&ogrenci1);
		*/
		tut = degerAl(&ogrenci1);
		
		printf("%s %s %d\n",tut->isim,tut->soyisim,tut->numara);
		printf("%s %s %d",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
		
		
		return 0;
	}
