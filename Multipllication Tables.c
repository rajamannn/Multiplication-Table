
//program to write multiplication table

#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the number\n");
    scanf("%d",&a);

    printf("\nMultiplication table of\n\n",a);
    while(i<=10)
    {
        printf("%d * %d = %d\n\n",a,i,(a*i));
        i++;
    }
return 0;
}
