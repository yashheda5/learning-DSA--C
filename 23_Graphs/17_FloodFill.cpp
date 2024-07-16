class Solution {
public:
void dfs(vector<vector<int>>& image, int sr, int sc, int oldcolor,int newcolor,map<pair<int,int>,bool>& visited){
    image[sr][sc]=newcolor;
    visited[{sr,sc}]=true;
    int dx[]={-1,0,1,0};
    int dy[]={0,-1,0,1};
    for(int i=0;i<4;i++){
        int newX=sr+dx[i];
        int newY=sc+dy[i];
        if(newX>=0 && newY>=0 && newX<image.size() && newY<image[0].size() && !visited[{newX,newY}]
        && image[newX][newY]==oldcolor){
            dfs(image,newX,newY,oldcolor,newcolor,visited);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        map<pair<int,int>,bool>visited;
        int oldcolor=image[sr][sc];
        dfs(image,sr,sc,oldcolor,color,visited);
        return image;
    }
};