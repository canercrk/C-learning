#include<stdio.h>

void bastir(int matrisimiz[][4],int size1){ 

   /*int matrisimiz[][],int size1, int size2 yazamazs�n bunun yerine
   int matrisimiz[][buraya de�eri girmen gerekiyor],int size1 yazmal�s�n int size2 yok burada
   yani ilk array de�er yazma size yap ikinciye direk de�eri gimek zoundas�n �ift boyutlu araylerde*/ 
	
	int i,j;
	
	for(i=0 ; i<size1 ; i++){
		for(j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);  //konuma g�re bast�r�yor. 0,0 da 1 sonra 0,1 de 2 varsa 1 2 diye bast�r�oyr ekreana bastri(matris,3); i�in
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
			
			scanf("%d",&matris[i][j]);    //!!!!! 0,0 konumuna hangi de�eri alayim diye soruyor .d sonra 0,1 konumuna hangi de�eri alim diyor. sonra de�erleri konuma yerle�tiriyor.
			
			
		}
		
	}
	
	bastir(matris,3); // burdaki 3 degeri i nin de�eri sat�rlar�n b
	
	return 0;
}
