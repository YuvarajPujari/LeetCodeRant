class Solution {
public:
 void dfs(int r,int c,vector<vector<int>>&image,int n,int m,vector<vector<bool>>&visi,int color,int value){
    if(r<0 || r>=n || c<0 || c>=m || visi[r][c] || image[r][c]!=value) return;
    visi[r][c]=true;
    image[r][c]=color;
    int dx[4]={-1,1 ,0,0};
    int dy[4]={0,0,1,-1};
    for(int i=0;i<4;i++){
        int nr=r+dx[i];
        int nc=c+dy[i];
        dfs(nr,nc,image,n,m,visi,color,value);
    }
 }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n=image.size();
        int m=image[0].size();
        int value=image[sr][sc];
        vector<vector<bool>>visi(n,vector<bool>(m,false));
        dfs(sr,sc,image,n,m,visi,color,value);

        return image;
    
    }
};
