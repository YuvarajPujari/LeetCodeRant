// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
         vector<int>dis(V,1e9);
         dis[0]=0;
         for(int i=0;i<V;i++){
             for(int i=0;i<edges.size();i++){
                 int u=edges[i][0];
                 int v=edges[i][1];
                 int w=edges[i][2];
                 dis[v]=min(dis[v],dis[u]+w);
             }
         }
         for(int i=0;i<dis.size();i++){
             if(dis[i]==1e9)dis[i]=-1;
         }
         return dis;
    }
};
