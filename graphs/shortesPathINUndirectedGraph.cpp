class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
    vector<vector<int>>adj(V);
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int>dis(V,1e9);
    dis[src]=0;
    queue<pair<int,int>>q;
    q.push({src,0});
    while(!q.empty()){
        int node=q.front().first;
        int w=q.front().second;
        q.pop();
        for(auto it:adj[node]){
            if(dis[it]>w+1){
                dis[it]=w+1;
                q.push({it,w+1});
            }
       
        }
    }
    for(int i=0;i<dis.size();i++){
        if(dis[i]==1e9) dis[i]=-1;
    }
    
    return dis;
    
    
    

    }
      
};
