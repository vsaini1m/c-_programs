#include<iostream>
#include<ctime>
using namespace std;
int main(){
	time_t t=time(0);
	struct tm*now=localtime(&t);
	cout<<"date is:";
	cout<<now->tm_mday<<"-"<<(now->tm_mon+1)<<"-"<<(now->tm_year+1900)<<endl;
}
