#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a and b in binary (0/1) :");
    scanf("%d%d", &a, &b);

    //bitwise operator : & , | , ^ , ~ , << , >> 
    printf("value of a & b = %d \n", a&b );
    printf("value of a | b = %d \n", a|b );
    printf("value of a ^ b = %d \n", a^b );
    printf("value of ~a= %d and ~b = %d\n",~a,~b );
    int c, d;
    printf("Enter the value of c and d :");
    scanf("%d%d", &c, &d);
    printf("value of %d<<%d=%d \n",c,d,c<<d );
    printf("value of %d>>%d=%d \n",c,d,c>>d );
}