#include<stdio.h>
int main()
{
    int num1,num2;
    double ans;
    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    ans = (double)num1/num2;

    if(num2 == 0)printf("Cannot divide by zero");
    else printf("The ans %.10lf\n",ans);

    return 0;
}
