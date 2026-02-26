#include <stdio.h>

int main(){
    int age ;
     printf("Enter the value of age :");
     scanf("%d", &age);

     (age >= 18)?printf("Eligible for voting"):printf(" Not Eligible for voting");
}