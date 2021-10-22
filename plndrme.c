#include <stdio.h>

void main()
{
    int n,temp,rev=0,digit;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    
    if(temp==rev)
    {
        printf("given numbr %d is  palindrome\n",temp);
    }
    else
    {
        printf("given number is %d is not a palindrome\n",temp);
    }
    
}