#include<iostream>
using namespace std;
class regula
{
	float a,b,c,steps;
	public:
		float f(float x)
		{
			float z=(x*x)+(4*x)-7;
			return z;
		}
	void input()
	{
		cout<<"Enter the value of a and b:\n";
		cin>>a>>b;
		cout<<"Enter he steps:\n";
		cin>>steps;
	}
	void calculate()
	{
		float r;
		for(int i=0;i<steps;i++)
		{
			r=a-(f(a)*((b-a))/(f(b)-f(a)));
			if(f(r)<0)
			{
				a=r;
			}
			else
			{
				b=r;
			}
			cout<<"Root="<<r<<endl;
		}
	}
};
int main()
{
	regula r;
	r.input();
	r.calculate();
	return 0;
}
