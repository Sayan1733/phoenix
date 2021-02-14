#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter thee three number:");
    scanf("%f %f %f",&a,&b,&c);
    if(a<=b && a<=c)
        printf("The smallest number is:%f",a);
    else if(b<=a && b<=c)
        printf("The smallest number is:%f",b);
    else
        printf("The smallest number is:%f",c);

    return 0;
}
