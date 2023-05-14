pair<int, int> search(vector<vector<int>> matrix, int x)
{  
    int row=matrix.size(),col=matrix[0].size();
    pair<int,int>p;
    p.first=-1;p.second=-1;
    for(int i=0;i<row;i++)
    if(matrix[i][0]<=x && matrix[i][col-1]>=x){
        int s=0,e=col-1,mid=s+(e-s)/2;
        while(s<=e){
          if (matrix[i][mid] == x) {
            p.first = i;
            p.second = mid;
            return p;
          } 
          else if (matrix[i][mid] > x)
            e = mid - 1;
          else if (matrix[i][mid] < x)
            s = mid + 1;
          mid = s + (e - s) / 2;
        }
    }
     return p;
}
