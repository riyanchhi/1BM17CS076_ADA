#include<iostream>
using namespace std;
#define V 10

void floyds(int graph[][V],int n)
{	
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				graph[i][j] = min(graph[i][j],graph[i][k]+graph[k][j]);
	cout<<"\nOUTPUT\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<graph[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int graph[V][V];
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>graph[i][j];
			
	floyds(graph,n);
	return 0;
}