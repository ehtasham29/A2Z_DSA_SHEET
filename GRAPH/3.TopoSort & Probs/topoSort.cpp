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

// -------------------------------------------------------------------------------------------------------

// ------------>> KAHN'S ALGORITHM
// vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
// 	    // code here
// 	    vector<int> inDegree(V,0) ;
// 	    for(int i = 0; i < V; i++){
// 	        for(auto it : adj[i]){
// 	            inDegree[it]++ ;
// 	        }
// 	    }
// 	    queue<int> q; 
// 	    for(int i = 0; i < V; i++){
// 	        if(inDegree[i] == 0) q.push(i) ;
// 	    }
// 	    vector<int> ans ;
	    
// 	    while(!q.empty()){
// 	        int node = q.front();
// 	        q.pop() ;
// 	        for(auto it : adj[node]){
// 	            if(inDegree[it] > 0) inDegree[it]-- ;
// 	            if(inDegree[it] == 0){
// 	                q.push(it) ;
// 	            }
// 	        }
// 	        ans.push_back(node) ;
// 	    }
// 	    return ans ;
// 	}

// -------------------------------------------------------------------------------------------------------
