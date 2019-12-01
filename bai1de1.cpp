#include<bits/stdc++.h>
using namespace std;
void IN(float x, int n);
int F(float x,int n);
int main()
{
	float x;
	int n;
	IN(x,n);
	cout<<"\nF(x,n)= "<<F(x,n);
	return 0;
}
void IN(float x, int n)
{
	cout<<"Nhap vao so thuc x= ";
	cin>>x;
	do
	{
		cout<<"Nhap vao so nguyen duong n= ";
		cin>>n;
	}
	while(n<0);
}
int F(float x,int n)
{
	float F=0;
	if(n>=1&&x!=0)
	{
		for(int i=2;i<=n;i++)
		{
			F=F+pow(pow(x+1,2),1/2)/i;
		}
	}
	else
	{
		F=sin(x)*pow(n,3);
	}
	return F;
}
