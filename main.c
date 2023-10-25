
#include <stdio.h>

int main()
{
double cels,fah;
printf("enter the celsius");
scanf("%lf",&cels);
fah=(9/5*cels)+32;
printf("%.2lf C=%.2lf F",cels,fah);
    return 0;
}
