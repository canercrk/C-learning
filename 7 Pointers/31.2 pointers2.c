#include<stdio.h>

int main(){
	
	int i,j=1;          //	int i,j=1,*jp1,*jp2 = &j; diyede yazabilirsini.
	int *jp1,*jp2 = &j;
		
	
	jp1=jp2 ;  //adresleri eþitledim 2 side ayný yeri gösteriyor artýk
	
	i = ++(*jp2);       //jp2 kutucuðunun içine gidecek deðeri alacak ve o deðeri arttýrýp i ye eþitleyecek.
	
	*jp2 = *jp1 + i ;  // jp1 kutuusndaki deeðri + i ekleyip jp2 kutusunun içine koydu.içindeki deðerler deðiþince aslýýlaýda deðiþiyor zaten ayný þeyler. 
	
	printf("i = %d , j= %d, *jp1 = %d , *jp2 = %d \n",i,j,*jp1,*jp2);  //deðerlerde hep * kullan
	// *jpler zaten gösterdiði deðer jp kutucuðunun içindeki deðer demek. Bu deðer deðiþince asýl gösterdiðide deðiþiyor zaten.
	
	
	
	
	return 0;
}
