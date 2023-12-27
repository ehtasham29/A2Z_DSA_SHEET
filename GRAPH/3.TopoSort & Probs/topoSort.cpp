// -------> TOPO SORT ALGO
// topoSortUsingDFS(int node, vector<int> &vis, vector<int> adj[], stack<int> &st) {
//     vis[node] = 1 ;
//     for(auto it : adj[node]){
//         if(!vis[it]){
//             topoSortUsingDFS(it,vis,adj,st) ;
//         }
//     }
//     st.push(node);
// }

// // Call the above function and then store the values in stack in same order LIFO