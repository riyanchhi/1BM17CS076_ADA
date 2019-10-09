#include<bits/stdc++.h>
using namespace std;
char s1[20],s2[20];
int n,m;
int L[10][10];
void getdet()
{
  
   cin>>s1;
   cin>>s2;
  m=strlen(s1); 
  n=strlen(s2);
}
int LCSS(char *x,char *y,int m,int n)
{
   
    int i, j;

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {

            if(i==0||j==0)
               L[i][j]= 0;
            else if(x[i-1]==y[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else
                L[i][j]=max(L[i-1][j], L[i][j-1]);
        }
    
    }
    return L[m][n];
    
}

 
int main()
{
    getdet();
    cout<<LCSS(s1,s2,strlen(s1),strlen(s2));
    int index = L[m][n];
    char lcs[index+1];
    lcs[index] = '\0'; // Set the terminating character

//Start from the right-most-bottom-most corner and one by one store characters in lcs[]
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (s1[i-1] == s2[j-1])
        {
            lcs[index-1] = s1[i-1]; // Put current character in result
            i--; j--; index--;
        }
         else if (L[i-1][j] > L[i][j-1])
            i--;
        else
            j--;
    }
 
     cout<<"\n"<<lcs<<"\n";

 
     

}