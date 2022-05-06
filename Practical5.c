#include<stdio.h>
#include<math.h>

float function(float);

int main()
{
    float h, a=0, b=6, fa, fb;
    float Sum=0;
    float Integral;

    fa = function(a);
    fb = function(b);

    printf("Enter value of h:");
    scanf("%f", &h);

    for(float i=a+h; i<6; i+=h)
    {
        Sum += function(i);
    }

    Integral = h* ((fa+fb)/2 + Sum);
    printf("\nValue of Integral:%f", Integral);

    return 0;

}

float function(float x)
{
    return 1/(1 + pow(x,2));
}