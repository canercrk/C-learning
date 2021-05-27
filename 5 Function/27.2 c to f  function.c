#include <stdio.h>

float donusturf(float c){
	
	return((c*9/5)+32);
}

float donusturc(float f){
	return(((f-32)*5)/9);
}


int main()
{
    float f,c;
    char karakter;

	
    printf("Fahrenheit cinsinden verilen bir sicaklık degerini Celcius cinsinden bulmak istiyorsaniz c tusuna basiniz\n");
    printf("Celcius cinsinden verilen bir sicaklik degerini Fahrenheit cinsinden bulmak istiyorsaniz f tusuna basiniz\n");
    printf("Seciminizi Yapiniz(c, f): ");
    scanf("%c",&karakter);
	

    if((karakter =='c') ||(karakter =='C'))
    {
        printf("Fahrenheit degerini giriniz: ");
        scanf("%f",&f);
        c = donusturc (f); 
        printf("Celcius cinsinden degeri: %.2f  \n",c);
    }
    else if((karakter =='f') ||(karakter =='F'))
    {
        printf("Celcius degerini giriniz: ");
        scanf("%f",&c);
        f=donusturf(c);
        printf("Fahrenherit cinsinden degeri: %.2f \n",f);
    }
    else
    {
        printf("Size sunulan karakterlerden birini girmeniz gerekiyordu.");
    }
    return 0;
}
