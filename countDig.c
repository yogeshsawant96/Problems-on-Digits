#include<stdio.h>
#include<conio.h>
 int count(int);
 int main()
 {
	 int iNo=0,iRet=0;
	 printf("Enter Number : ");
	 scanf("%d",&iNo);
	 iRet=count(iNo);
	 printf("Digit Count : %d",iRet);
 }
 int count(int no)
 {
	 int icnt=0;
	 while(no>0)
	 {
		 no=no/10;
		 icnt++;
	 }
	 return icnt;
 }