#include<iostream>
#include<graphics.h>
#include<conio.h>
/**********************************************************
*********************BUBBLE_SORT***************************
***********************************************************/
void bubble()
{
  int a[10],item,i,j,n,cheak=1;
/////////////////////////////////////////////////
//////////array/////////////////////////////////
///////////////////////////////////////////////
  gotoxy(1,3);
  cout<<"Enter the size of array :\n\t\t\t";
  cin>>n;
  gotoxy(1,5);
  cout<<"Enter the elements of array :\n";
  for(i=0;i<n;i++)
   {
     cin>>a[i];
   }
//////////////////////////////////////////////////////
//////////////////bubble_sort/////////////////////////
//////////////////////////////////////////////////////
for(i=0;i<(n-1);i++)
   {
       for(j=0;j<(n-i-1);j++)
	 {
	     if(a[j]>a[j+1])
	       {
	       cheak=0;
	 /////////////////////////////////////////////////
	 ///////////////swapping////////////////////////////
	 //////////////////////////////////////////////////
		item=a[j];
		a[j]=a[j+1];
		a[j+1]=item;
	       }
	       if(cheak==1)
	       {
	       cout<<"\nAfter "<<i+1<<" time looping array sorted\n ";
	       goto xx;
	       }
	  }
   }
/////////////////////////////////////////////////////////////
////////////////////display_crueent_array////////////////////
/////////////////////////////////////////////////////////////
xx:cout<<"=> ";
for(i=0;i<n;i++)
   {
     cout<<a[i]<<"  ";
   }
   gotoxy(26,54);
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPress any key to exit...";
}
/*****************^^^^^^^^^^^^^^^^^^^^^^^^^^**********************
******************|||||||CLOSE_BUBBLE_SORT************************
*****************************************/
void space()
{
cprintf("                          ");
}
/*****************************************************************
***********************FLAG_FUNCTION_START************************
*****************************************************************/
void flag()
{
 ////////////RED////////////
     gotoxy(30,10);
     textcolor(RED);
     textbackground(RED);
     space();
     gotoxy(30,11);
     space();
 ///////////WHITE//////////
	gotoxy(30,12);
	textcolor(WHITE);
	textbackground(WHITE);
	space();
	gotoxy(30,13);
	space();
 ///////////GREEN//////////
	gotoxy(30,14);
	textcolor(GREEN);
	textbackground(GREEN);
	space();
	gotoxy(30,15);
	space();
}
/**********************************************************************
*******************CLOSE_FLAG_FUNCTION*********************************
**********************************************************************/
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
/*********************************************************************
********************NAME_FUNCTION_START*******************************
**********************************************************************/
void name()
{
gotoxy(30,11);
  cprintf("CREAT BY - VINIT SAINI");
gotoxy(30,12);
  cprintf("ROLL NO. - 17309140270");
gotoxy(26,50);
cprintf("\n\n\n\n\n\n\n\n\n\n\n\nPress any key to Next Page...");
}
/////////////////////////////////////////////////////////////////////
///////////////////CLOSE_NAME_FUNCTION//////////////////////////////
////////////////////////////////////////////////////////////////////
/**********************************************************************
********************TANKYOU_FUNCTION_START***********************************
**********************************************************************/

void thankyou()
{												 gotoxy(1,5);
cout<<" _____________   __     __        (===)          |==\\ \\    (===)   __   (__)           ";       gotoxy(1,6);
cout<<"(_____________) (__)   (__)      (,___,)         | | \\ \\    | |   (  )  //             ";       gotoxy(1,7);
cout<<"      | |        ||     ||      / /    \\ \\       | |  \\ \\   | |    ||  //            ";       gotoxy(1,8);
cout<<"      | |        ||=====||     / /      \\ \\      | |   \\ \\  | |    ||//              ";       gotoxy(1,9);
cout<<"      | |        ||     ||    / /========\\ \\     | |    \\ \\ | |    || \\ \\          ";       gotoxy(1,10);
cout<<"      | |        ||     ||   / /          \\ \\    | |     \\ \\| |    ||  \\ \\         ";       gotoxy(1,11);
cout<<"     (___)      (__)   (__) (__)          (__)  (___)     \\== |   (__)  (__)            ";       gotoxy(9,12);
cout<<" _____    _____                                            				";       gotoxy(9,13);
cout<<"(_____)  (_____)      /\\      ||         || 					        ";       gotoxy(10,14);
cout<<"  \\ \\	  / /	    /||   ||\\    ||         ||					        ";                                                 gotoxy(10,15);
cout<<"   \\ \\	 / /	   ||      ||    ||         || ";                                                                                  gotoxy(10,16);
cout<<"    \\ \\/ /  	  ||	    ||	 ||         ||	   ";                                                                             gotoxy(10,17);
cout<<"     \\\\//	 ||   	     ||  ||         ||   ";                                                                              gotoxy(10,18);
cout<<"     | |	 |||        ||   ||         ||     ";                                                                         gotoxy(10,19);
cout<<"     | |	  \\||      ||/	  ||       ||	 ";                                                                           gotoxy(10,20);
cout<<"    _|_|_	    \\||__||/	   \\|||||||/  ";                                                                        gotoxy(10,21);
cout<<"   (_____)  	      \\/	    \\|||||/			";
gotoxy(26,50);cout<<"\n\n\nPress any key to Next Page........";
}
/***********************************************************
*******************ClOSE_THANKYOU_FUNCTION******************
***********************************************************/


/************************************************************
*******************MAIN_FUNCTION****************************
************************************************************/
void main()
{
  clrscr();
  gotoxy(1,1);
cout<<"Page- 1";name();
  getch();
  clrscr();
  gotoxy(1,1);
cout<<"Page- 2";thankyou();
  getch();
  clrscr();
  gotoxy(1,1);

cout<<"Page- 3 (Third Last page)";bubble();
  getch();
  clrscr();
  gotoxy(1,1);
cout<<"Page- 4 (Second Last page)";name();
  getch();
  clrscr();
  gotoxy(1,1);
cout<<"Page- 5 (Last page)";flag();
  getch();
}
