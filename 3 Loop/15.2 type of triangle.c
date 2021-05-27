#include<stdio.h>
int main(){
	
	float aci1,aci2,aci3;
	float acitoplam;
	
	printf("Turunu merak ettiginiz ucgenin ic acilarini giriniz ");
	scanf("%f",&aci1);
	scanf("%f",&aci2);
	scanf("%f",&aci3);
	
	acitoplam = aci1+ aci2 + aci3; 
	
	while(acitoplam>180){
	printf("Bu bir ucgen degildir\n");  
	printf("Turunu merak ettiginiz ucgenin ic acilarini giriniz: ");
	scanf("%f",&aci1);
	scanf("%f",&aci2);
	scanf("%f",&aci3);
	
	acitoplam = aci1+ aci2 + aci3; 
		
	}
	 	
	if(aci1==aci2 && aci1==aci3 && aci2==aci3){    
	   
		printf("Esitkenar ucgen");
	}
	else if(aci1 == aci2 || aci1 == aci3 || aci2 == aci3){ 
		
		printf("Ikizkenar ucgen"); 
	}
	else
		printf("Cesitkenar ucgen");		
		
		
	return 0;
}
