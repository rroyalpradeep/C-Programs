#include<stdio.h>
#include<math.h>

//Program to get Result of power on a number.

int main (){

int A, B;
printf("Enter the Number:");
scanf("%d", &A);

printf("Enter the Power on the Number:");
scanf("%d", &B);

int Result = pow(A,B);
printf("The Result is:%d", Result);
    return 0;
}
