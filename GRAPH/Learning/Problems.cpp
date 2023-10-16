// Q1. Counting Graphs
//      no of undirected graph that can be formed using N vertices , 
//      allowing for dissconnected component within graph ,
//       self edges and multiages are not allowed 
//      eg.
//       For ‘N’ = 3,
//       Consider the vertices to be ‘A’, ’B’ and ‘C’.
//       These are the possible 8 graphs.


// int countGraph(int N)
// {
//     int k = N*(N-1)/2 ;
//     return pow(2,k) ;
// }

// ------------------------------------------------------------------------------------------------------------------------

// Q2. Number of Provinces
// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.
// A province is a group of directly or indirectly connected cities and no other cities outside of the group.

// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly      connected, and isConnected[i][j] = 0 otherwise.
// Return the total number of provinces.


// class Solution {
// public:
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size() ;
//         vector<vector<int>> adjList(n+1) ; // Changed to vector<vector<int>>
//         for(int i = 0; i < n; i++) // Changed to "<" instead of "<="
//         {
//             for(int j = 0; j < n; j++) // Changed to "<" instead of "<="
//             {
//                 if(i != j && isConnected[i][j])
//                 {
//                     adjList[i+1].push_back(j+1) ;
//                     adjList[j+1].push_back(i+1) ;
//                 }
//             }
//         }
//         vector<int> vis(n+1,0) ;
//         int count = 0 ;
//         for(int i=1; i<=n; i++){ // Check for unvisited nodes
//             if(vis[i] == 0){
//                 count++;
//                 vis[i] = 1;
//                 queue<int> q;
//                 q.push(i);
//                 while(!q.empty())
//                 {
//                     int num = q.front() ;
//                     q.pop() ;
//                     for(auto it : adjList[num])
//                     {
//                         if(vis[it] == 0)
//                         {
//                             q.push(it) ;
//                             vis[it] = 1 ;
//                         }
//                     }
//                 }
//             }
//         }
//         return count ;
//     }
// };
