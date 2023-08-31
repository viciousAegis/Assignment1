//coprimes

#include <stdio.h>

int main()
{
    int a,b;
    printf("enter 2 integers: ");
    scanf("%d%d", &a,&b);

    int q,r;

    while(1)
    {
        q = a/b;
        r = a%b;

        if(r==0)
        {    
            printf("HCF is %d\n", b);
            if(b == 1)
            {
                printf("they are co-primes\n");
            }
            else
            {
                printf("They are not co-primes\n");
            }
            break;
        }

        a = b;
        b = r;
    }
    
}