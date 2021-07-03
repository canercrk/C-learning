#include<stdio.h>

struct grenci{
	char isim[20];
	char soyisim[20];
	int numara;
	
};



int main(){
	
	
	struct grenci ogrenciler[3]; // ogrenci structýnda(yapýsýnda olan 3 tane nesnemiz bulunuyor).
	
	int i;
	for(i=0;i<3;i++){
		printf("%d inci ogrencinin bilgilerini giriniz",i+1);
	//	scanf("%s %s %d",&isim,&soyisim,&numara); bunun yerine
		scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);	
	} 
	
	for(i=0;i<3;i++){
		printf("%d inci ogrencinin bilgileri %s %s %d \n",i+1, ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
	
	}
	
	
	return 0;
}
