#include<stdio.h>
#include<math.h> //kök almak için felan
/*
ax^2 + bx +c þeklindeki denklemin kökleri ? 
*/
int main() {
	
	int a,b,c;
    float x1,x2;
	float delta;	
	printf("Denklemin a'sini giriniz: ");
	scanf("%d",&a);                      //scanf \n yazmaya gerek yok kendi indiriyor bir alt satýra.
	printf("Denklemin b'sini giriniz: ");
	scanf("%d",&b);
	printf("Denklemin c'sini giriniz: ");
	scanf("%d",&c);
	
delta = b*b - 4*a*c;
x1 = (-b + (sqrt(delta)))/2*a;
x2 = (-b - (sqrt(delta)))/2*a;
	printf("Denklemin 1.koku %f, ikinci koku %f dir",x1,x2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
