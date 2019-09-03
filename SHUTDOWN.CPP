#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char ch;
	cout<<"Tap on button to :\ns :Shutdown in a minute\nr :Restart\nl :Log out\na :cancle (abort) to shutdown before time out:\n\t\t\t\t\t\t";
	cin>>ch;
	if(ch=='s'|ch=='S')
	{
		system("c:\\Windows\\System32\\cd C:\Users\vinit\Desktop\java");
	}
	if(ch=='r'|ch=='R')
	{
	 system("c:\\Windows\\System32\\shutdown /r");	
	}
	if(ch=='l'|ch=='L')
	{
		system("c:\\Windows\\System32\\shutdown /l");
	}
	if(ch=='a'||ch=='A')
	{
		system("c:\\\Windows\\System32\\shutdown /a");
	}
	return 0;
}
