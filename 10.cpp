#include<bits/stdc++.h>
using namespace std;
int cost[10][10],n;
void dijkstras(int src){
    int dist[10],vis[10],count,min,u;
    for(int j=1;j<=n;j++){
        dist[j]=cost[src][j];
        vis[j]=0;
    }
    dist[src]=0;
    vis[src]=1;
    count=1;
    while(count!=n){
        min=9999;
        for(int j=1;j<=n;j++){
            if(dist[j]<min && vis[j]!=1){
                min=dist[j];
                u=j;
            }
        }
        vis[u]=1;
        count+=1;
        for(int j=1;j<=n;j++){
            if(min+cost[u][j] < dist[j]  && vis[j]!=1){
                dist[j]=min+cost[u][j];
            }
        }
    }
    cout<<"shortest distance is\n";
    for(int j=1;j<=n;j++){
        cout<<src<<"-->"<<j<<"="<<dist[j]<<"\n";
    }

}
int main(){
    int source,a;
    cout<<"enter the no. of vertices:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<"enter the distance between"<<i<<" and "<<j<<"=";
            cin>>a;
            cost[i][j]=cost[j][i]=a;
        }
        cout<<"\n";
    }
    cout<<"enter source";
    cin>>source;
    dijkstras(source);
    return 0;
}
