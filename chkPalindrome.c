#include<stdio.h>
#include<conio.h>
 int chkPal(int);
 int main()
 {
	 int iNo=0,iRet=0;
	 printf("Enter Number : ");
	 scanf("%d",&iNo);
	 iRet=chkPal(iNo);
	 if(iRet==1)
	 {
		 printf("%d is Palinfrome",iNo);
	 }
	 else
	 {
		printf("%d is Not Palinfrome",iNo);
	 }
 }
 int chkPal(int iNo)
 {
	 int iSum=0,iDig=0,temp=iNo;
	 while(iNo>0)
	 {
		iDig= iNo%10;
		iSum=iSum*10+iDig;
		iNo=iNo/10;
	 }
	 if(iSum==temp)
	 {
		 return 1;
	 }
	 else
	 {
		 return -1;
	 }
	
 }