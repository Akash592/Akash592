#include<stdio.h>
#include<stdbool.h>

int CountFreqOf4(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int Count=0;


    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
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
    int iRet=0;

    printf("Enter a number:");
    scanf("%d",&iValue1);
    
    iRet=CountFreqOf4(iValue1);

    printf(" Count of four in %d is:%d",iValue1,iRet);
}
