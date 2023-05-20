#include<stdio.h>
#include<stdbool.h>

bool CheckZeo(int iNo)
{
    int iDigit=0;
    int iRev=0;


    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {

            return true;
            break;
        }
        iNo=iNo/10;
    }
    return false;

}
int main()
{
    int iValue1=0;
    bool bret=false;

    printf("Enter a number:");
    scanf("%d",&iValue1);
    
    bret=CheckZeo(iValue1);

    if(bret==true)
    {
        printf("In %d zero is present",iValue1);
    }
    else
    {
        printf("In %d zero is not present",iValue1);
   
    }
}
