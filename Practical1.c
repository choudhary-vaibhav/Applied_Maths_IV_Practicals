#include<stdio.h>
#include<conio.h>
#include<math.h>

float function(float);

int main()
{
    float a, b, c, fa, fb, fc;
    a = 0;
    b = 1;
    int flag = 0;

    int n;
    printf("Enter no. of iterations:");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        fa = function(a);
        fb = function(b);

       // printf("\n%f", fa*fb );

        if( fa*fb < 0 )
        {
            flag = 1;
            c = (a+b)/2;
            fc = function(c);

            if ( fc < 0 )
            {
                a = c;
            }
            else if ( fc > 0 )
            {
                 b = c;
            }

                printf("\nAfter iteration %d approx value of x is %f", i+1, c );

        }
    }

    if ( flag == 0 )
        printf("The equation doesn't have roots between %f and %f", a, b);

    return 0;

}

float function( float x )
{
    return x*pow(2.78,x)-1;
}