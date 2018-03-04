#include<stdio.h>

void main()
{
    int a[10],b[10],c[10], n,i,j,ch,top,bot;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=0;
    j=n-1;
    do
    {
        printf("Press 1 to insert in 1st array\nPress 2 to insert in 2nd array\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element: ");
                   scanf("%d",&a[i]);
                   i++;
                   break;

            case 2:printf("Enter the element: ");
                   scanf("%d",&b[j]);
                   j--;
                   break;

            default:printf("Invalid option!!");
        }
    }while(i!=j);

    printf("i= %d",i);
    printf("\nj= %d",j);
    printf("\n The stack is full");
    printf("\nStack 1 is:");
    for(top=0;top<=i;top++)
        printf("%d ",a[top]);

    printf("\nStack 2 is:");
    for(bot=n-1;bot>=j;bot--)
        printf("%d ",b[bot]);
}
