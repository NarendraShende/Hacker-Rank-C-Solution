#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff;
    float c,d,fsum,fdiff;
    
    scanf("%d %d",&a,&b);
    sum = a + b;
    diff = a - b;
    printf("%d %d",sum,diff);
    
    printf("\n");
    
    scanf("%f %f",&c,&d);
    fsum = c + d;
    fdiff = c - d;
    printf("%.1f %.1f",fsum,fdiff);
    
    return 0;
}
