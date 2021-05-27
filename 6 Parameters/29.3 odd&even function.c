#include<stdio.h>
#define MAX 100
int elenumber, i, array[MAX],numbers;


int send(numbers){
	
	for(i=1;i<elenumber+1;i++){
	
	if(array[i]%2 == 0)
    {
        printf("Even numbers : %d \n", array[i]);
    }
	}
	
    for(i=1;i<elenumber+1;i++){	
    if(array[i]%2 == 1)
    {
        printf("Odd numbers: %d \n", array[i]);
    }
	}
}

int main(){
	printf("Give the number of elements to be entered: \n");
	scanf("%d",&elenumber);
	
	for(i=1;i<elenumber+1;i++){	
	printf("Enter number %d : ",i);
	scanf("%d",&array[i]); 
	
	}
	
	send(numbers);

    return 0;

}
