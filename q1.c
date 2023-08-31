//pythagorean triplets
#include <stdio.h>
int square(int n)
{
    return n*n;
}
int main()
{   
    /*
    int a,b,c;

    printf("enter 3 integers: ");
    scanf("%d%d%d",&a,&b,&c); 
    
    int d;

    if(b>c) //checking the order of numbers given and arranging them in ascending order
    {
        d = c;
        c = b;
        b = d;
    }
    if(a>b)
    {
        d = b;
        b = a;
        a = d;
    }
    if(b>c)
    {
        d = c;
        c = b;
        b = d;
    }

    if(a*a + b*b == c*c)
    {
        printf("%d,%d, and %d are a pythagorean triplet\n", a,b,c);
    }
    else
    {
        printf("%d,%d, and %d are not a pythagorean triplet\n", a,b,c);
    }
    */
    //CHALLENGE PROBLEM~~~~~~~~~~~~~~~~~~

    int N;

    printf("enter the no. of pythogorean triplets to print: ");
    scanf("%d", &N);

    printf("The first %d pythagorean triplets are: \n", N);

    int count = 0;
    int c = 1;

    while(count < N)
    {   
        
        for(int i=c; i<=200; i++)
        {
            for(int j=i; j<=200; j++)
            {  
                if(c*c + i*i == j*j)
                {
                    if(count==100)
                    {
                        count++;
                        break;
                    }
                    printf("%d\n",count);
                    printf("%d %d %d\n", c, i, j);
                    count++;
                }

            }
        }

        c++ ;       
    }


}