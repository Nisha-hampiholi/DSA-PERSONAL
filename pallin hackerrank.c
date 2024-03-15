#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int s_pallin(int x,int y)
{
    int min;
    for(int i=y;i>=x;i--)
    {
    int rev=0;
    while(i)
    {
        rev=(rev*10)+(i%10);
        i=i/10;
    }
    if(rev==i)
        min=i;
    }
    return min;

}
