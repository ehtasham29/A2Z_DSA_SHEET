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