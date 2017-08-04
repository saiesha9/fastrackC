#include <stdio.h>
int main()
{
int n, reversedno = 0, remainder, originalno;
printf("Enter an integer: ");
scanf("%d", &n);
originalno = n;
while( n!=0 )
    {
        remainder = n%10;
        reversedno = reversedno*10 + remainder;
        n /= 10;
    }
if (originalno == reversedno)
        printf("%d is a palindrome.", originalno);
    else
        printf("%d is not a palindrome.", originalno);
    
    return 0;
}