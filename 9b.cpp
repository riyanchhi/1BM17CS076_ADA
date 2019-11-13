#include<bits/stdc++.h>
using namespace std;
int c[20][20];
void prims(int n){
    int ne=0,mini;
    int mincost=0,u,v;
    int elec[n];
    for(int i=1;i<=n;i++){
        elec[i]=1;
        }
    elec[1]=1;
    while(ne!=n-1){
        mini=9999;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            if(elec[j]==1){
                if(c[i][j]<mini){
                    mini=c[i][j];
                    u=i;
                    v=j;
                }
            }
        }
    }
    if(elec[v]==1){
        cout<<u<<"-->"<<v<<"="<<mini<<"\n";
        elec[v]=0;
        ne=ne+1;
        mincost=mincost+mini;
    }
    c[u][v]=9999;
    c[v][u]=9999;
    }
    cout<<"mincost="<<mincost;

}
int main(){
   int n;
   cout<<"enter no. of vertices";
   cin>>n;
   cout<<"\nenter cost matrix";
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>c[i][j];
    }
   }
   prims(n);
   return 0;
}
/*
enter no. of vertices4
enter cost matrix9999 3 4 1
3 9999 2 9999
4 2 9999 9999
1 9999 9999 9999
1-->4=1
2-->3=2
1-->2=3
 mincost=6*/