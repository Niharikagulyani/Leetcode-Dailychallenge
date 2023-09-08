vector<vector<int>> generate(int numRows) {
    vector<vector<int>> tri;
    for(int i=1;i<=numRows;i++){
        vector<int> row(i,1);
        if(i>2){
            for(int j=1;j<=row.size()-2;j++)
               row[j] = tri[tri.size()-1][j] + tri[tri.size()-1][j-1];
        }
        tri.push_back(row);
    }
    return tri;
}
