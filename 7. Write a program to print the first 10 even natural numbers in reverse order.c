#include<stdio.h>
int main()
{
    int x=20;

    printf("First Ten Natural Number in Reverse Order\n");

    while(x>=2)
    {
        printf("%d\n",x);

        x-=2;
    }
    return 0;
}
