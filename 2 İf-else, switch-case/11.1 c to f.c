#include <stdio.h>
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
        c=((f-32)*5)/9;  
        printf("Celcius cinsinden degeri: %.2f  \n",c);
    }
    else if((karakter =='f') ||(karakter =='F'))
    {
        printf("Celcius degerini giriniz: ");
        scanf("%f",&c);
        f=(c *9/5)+32;
        printf("Fahrenherit cinsinden degeri: %.2f \n",f);
    }
    else
    {
        printf("Size sunulan degerlerden birini girmeniz gerekiyordu.");
    }
    return 0;
}
