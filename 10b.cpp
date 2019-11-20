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

/*output-
Enter the value of n : 5
0 2 999 1 8
6 0 3 2 999
999 999 0 4 999
999 999 2 0 3
3 999 999 999 0

OUTPUT
0 2 3 1 4 
6 0 3 2 5 
10 12 0 4 7 
6 8 2 0 3 
3 5 6 4 0 
