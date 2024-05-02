#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three number";
	cin>>a>>b>>c;
	if (a>b && a>c)
	{
		cout<<"max number=" <<a;
	}
	else if(b>a && b>c)
	{
		cout<<"max number=" <<b;
	}
	else
	{
		cout<<"max number=" <<c;
	}
	return 0;
}
