#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// matrix to adjacency list 
vector<vector<int>> matToList(vector<vector<int>> &matrix,int n, int m)
{
     vector<vector<int>> adjList(n+1) ; 
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++) 
            {
                if(i != j && matrix[i][j])
                {
                    adjList[i+1].push_back(j+1) ;
                    adjList[j+1].push_back(i+1) ;
                }
            }
     return adjList ;
}
// ---------------------------------------------------------------------------
int fun(vector<vector<int>> adjList, int n, int m)
{
    vector<int> vis(n+1,0) ;
    int count = 0 ;
    for(int i=1; i<=n; i++)
    { 
        if(vis[i] == 0)
        {
            count++;
            vis[i] = 1;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int num = q.front() ;
                q.pop() ;
                for(auto it : adjList[num])
                {
                    if(vis[it] == 0)
                    {
                        q.push(it) ;
                        vis[it] = 1 ;
                    }
                }
            }
        }
    }
    return count ;
}

// ----------------------------------------------------------------------------
int main(){

// using Matrix to create Adjacency list
int n, m ;
cout<<"Enter the row and col : " ;
cin>>n>>m ;
vector<vector<int>> matrix(n,vector<int>(m)) ;
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {
        cin>>matrix[i][j] ;
    }
}

vector<vector<int>> adjList = matToList(matrix,n,m) ;
int ans = fun(adjList,n,m) ;
cout<<"Final answer is : " <<ans<<endl ;
return 0;
}

// write the test cases here 
// 3 3 
// 1 1 0 1 1 0 0 0 1  