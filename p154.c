#include<stdio.h>
int sum_of_odd_series(int first,int last,int mul);
int main()
{
    int num1,num_last,multiple;
    printf("enter the first and last values:\n");
    scanf("%d%d",&num1,&num_last);
    printf("enter the multiple number:\n");
    scanf("%d",&multiple);
    sum_of_odd_series(num1,num_last,multiple);

    return 0;
}
int sum_of_odd_series(int first,int last,int mul)
{
    for(int i=first+1; i<=last; i++)
    {
        if(i%mul==0)
        {
            int res=i;
            printf("%d ",i);
        }


    }

}
