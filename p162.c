#include<stdio.h>
long long int sum_of_series(long long int first,long long int second,long long int third);
int main()
{
    int num1, num2,num3;
    printf("Enter the 3 numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum_of_series(num1,num2,num3);
    return 0;
}
long long int sum_of_series(long long int first,long long int second,long long int third)
{
    long long int result;
    for(int i=0;i<=100;i++)
    {
        result=first+second+third;
        first=second;
        second=third;
        third=result;
        printf("%d\t",first);

    }

}
