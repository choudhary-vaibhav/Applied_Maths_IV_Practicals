#include<stdio.h>

float derivative(float, float);

int main()
{
    int n;
    float xc=0,xn=1,yc,yn,h;

    printf("Enter the value of divisions:");
    scanf("%d",&n);

    h=(xn-xc)/n;

    printf("Enter y at initial value of x:");
    scanf("%f",&yc);

    for(float x=xc+h; x<=xn+h; x=x+h)
    {
        yc=yc+h*derivative(x-h,yc);

        printf("Value of y at x=%f:  %f",x,yc);
        printf("\n");
    }
    return 0;
    
}

float derivative(float x, float y)
{
    return x+y;
}