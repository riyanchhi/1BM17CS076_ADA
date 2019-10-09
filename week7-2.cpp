#include<bits/stdc++.h>
using namespace std;
int v[20],w[20],t[30][30];
int n,weight;
void DPKnapsack(){
   // for(int i=0;i<=n;i++){
       // t[i][0]=0;
    //}
   // for(int j=1;j<=weight;j++){
       // t[0][j]=0;
   // }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=weight;j++){
            if(j-w[i]>=0){
                t[i][j]=max(t[i-1][j],v[i]+t[i-1][j-w[i]]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=weight;j++){
            cout<<t[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"max value="<<t[n][weight];
}
int main(){
    cout<<"enter no. of weights=";
    cin>>n;
    cout<<"enter "<<n<<" weights"; 
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    cout<<"enter "<<n<<" values"; 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"max weight=";
    cin>>weight;
    DPKnapsack();

}