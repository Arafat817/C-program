#include<stdio.h>
int main ()
{
    double x_plus_y,x_minus_y;
    printf("enter the value of x+y: ",x_plus_y);
    scanf("%lf",&x_plus_y);
    printf("enter the value of x-y: ",x_minus_y);
    scanf("%lf",&x_minus_y);
    double x=(x_plus_y+x_minus_y)/2;
    double y=(x_plus_y-x_minus_y)/2;
    printf("value of x, y : %.2lf %.2lf\n",x,y);
}
