/*
Print the following pattern
 1 2 3 2 1
   1 2 1
     1
*/
#include<stdio.h>
int main()
{
    int n, space, i, j;
    printf("Enter N: ");
    scanf("%d", &n);
    space = 0;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=space; j++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf(" %d", j);
        }
        for(j=i-1; j>0; j--)
        {
            printf(" %d", j);
        }
        space += 1;
        printf("\n");
    }
}