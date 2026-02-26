#include <stdio.h>

int main(){
   int a,b;
   printf("Enter the value of a and b:");
   scanf("%d%d", &a,&b);

   //Relatonal operator <,<=,>,>=,==,!=
   printf("a<b = %d \n", a<b);
   printf("a<=b = %d \n", a<=b);
   printf("a>b = %d \n", a>b);
   printf("a>=b = %d \n", a>=b);
   printf("a==b = %d \n", a==b);
   printf("a!=b = %d \n", a!=b);
}