#include<stdio.h>
int main(){
	int vize1;
	int vize2; //yerine int vize1,vize2,final; yazabilirsin.
	int final;
	float dersort;
	float gano;
	
	printf("1.vize notunuzu giriniz lütfen ");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz lütfen ");
	scanf("%d",&vize2);
	printf("Final notunuzu giriniz lütfen ");
	scanf("%d",&final);
	printf("Gano notunuzu giriniz lütfen ");
	scanf("%f",&gano);
	
	dersort = (vize1*3/10.0+vize2*3/10.0+final*4/10.0);
	
	if(dersort >= 90){
		printf("Harf notunuz AA ve ders ortalamanýz %f",dersort);
	
	}
	else if (dersort>=85 && dersort <90){
	    printf("Harf notunuz BA ve ders ortalamanýz %f",dersort);	
	}
	else if(dersort >=80 && dersort < 85){
		printf("Harf notunuz BB ve ders ortalamanýz %f",dersort);
	}
	else if(dersort >=75 && dersort < 85){
		printf("Harf notunuz CB ve ders ortalamanýz %f",dersort);
	}
	else if(dersort >=70 && dersort < 75){
		printf("Harf notunuz CC ve ders ortalamanýz %f\n",dersort);
		    if(gano < 2.5);
			printf("Dersi tekrar alsan iyi olur");  
	}
	else if(dersort >=65 && dersort < 70){
		printf("Harf notunuz DC ve ders ortalamanýz %f\n",dersort);
		    if(gano < 2.5);
			printf("Dersi tekrar alsan iyi olur");
	}
	else if(dersort>=60 && dersort < 65){
		printf("Harf notunuz DD ve ders ortalamanýz %f\n",dersort);
		    if(gano < 2.5);
			printf("Dersi tekrar alsan iyi olur");
	}
	else {
	    printf("Harf notunuz FF ve ders ortalamanýz %f\n",dersort);
	    printf("Dersten Kaldiniz");
	}
	return 0;
}
