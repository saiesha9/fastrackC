#include<stdio.h>
void main()
{
    long int a=0,b=1,i,sum,n,j=0,m;
    printf(" Please Enter value for N: ");
    scanf("%ld",&n);
    printf("\n PLEASE ENTER THE CHECKING NO.: ");
    scanf("%ld",&m);
    printf("\n\n\t\t\t IT IS FEBONACCI SERIES \n  ");
    printf("%ld ,",a);
    printf("%ld ,",b);
    for(i=2;i<n;i++)
    {
        sum = a+b;
        a = b;
        b = sum;
        if(sum==m)
            j=1;
        printf("%ld ,",sum);
    }
    if(j==1)
        printf("\n\n\t\t\t %ld IT IS FEBONNACI NUMBER. ",m);
    else
        printf("\n\n\t\t\t %ld IT IS NOT FEBONNACI NUMBER. ",m);

 }


