//multiplication table 

#include <stdio.h>

int main()
{
    int n,N,product;
    printf("enter a number: ");
    scanf("%d", &n);
    
    // looping with goto statement
    printf("Loop using the GOTO statement: \n\n");
    int i = 1;
    x:
    product = n*i;
    printf("%d x %d = %d\n", n,i,product);
    if(i==10)
    {  
        goto y;
    }
    i++;
    goto x;

    // looping with the while loop
    y:
    printf("\n");
    printf("Looping with the WHILE loop: \n\n");
    i = 1;

    while(i<=10)
    {
        printf("%d x %d = %d\n", n,i,product);
        i++;
    }
    
    // CHALLENGE PROBLEM~~~~~~~~~~~~~~~~~
    printf("\n");
    printf("enter the number of rows to be printed for the multiplication table: ");
    scanf("%d", &N);
    printf("\n");

    for( int i = 0; i<N; i++)
    {
        int j = i+1;
        int product = n*j;
        printf("%d x %d = %d\n", n,j,product);
    }


}