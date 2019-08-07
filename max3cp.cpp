#include<iostream>
using namespace std;
int main()
{
int a[10],max=0,n;
cout<<"enter the size:";
cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<a[i])
		{
			max=a[i];
		}
	}
cout<<"maximum number is :"<<max;
return 0;
}

