#include<iostream>
#include<cstdlib>
using namespace std;
int board[20],count1=0;
int main(){
int n,i,j;
void queen(int row,int n);
cout<<"-N queens problem using Backtracking-";
cout<<"\n\nEnter number of queens:";
cin>>n;
queen(1,n);
return 0;
}

void print(int n){
int i,j;
count1=count1+1;
cout<<"\n\nSolution "<<count1<<":\n\n";
for(i=1;i<=n;++i)
{	cout<<"\t"<<i;
}
for(i=1;i<=n;++i)
	{
	cout<<"\n\n"<<i;
	for(j=1;j<=n;++j){
		if(board[i]==j)
			cout<<"\tQ";
		else
			cout<<"\t-";
			}
		}
	}
int place(int row,int column)
{
int i;
for(i=1;i<=row-1;++i)
{
	if(board[i]==column)
		return 0;
	else 
	if(abs(board[i]-column)==abs(i-row))
		return 0;
}
return 1;
}
void queen(int row,int n)
{
int column;
for(column=1;column<=n;++column)
{
	if(place(row,column))
	{
	board[row]=column;
	if(row==n)
		print(n);
	else
		queen(row+1,n);
		}
	}
}
