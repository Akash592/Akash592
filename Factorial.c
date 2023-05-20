#include<stdio.h>



int Fact(int ino1)
{
    int iCnt=0;
    int imul=1;
    if(ino1<0)
    {
        ino1=-ino1;
    }
    for(iCnt=1;iCnt<=ino1;iCnt++)
    {
        imul=imul*iCnt;
    }
    return imul;

}



int main()
{

    int iValue=0;
    
    int iret=0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    iret=Fact(iValue);

    printf("%d",iret);

    return 0;
}
