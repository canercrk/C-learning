#include<stdio.h>
#include<string.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	
};

int main(){
	
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Caner");
	strcpy(ogrenci1.soyisim,"Crk");
	ogrenci1.numara = 144;
	
	tut = &ogrenci1;
	printf ("%s %s %d \n", ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
	printf("%s %s %d ",tut->isim,tut->soyisim,tut->numara); 
	
	 
	return 0;
}
