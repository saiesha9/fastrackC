#include <stdio.h>
void main()
{
int num, decimalno, remainder, base = 1, binary = 0;
printf("Enter a decimal integer \n");
scanf("%d", &num);
decimal_num = num;
while (num > 0)
{

remainder = num % 2;
binary = binary + remainder * base;
num = num / 2;
base = base * 10;

}

printf("Input number is = %d\n", decimalno);
printf("Its binary equivalent is = %d\n", binary);

    
}