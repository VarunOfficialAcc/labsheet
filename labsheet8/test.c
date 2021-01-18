#include <stdio.h>
#include <math.h>

int funct(int a)
{
     int count=0;
     while (a != 0)
    {
        a /= 10;  
        ++count;
    }
    int sum = 0;
    for(int i=0; i < count ; i++)
    {   int b = a%10;
         // printf("b is equal to %d ", b);
        float c = (float) a/10;
        //printf("c is %.1f", c);
        a = (int)c; 
        //printf(" a is equal to %d", a);
         int d = pow(b,count);
         sum = sum +d;
       
    }
    if (count==sum)
    return 1;
    else 
    return 0;
}

int main()
{  
    int check;
    check = funct(153);
    if (check ==1)
    {
        printf("yes");
    }
    else 
    printf("no");
    
    return 0;
}