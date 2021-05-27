#include<stdio.h>
int main(){
	/*cok boyurlu dizilere ornek
	matrix yapısı
		1 2 3
		4 5 6
		7 8 9 bu 3 e 3 matrixdir.
	*/
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}} ; /*3 satır 3 stun olmasını istersen boyle yaparsın ve 9 tane yerin var.
	.ve icini boyle doldurrusun. Yukardaki gibi bastırmak istersen.
		bu da digerleri gibi arraylerde indexleme aynı 0n satır diye baslıyor. 
		mesala 3 ün yeri 0.satır 2. sutundur.
	*/
	printf("%d\n",matrix[0][2]);
	
	
	int i,j;
	
	for(i=0 ; i<3;i++){

		for(j=0; j<3;j++){
			
			printf("%d ",matrix[i][j]);  //burada 0. satır ama stun artacak ve 1 2 3 diye yazdırınca çıkacak ve basa donecek hep bunu yapcak.
			
		}
		printf("\n");
	}
	
	//kullanıcıdan deger isteyerek yapma
	int metrix[3][3];
	int a,b;
		
		for(a=0;a<3;a++){
			for(b=0;b<3;b++){
				scanf("%d",&metrix[a][b]);   //0,0 konumuna hangi değeri alayim diye soruyor sonra 0,1 konumuna hangi değeri alim diyor.
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
