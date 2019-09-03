/* 
THIS IS THE BEST CASE 
HERE BEST CASE IS THAT IF LIST ALRADY SORTED SO THEN ROUND WILL STOP AND  THAT WILL RETURN
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"THIS PROGRAM CREAT BY VINIT KUMAR SAINI";
	cout<<"\nROLL NUMBER 17309140270 ";
	getch();
	int a[50],temp,i,n,flag;
	cout<<"enter number of your elements:";
	cin>>n;
	cout<<"Enter elements:";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		
	
	for(i=0;i<(n-1);i++) //HERE START ROUND AND IT'S WILL BE (N-1)
	{
		flag=0;                     //HERE SET THE  VALUE OF FLAG 
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])     //HERE IF THIS VALUE TRUE THEN FLAG VALUE WILL BE SET FROM ZERO (0) TO 1
			{	flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)   //HREE CHEAK THE VALUE OF FLAG IF VALUE OF FLAG=0 THEN WILL BE RETURN 
		{
			cout<<"round ="<<i;
			return 0;
			
		}
	}
	cout<<"after sorting array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
