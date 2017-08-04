#include <stdio.h>
void main()

{

int  num, binaryno, decimalno = 0, base = 1, rem;

printf("Enter a binary number \n");

 scanf("%d", &num); 

binaryno = num;

while (num > 0)
    {

        rem = num % 10;

        decimalno= decimalno + rem * base;

        num = num / 10 ;

        base = base * 2;

    }

    printf("The Binary number is = %d \n", binaryno);

    printf("Its decimal equivalent is = %d \n", decimalno);

}