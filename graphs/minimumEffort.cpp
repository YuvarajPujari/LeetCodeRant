class Solution {
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        if(n==1 and m==1) return 0;
      priority_queue<
    pair<int, pair<int,int>>,
    vector<pair<int, pair<int,int>>>,
    greater<pair<int, pair<int,int>>>
> pq;

vector<vector<int>>d(n,vector<int>(m,1e9));
pq.push({0,{0,0}});
d[0][0]=0;

while(!pq.empty()){
    int dis=pq.top().first;
    int x=pq.top().second.first;
    int y=pq.top().second.second;
    cout<<x<<" "<<y<<" "<<dis<<endl;
    if(x==n-1 and y==m-1) return dis;
     pq.pop();
     for(int i=0;i<4;i++){
        int x1=dx[i]+x;
        int  y1=dy[i]+y;
        if(x1>=0 and x1<n and y1>=0 and y1<m ){
          
            int w=abs(heights[x][y]-heights[x1][y1]);
            int n=max(w,dis);
            if(d[x1][y1]>n){
                cout<<x1<<" "<<y1<<" "<<n<<endl;
                d[x1][y1]=n;
                pq.push({n,{x1,y1}});
            }
        }
     }
     cout<<"=============="<<endl;

}

return 0;


    }
};
