#include<stdio.h>
int main() {
	
	int vize1,vize2,final;
	float dersort;
	float gano;
	printf("1.vize notunuzu giriniz: ");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz: ");
	scanf("%d",&vize2);
	printf("Final notunuzu giriniz: ");
	scanf("%d",&final);
	printf("Ganonuz kac: ");
	scanf("%f",&gano);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if(dersort > 60) {
		
		printf("Dersten gectiniz");
	}
	else if(dersort > 50){   // bir a�a�� i�in zaten else kuln�yorduk if ise yeni ko�ul i�in yazmam�z gerekiyor.Else bir �steki sa�larsa buraya denemz. ifler sa�lanmazsa else girer.
		
		printf("Dersten bute kaldiniz. ");
		
		if(gano < 2.5){
			printf("Butu gecsen bile dersi seneye al cunku ortalaman dusuk");
		}//else koyaman gerek yok buna yazd�rmak istemiyoruz ba�ka bir �ey ��nk�
		
	}
	else {
		printf("kaldiniz");
	}
	return 0;
}
