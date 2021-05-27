#include<stdio.h>
//call by reference adresle göndermek
void degerdegistir(int *a,int *b){
	
	int gecici= *a;   
	
	*a = *b ;
	*b = gecici;
	
	
}

int main(){
	
	int x = 5, y=10;   //x y oluştu. Yukarda a b kutucukalrı oluşup x ve yenin adresi a ile b ye atarak a nın x i b nin y yi işaret etmesini sağlıyor.
	
	
	degerdegistir(&x,&y); // x ile y nin adresini a ile b kutucuğuna atıyorsun.kutucukların içindeki derğerlerle işlem yapılıyor.
	// degerdegistir bitince gene üsteki a b siliniyor.
	printf("x:%d y:%d",x,y);
	
	return 0;
}
