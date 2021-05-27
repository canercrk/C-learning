#include<stdio.h>
#define MAX 50

int a,grade[MAX],dsay, k, student[MAX],maxgrade=0,mingrade=100,x,y;


int main(){
    printf("Provide the number of students to enter: \n");
    scanf("%d",&dsay);
    
    a=0;
    for(k=0;k<dsay;k++){
        if(dsay>100){
        break;}
        printf("Enter student number and grade: ");
        scanf("%d %d",&student[k],&grade[a]);
        a++;
    }

    for(a=0; a <dsay; a++){
        if( maxgrade < grade[a]){
           maxgrade=grade[a];
           x=student[a];
        }
    }
        for(a=0; a <dsay; a++){
        if( mingrade > grade[a]){
           mingrade=grade[a];
           y=student[a];
        }
    }

        printf("Student number %d got the highest grade of %d \n",x,maxgrade);       

        printf("Student number %d got the lowest grade of %d \n",y,mingrade);

    return 0;
}

