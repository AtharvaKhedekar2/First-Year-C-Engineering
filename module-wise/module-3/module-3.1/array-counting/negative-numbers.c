#include<stdio.h>

int main()
{
    int a[5]={10,15,20,25,30};
    int i,count=0;

    for(i=0;i<5;i++)
    {
        if(a[i]<0)
        {
            count++;
        }
    }

    printf("Negative Numbers = %d",count);

    return 0;
}