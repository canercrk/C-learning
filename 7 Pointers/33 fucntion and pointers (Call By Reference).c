#include<stdio.h>
//call by reference adresle g�ndermek
void degerdegistir(int *a,int *b){
	
	int gecici= *a;   
	
	*a = *b ;
	*b = gecici;
	
	
}

int main(){
	
	int x = 5, y=10;   //x y olu�tu. Yukarda a b kutucukalr� olu�up x ve yenin adresi a ile b ye atarak a n�n x i b nin y yi i�aret etmesini sa�l�yor.
	
	
	degerdegistir(&x,&y); // x ile y nin adresini a ile b kutucu�una at�yorsun.kutucuklar�n i�indeki der�erlerle i�lem yap�l�yor.
	// degerdegistir bitince gene �steki a b siliniyor.
	printf("x:%d y:%d",x,y);
	
	return 0;
}
