#include <stdio.h>

int main(){

    int age, citizenship;

    printf("Enter value of age and citizenship , if you are Indian, so please press 1 otherwise enter any number:");

    scanf("%d%d", &age, &citizenship);

    if(age>=18 && citizenship==1){
        printf("You are eligible for voting \n");
    }
    else{
        printf("You are not eligible for voting \n");
    }

    if(!(age>=18)){
        printf("Not eligible for voting ");
    }
}