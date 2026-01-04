#include <stdio.h>
void swap(int *a,int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=temp;
     printf(" a: %d, b: %d",*a,*b);

}
int main()
{    
    int a=12;
    int b=13;
    swap(&a,&b);
}


