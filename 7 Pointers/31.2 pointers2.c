#include<stdio.h>

int main(){
	
	int i,j=1;          //	int i,j=1,*jp1,*jp2 = &j; diyede yazabilirsini.
	int *jp1,*jp2 = &j;
		
	
	jp1=jp2 ;  //adresleri e�itledim 2 side ayn� yeri g�steriyor art�k
	
	i = ++(*jp2);       //jp2 kutucu�unun i�ine gidecek de�eri alacak ve o de�eri artt�r�p i ye e�itleyecek.
	
	*jp2 = *jp1 + i ;  // jp1 kutuusndaki dee�ri + i ekleyip jp2 kutusunun i�ine koydu.i�indeki de�erler de�i�ince asl��la�da de�i�iyor zaten ayn� �eyler. 
	
	printf("i = %d , j= %d, *jp1 = %d , *jp2 = %d \n",i,j,*jp1,*jp2);  //de�erlerde hep * kullan
	// *jpler zaten g�sterdi�i de�er jp kutucu�unun i�indeki de�er demek. Bu de�er de�i�ince as�l g�sterdi�ide de�i�iyor zaten.
	
	
	
	
	return 0;
}
