#include<iostream>
using namespace std;
class scent
{
	float a,b,c,steps;          
	public:
		float f(float x)
		{
			float z=(x*x)-(4*x)-9;
			return z;
		}
	void input()
	{
		cout<<"Enter the value of a and b:\n";
		cin>>a>>b;
		cout<<"Enter the steps:\n";
		cin>>steps;
	}
	void calculate()
	{
		float r;
		for(int i=0;i<steps;i++)
		{
			r=b-((b-a)/(f(a)-f(b))*f(a));
			a=b;
			b=r;
			cout<<"Root:"<<i<<"="<<r<<endl;
		}
	}
};
int main()
{
	scent s;
	s.input();
	s.calculate();
	return 0;
}
