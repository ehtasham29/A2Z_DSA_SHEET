// ------------------------------>>>   INTRODUCTION OF THE GRAPH <<<<<<<-----------------------------
// 1. Undirected graph                 2. directed graph      -- consists of vertex or nodes 
//    total nodes = 2*Edges            indegree or outdegree 

// ----------------------------------------------------------------------------------------

//  Two ways of taking input 
// 1. Matrix  2. List 


// ----> Using Matrix 
// #include<iostream>
// using namespace std;
        
// int main(){
// int n, m  ; // n -> no of nodes , m -> no of edges 
// cin>>n>>m  ;
// int adjMatrix[n+1][m+1] = {0} ;
// for(int i = 0; i <= m; i++)
// {
//     int u,v  ; // edges between u and v 
//     cin>>u>>v ;
//     adjMatrix[u][v] = 1 ;
//     adjMatrix[v][u] = 1 ;
// }

// for(int i = 0; i <= n; i++)
// {
//     for(int j = 0; j <= m; j++)
//     {
//         cout<<adjMatrix[i][j]<<" ";
//     }
//     cout<<endl ;
// }
// return 0;
// }


// ---> Using List 

// #include<iostream>
// #include<vector>
// using namespace std;
        
// int main(){
// int n, m  ; // n -> no of nodes , m -> no of edges 
// cin>>n>>m  ;
// vector<int> adjList [n+1];
// for(int i = 0; i <= m; i++)
// {
//     int u,v  ; // edges between u and v 
//     cin>>u>>v ;
//     adjList[u].push_back(v) ;
//     adjList[v].push_back(u) ;
// }
// return 0;
// }

// --------------------------------------------------------------------------------------------------------
// ------------------------------>>>   CONNECTED COMPONENT OF THE GRAPH <<<<<<<-----------------------------

// visited array comes in existence for traversal of all the component of graph 
// it helps to mark all the element of connected componenet


// --------------------------------------------------------------------------------------------------------
// ------------------------------>>>  TRAVERSAL TECHNIQUES  <<<<<<<-----------------------------
// 1. BFS --> Breadth First Search 
// 2. DFS --> Depth First Search 

// indexing can be both 0 based or 1 based , but logic will remain same 
// traversal of any graph will depend on the starting node give 
// differnt starting node will have different BFS or DFS traversal of the same given graph

// BFS traversal requires a Queue DS and a vis[] of one extra size 
// --> ALGORITHM OF BFS 
//     1. Push starting node in the Q and mark the vis array 
//     2. Pop the front element of Q and check its adjList and then push them in Q
//          after checking them on vis whether marked or not
//     3. store the ans in vector 
//     4. Repeat this till Q become null 

// ------------------------>>>>>>>>>> BFS Code 

// vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         // Code here
//         int vis[V] = {0} ;
//         vis[0] = 1 ;
//         queue<int> q ;
//         vector<int> bfs ;
//         q.push(0) ;
//         while(!q.empty())
//         {
//             int node = q.front() ;
//             q.pop() ;
//             bfs.push_back(node) ;
//             for(auto it : adj[node])
//             {
//                 if(!vis[it])
//                 {
//                     vis[it] = 1 ;
//                     q.push(it) ;
//                 }
//             }
//         }
//         return bfs ;
// }

