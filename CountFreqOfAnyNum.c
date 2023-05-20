#include<stdio.h>

int CountFreqOfNum(int iNo,int iNo1)
{
    int iDigit=0;
    int iRev=0;
    int Count=0;


    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit==iNo1)
        {

            Count++;
        }
        iNo=iNo/10;
    }
    return Count;
    
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter a number:");
    scanf("%d",&iValue1);
    
    printf("Enter a number to check freqency of that number:");
    scanf("%d",&iValue2);

    iRet=CountFreqOfNum(iValue1,iValue2);

    printf(" Count of %d in %d is:%d",iValue2,iValue1,iRet);
}
