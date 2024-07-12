#include<stdio.h>
void forloop();
void main()
{
    int i = 1, number, count = 12;
    printf("Enter a number to generate the table in c: ");
    scanf("%d",&number);

    printf("\nThe Muliplication table of %d\n: ");
    scanf("%d, number");
    printf("\n");
    //printf("=============================\n");
    forloop()
    while (i <= count)
    {
        printf("%d x %d = %d\n", number , i, number * i);
        i + i + 1;
    } 
}
int forloop(){
    int i, count = 30;
    for (i = 1; i < count; i++)
    {
        printf("*");
    }
    return 0;
}