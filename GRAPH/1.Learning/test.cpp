// this file is for individual testing of any short program

#include<iostream>
#include<vector>
using namespace std;
        
int main(){
int n, m  ; // n -> no of nodes , m -> no of edges 
cin>>n>>m  ;
vector<int> adjList [n+1];
for(int i = 0; i <= m; i++)
{
    int u,v  ; // edges between u and v 
    cin>>u>>v ;
    adjList[u].push_back(v) ;
    adjList[v].push_back(u) ;
}
for(int i=0; i <n; i++)
{
    for(auto it : adjList[i])
    {
        cout<<it<<" " ;
    }
    cout<<endl;
}
return 0;
}