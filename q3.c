//sum of sqrts

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    double sum; 
    printf("enter a number: ");
    scanf("%d", &N);
    for(int i = 1; i<= N; i++)
    {   
        double j;
        j = (double)i;
        double sqroot = sqrt(j);
        sum += sqroot;
    }
    printf("%lf\n", sum);

}

