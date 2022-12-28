#include<stdio.h>

// Program for substraction of two Integers.
int main(){
int a, b;

printf("Enter 1st Number:");
scanf("%d", &a);

printf("Enter 2nd Number:");
scanf("%d", &b);

int Subtraction = a - b;
printf("Result:%d\n", Subtraction);
return 0;
}