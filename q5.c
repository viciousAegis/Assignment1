//dot prodyuct of vectors

#include <stdio.h>

int main()
{
    int dimension;
    int dotProduct = 0;


    int x;

    printf("enter the dimension of the vectors that you want to add: \n");
    scanf("%d", &dimension);

    int vecA[dimension];
    int vecB[dimension];


    for(int i = 0; i < dimension; i++)
    {   
        
        printf("enter element %d of vector A: \n", i+1);
        scanf("%d", &x);
        vecA[i] = x;
    }

    printf("\n");

    for(int i = 0; i < dimension; i++)
    {   
        
        printf("enter element %d of vector B: \n", i+1);
        scanf("%d", &x);
        vecB[i] = x;
    }

    printf("Vector A: ");
    for(int i = 0; i < dimension; i++)
    {   
        
        printf("%d ", vecA[i]);
        
    }
    printf("\n");

    printf("Vector B: ");
    for(int i = 0; i < dimension; i++)
    {   
        
        printf("%d ", vecB[i]);
        
    }

    printf("\n");

    for(int i = 0; i < dimension; i++)
    {   
        dotProduct += vecA[i]*vecB[i];
    }

    printf("Dot Product of A and B: %d\n", dotProduct);

}