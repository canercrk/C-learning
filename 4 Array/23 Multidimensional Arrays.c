#include<stdio.h>
int main(){
	/*cok boyurlu dizilere ornek
	matrix yap�s�
		1 2 3
		4 5 6
		7 8 9 bu 3 e 3 matrixdir.
	*/
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}} ; /*3 sat�r 3 stun olmas�n� istersen boyle yapars�n ve 9 tane yerin var.
	.ve icini boyle doldurrusun. Yukardaki gibi bast�rmak istersen.
		bu da digerleri gibi arraylerde indexleme ayn� 0n sat�r diye basl�yor. 
		mesala 3 �n yeri 0.sat�r 2. sutundur.
	*/
	printf("%d\n",matrix[0][2]);
	
	
	int i,j;
	
	for(i=0 ; i<3;i++){

		for(j=0; j<3;j++){
			
			printf("%d ",matrix[i][j]);  //burada 0. sat�r ama stun artacak ve 1 2 3 diye yazd�r�nca ��kacak ve basa donecek hep bunu yapcak.
			
		}
		printf("\n");
	}
	
	//kullan�c�dan deger isteyerek yapma
	int metrix[3][3];
	int a,b;
		
		for(a=0;a<3;a++){
			for(b=0;b<3;b++){
				scanf("%d",&metrix[a][b]);   //0,0 konumuna hangi de�eri alayim diye soruyor sonra 0,1 konumuna hangi de�eri alim diyor.
			}
		}
		for(a=0; a<3; a++){
			for(b=0; b<3; b++){
				printf("%d ",metrix[a][b]);
			}
			printf("\n");	
		}
	
	
	return 0;
}
