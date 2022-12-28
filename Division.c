#include<stdio.h>

int main(){

    //Program for Division of Two Integers.

int A, B;
printf("Enter Divisor:\n");
scanf("%d", &A);

printf("Enter Dividend:\n");
scanf("%d", &B);

int Quotient = B/A;
printf("Quotient %d\n", Quotient);

int Remainder = B % A;
printf("Remainder %d\n", Remainder);
    return 0;
}