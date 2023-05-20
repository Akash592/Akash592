#include<stdio.h>

int ReverseNum(int iNo)
{
    int iDigit=0;
    int iRev=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo !=0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    return iRev;

}
int main()
{
    int iValue1=0;
    int iret=0;

    printf("Enter a number:");
    scanf("%d",&iValue1);
    
    iret=ReverseNum(iValue1);

    printf("%d",iret);

}
