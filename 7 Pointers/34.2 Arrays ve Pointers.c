/*arrayleri pointer yardýmýyla nasýl fonkisyonlara gönderebiliriz	?
ilk baþta pointersýz sonra pointera çeviriyoruz.
*/
#include<stdio.h>
/*
int max(int a[],int uzunluk){
	int maks = a[0];
	
	int i;
	for(i=1; i< uzunluk ; i++){
		if( a[i]> maks){
			maks = a[i];
		}
	} 
	return maks;
}


int main(){
	
	int sayilar[5]={1,4,42,100,1};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar dizisinin en büyük elmanaý %d dir",maks);
	
	
	return 0;
	
}
*/
int max(int *a,int uzunluk){
	int maks = a[0];
	
	int i;
	for(i=1; i< uzunluk ; i++){   /* sayilar arayin baþlangýç adresi gidecek  daha sonra zaten sayilar i yerina ai yapýp 
									pointerýmýza arrayin baþlangýç addresini göderdiðimiz için
									arrayimzin ismini kullanmamýza gerek yok pointrýmýzýn ismini kullanýyoruz */
		if( a[i]> maks){
			maks = a[i];
		}
	} 
	return maks;
}


int main(){
	
	int sayilar[5]={1,4,42,100,1};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar dizisinin en büyük elmanaý %d dir",maks);
	
	
	return 0;
	
}
