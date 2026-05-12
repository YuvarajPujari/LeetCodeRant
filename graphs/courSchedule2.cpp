class Solution {
    vector<int>ans;
   bool flag=false;
public:
   void dfs(int i ,vector<bool>&visi,vector<bool>&path,vector<vector<int>>adj){
    if(flag) return ;
    path[i]=true;
    visi[i]=true;
    for(auto it:adj[i]){
        if(!visi[it]) dfs(it,visi,path,adj);
        if(path[it]) {
            flag=true;
            break;
        }
    }
    ans.push_back(i);
    path[i]=false;

   }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
           vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool>visi(numCourses,false);
        vector<bool>path(numCourses,false);
        for(int i=0;i<numCourses;i++){
          if(!visi[i])dfs(i,visi,path,adj);
          if(flag) return {};
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
        
    }
};
