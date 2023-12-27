// Q1. ROTTEN ORANGES 
    // You are given an m x n grid where each cell can have one of three values:

    // 0 representing an empty cell,
    // 1 representing a fresh orange, or
    // 2 representing a rotten orange.
    // Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

    // Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

// int delR[] = {-1,0,1,0} ;
// int delC[] = {0,1,0,-1} ;
// class Solution {
// private: 
//     int fun(vector<vector<int>> &grid, vector<vector<int>> &vis, queue<pair<int,int>> &q)
//     {   
//         int ans = 0 ;
//         while(!q.empty())
//         {
//             int len = q.size() ;
//             for(int i = 0; i < len; i++)
//             {
//                 auto it = q.front() ;
//                 q.pop() ;
//                 int rowInd = it.first ;
//                 int colInd = it.second ;
//                 // int value = it.second ;
//                 int m = grid.size() ;
//                 int n = grid[0].size() ;
//                 for(int i = 0; i <= 3; i++)
//                 {
//                     int newR = rowInd + delR[i] ;
//                     int newC = colInd + delC[i] ;
//                     if(newR >= 0 && newR < m && newC >= 0 && newC < n &&(grid[newR][newC] == 1 && vis[newR][newC] == 0))
//                     {
//                         q.push({newR,newC}) ;
//                         vis[newR][newC] = 1 ;
//                     }
//                 }
//             }
//             ans++ ;
//         }
//         if(ans == 0 )
//         {
//             return ans ;
//         }
//         return ans-1 ;
//     }
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int m = grid.size() ;
//         int n = grid[0].size() ;
//         vector<vector<int>> vis(m,vector<int>(n,0)) ;
//         queue<pair<int,int>> q ;

//         for(int i = 0; i < m; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(grid[i][j] == 2)
//                 {
//                     q.push({i,j}) ;
//                     vis[i][j] = 1 ;
//                 }
//                 else if(grid[i][j] == 0)
//                 {
//                     vis[i][j] = 1 ;
//                 }
//             }
//         }
//         int ans = fun(grid,vis,q) ;

//         for(int i = 0; i < m; i++)
//         {
//             for(int j = 0; j < n; j++)
//             {
//                 if(vis[i][j] != 1)
//                 {
//                     return -1 ;
//                 }
//             }
//         }
//         return ans ;
//     } 
// };
// -------------------------------------------------------------------------------------------------------

// Q2. FLOOD FILL 

// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
// You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].
// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color 
// as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. 
// Replace the color of all of the aforementioned pixels with color.
// Return the modified image after performing the flood fill.

// int delR[] = {-1,0,1,0} ;
// int delC[] = {0,1,0,-1} ;
// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int m = image.size() ;
//         int n = image[0].size() ;
//         vector<vector<int>> ans =  image ;
//         vector<vector<int>> vis(m,vector<int>(n,0))  ;
//         queue<pair<int,int>> q ;
//         q.push({sr,sc}) ;
//         vis[sr][sc] = 1 ;
//         while(!q.empty())
//         {
//             auto it = q.front() ;
//             int row = it.first ;
//             int col = it.second ;
//             int val = ans[row][col] ;
//             q.pop() ;
//             for(int i = 0; i <= 3; i++)
//             {
//                 int newR = row + delR[i] ;
//                 int newC = col + delC[i] ;
//                 if(newR >= 0 && newR < m && newC >= 0 && newC < n && ans[newR][newC] == val && !vis[newR][newC])
//                 {
//                     q.push({newR,newC}) ;
//                     vis[newR][newC] = 1 ;
//                 }
//             }
//             ans[row][col] = color ;
//         }
//         return ans ;
//     }
// };
// ----------------------------------------------------------------------------------------------------------------------
//  Q3. Cycle Detection in Undirected Graph using BFS 

// Problem Statement: Given an undirected graph with V vertices and 
// E edges,check whether it contains any cycle or not.

//  bool cycleDetectionUsingBFS(int start, vector<int> &vis vector<int> adj)
// {
//     int vis[start] = 1 ;
//     queue<int> q ;
//     q.push(start) ;

//     while(!q.empty()) {
//         int node = q.front() ;
//         q.pop();
//         for(auto it : adj[node]) {
//             if(!vis[it])
//             {
//                 q.push(it) ;
//             }
//             else 
//             {
//                 return false ;
//             }
//         }
//     }
//     return true ;
// }