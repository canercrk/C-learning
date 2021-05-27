#include<stdio.h>

void bastir(int matrisimiz[][4],int size1){ 

   /*int matrisimiz[][],int size1, int size2 yazamazsýn bunun yerine
   int matrisimiz[][buraya deðeri girmen gerekiyor],int size1 yazmalýsýn int size2 yok burada
   yani ilk array deðer yazma size yap ikinciye direk deðeri gimek zoundasýn çift boyutlu araylerde*/ 
	
	int i,j;
	
	for(i=0 ; i<size1 ; i++){
		for(j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);  //konuma göre bastýrýyor. 0,0 da 1 sonra 0,1 de 2 varsa 1 2 diye bastýrýoyr ekreana bastri(matris,3); için
		}
		printf("\n");
	}
}



int main(){
	
	int matris[3][4];
	int i,j;
	
	printf("Matrisi Doldurunuz: ");
	
	for(i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			
			scanf("%d",&matris[i][j]);    //!!!!! 0,0 konumuna hangi deðeri alayim diye soruyor .d sonra 0,1 konumuna hangi deðeri alim diyor. sonra deðerleri konuma yerleþtiriyor.
			
			
		}
		
	}
	
	bastir(matris,3); // burdaki 3 degeri i nin deðeri satýrlarýn b
	
	return 0;
}
