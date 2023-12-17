#include<stdio.h>
void main(){
int a,b,c=0,d,t=0,y=3;
printf("\n Enter The Your PIN : ");
scanf("%d",&a);
while (y>t)
{
if (a==1245)
{
    
    printf("\n 1 . Add the amount");
    printf("\n 2 . withdrew your amound");
    printf("\n 3 . check the account");
    printf("\n 4 . Exit");

    printf("Enter your Choose: ");
    scanf("%d",&b);

    switch (b)
    {
    case 1:
        printf("\n add your amount: ");
        scanf("%d",&d);
        c=c+d;
        printf("\n your current balance: %d",c);
        break;
    case 2:
        printf("\n withdrew your main");
        scanf("%d",&d);
        c=c-d;
        printf("\n your current balance: %d",c);
        break;

    case 3:
        printf("\n your current balance: %d",c);
        break;

    default:
        printf("\n exit accounts");
        break;
    }
}else{
    printf("\n your pin is wrong");
}
t=t+1;
}


} 