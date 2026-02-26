#include <stdio.h>

int main(){

    int ticStatus, passStatus;

    printf("Enter value of ticket and pas status , if you have ticket or pass so please press 1 otherwise enter any number:");

    scanf("%d%d", &ticStatus, &passStatus);

    if(ticStatus==1 || passStatus==1){
        printf("welcome to ibus \n");
    }
    else{
        printf("You dont have any ticket or pass. you cant travel via ibus");
    }
}