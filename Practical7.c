#include<stdio.h>
#include<math.h>

float func(float x);

int main()
{
    float a=0, b=6, n;
    float h, sum=0, x, val;

    printf("Enter no of divisions:");
    scanf("%f", &n);

    h = (b-a)/n;

    sum += func(a) + func(b);

    for(int i=a+h; i<n; i++)
    {
        x = a+i*h;
        val = func(x);

        if(i%3==0)
        {
            sum+=2*val;
        }else
        {
            sum+=3*val;
        }
    }

    val = (sum*h*3)/8;

    printf("\nValue obtained after integration is %f",val);
    return 0;
}

float func(float x)
{
    return 1/(1 + pow(x,2));
}