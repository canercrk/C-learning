#include<stdio.h>

int main(){
	
	/*
	-x, x+y*z, (x/7)*y, (a % b) - (x*a +1), 3+4*7 gibi ifadeler birer aritmeik ifadedir.
	
	��lem S�ras�:
	Tekli operat�rler: (+) (-) (-x,+x) 1.�ncelik kendi aralar�nda sa�dan sola
	�kili Opera�treler: *, /, % 2. �ncelik. Kedni aralar�nda soldan sa�a
	�kili Opera�treler: +,-   3.�ncelik. Kendi aralar�nda soldan sa�a
	
	parantez i�leri her zaman ilk planda yap�l�r
	!!!!!!!Matematikle ayn�.
	*/
	
	printf("%d\n",2-3+4);
	printf("%d\n",2*3-4);
	printf("%d\n",2-3/4);
	printf("%d\n",2+3%4);
	printf("%d\n",2/3*4);
	printf("%d\n",2%3/4);
	printf("%d\n",-2+3);
	printf("%d\n",2*-3);  
	printf("%d\n",-2*-3);
	printf("%d\n",(2+3)%4);
	
	
	
	
	
	
	
	return 0;
}
