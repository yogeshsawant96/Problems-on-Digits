#include<stdio.h>
#include<conio.h>
 int countOcc(int,int);
 int main()
 {
	 int iNo=0,iRet=0,fNo=0;
	 printf("Enter Number : ");
	 scanf("%d",&iNo);
	 printf("Enter Number to find Occ : : ");
	 scanf("%d",&fNo);
	 iRet=countOcc(iNo,fNo);
	 printf("Occuarance : %d",iRet);
 }
 int countOcc(int no,int fno)
 {
	 int icnt=0,iDig=0;
	 while(no>0)
	 {
		 iDig=no%10;
		 if(iDig==fno)
		 {
			 icnt++;
		 }
		 no=no/10;
	 }
	 return icnt;
 }
