#include<stdio.h>
#include<math.h>
int Armstrong(int a)
{   int num=a;
    printf("a = %d", a);
    int count=0;
     while (a != 0)
    {
        a /= 10;  
        ++count;
    }
    int sum=0;
    for( int i=0; i<count ;i++)
    {
        int b = a%10;
        sum = sum + pow(b,count);
        float c = (float)a/10;
        printf("c= %f", c);
        a=(int)c;
             
    }
    if(num == sum)
    {
        return 1;                       //1 means that the number given is an armstrong number
    }
    else 
    return 0;                           //0 means that the number given is NOT an armstrong number
}
int main()
{
    int n;
    scanf(" %d", &n);
    for (int i = 1; i<n ; i++)
    { 
      if(Armstrong(i))
        printf(" %d is an armstrong number \n", i);
    }
    return 0;

}