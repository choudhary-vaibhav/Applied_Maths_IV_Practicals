#include<stdio.h>
#include<math.h>

double function(double);
double derivative(double);

int main()
{
    double x, fx, dx, temp;

    x = 2;

    int n;
    printf("Enter no. of iterations:");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        fx = function(x);
        dx = derivative(x);

        temp = x - (fx/dx);
        x = temp;

        printf("\nAfter iteration %d value of x if %f with fx %f",i,x,fx);
    }

    return 0;
    
}

double function (double x)
{
    return pow(x,4) - x -10;
}

double derivative (double x)
{
    return 4*pow(x,3) - 1;
}