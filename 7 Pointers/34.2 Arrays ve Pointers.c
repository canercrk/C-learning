/*arrayleri pointer yard�m�yla nas�l fonkisyonlara g�nderebiliriz	?
ilk ba�ta pointers�z sonra pointera �eviriyoruz.
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
	
	printf("Sayilar dizisinin en b�y�k elmana� %d dir",maks);
	
	
	return 0;
	
}
*/
int max(int *a,int uzunluk){
	int maks = a[0];
	
	int i;
	for(i=1; i< uzunluk ; i++){   /* sayilar arayin ba�lang�� adresi gidecek  daha sonra zaten sayilar i yerina ai yap�p 
									pointer�m�za arrayin ba�lang�� addresini g�derdi�imiz i�in
									arrayimzin ismini kullanmam�za gerek yok pointr�m�z�n ismini kullan�yoruz */
		if( a[i]> maks){
			maks = a[i];
		}
	} 
	return maks;
}


int main(){
	
	int sayilar[5]={1,4,42,100,1};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar dizisinin en b�y�k elmana� %d dir",maks);
	
	
	return 0;
	
}
