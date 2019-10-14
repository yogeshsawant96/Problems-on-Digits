#include<stdio.h>
#include<conio.h>
 int DigSum(int);
 int main()
 {
	 int iNo=0,iRet=0;
	 printf("Enter Number : ");
	 scanf("%d",&iNo);
	 iRet=DigSum(iNo);
	 printf("Digit Sum : %d",iRet);
 }
 int DigSum(int iNo)
 {
	 int iSum=0,iDig=0;
	 while(iNo!=0)
	 {
		 iDig=iNo%10;
		 iSum=iSum+iDig;
		 iNo=iNo/10;
	 }
	 return iSum;
 }