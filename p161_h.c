int main()
{
    int num;
    printf("Enter the no. of rows to be printed:\n");
    scanf("%d",&num);
    pattern(num);
    return 0;
}
int pattern(int rows)
{
    for(int i=0; i<=rows; i++)
    {
        for(int space=rows-i; space>=1; space--)
        {
            printf(" ");
        }
        for(int j=0; j<i; j++)
        {
            printf(" 1");
        }
        printf("\n");
    }
    for(int i=rows-1; i>=1; i--)
    {
        for(int space=rows-i; space>=1; space--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf(" 1");
        }
        printf("\n");
    }
}
