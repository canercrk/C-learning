//kullan�c�dan say� al sya�n�n faktoriyelini s�yle
#include<stdio.h>

int fakt(int sayi){
	
	int fact =1;
	
	for (;sayi>0;sayi--){ //sayiyi sen belirledi�in i�in buray� bos b�rakt�k
		
		fact*=sayi; //fact = fact*sayi ; demek
	}
	
	return fact;
}


int main() {
	
	int n;
	
	printf("Faktoryelini istediginiz sayiyi giriniz lutfen ");
	scanf("%d",&n);
	
	printf("Faktoriyel %d",fakt(n)); 
	
	
	return 0;
}
