#include <stdio.h>

int main(){
     int a;
    printf("Enter the value of a ");
    scanf("%d", &a);
    int b=5;

    printf("yhe value of b=%d \n ",b);

    printf("value of a += b = %d \n", a+= b );
    printf("value of a -= b = %d \n", a-= b );
    printf("value of a *= b = %d \n", a*= b );
    printf("value of a /= b = %d \n", a/= b );
    printf("value of a mod= b = %d \n", a%= b );
    
}