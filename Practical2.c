#include<stdio.h>
#include<conio.h>
#include<math.h>

double function(double);

int main()
{
    float a, b, fa, fb, q, fq;
    a = 2;
    b = 3;
    int flag = 0;

    int n;
    printf("Enter no. of iterations:");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        flag = 1;
        fa = function(a);
        fb = function(b);

        //printf("\n%f", fa*fb );

        if( fa*fb < 0 )
        {
            q = (a*fb - b*fa)/(fb - fa);
            fq = function(q);

            if( fq<0 )
            {
                a = q;
            }else if ( fq>0 )
            {
                b = q;
            }

            printf("\nAfter iteration %d approx value of x is %f", i+1, q );

        }
    }

    if ( flag == 0 )
        printf("The equation doesn't have roots between %f and %f", a, b);

    return 0;
}

double function( double x )
{
    return pow(x,3) - 2*x - 5;
}