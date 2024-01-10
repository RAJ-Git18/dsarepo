#include<stdio.h>
void transfer(int n,char from,char to,char medium)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        transfer(n-1,from,medium,to);
        printf("Move disk %d form %c to %c\n",n, from ,to);
        transfer(n-1,medium,to,from);
    }
}
int main()
{
    int n;
    printf("Enter the number of the dics to be insereted in the tower: ");
    scanf("%d",&n);
    transfer(n,'A','C','B');
    return 0;
}