/*kullanc� say� girecek asal m� de�il mi onu ��reencez */
#include<stdio.h>

int asalmi(int sayi){
	
	int i;
	
	for(i=2;i<sayi ;i++){
		if(sayi %i == 0){
			return 0;
		}
	}
	return 1; //if e girmezse diye return 1; yapars�n.
}


int main(){
	int n;
	
	printf("Asall���n� merak ettiginiz bir sayi giriniz: ");
	scanf("%d",&n);
	
	if(asalmi(n)==0){
		printf("Bu sayi asal degildir");
	}
	else{
		printf("Bu sayi asal sayidir");
	}
	
		
	return 0;
}
