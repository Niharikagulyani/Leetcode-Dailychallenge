// 1st method - using slope 
bool checkStraightLine(vector<vector<int>>& coordinates) {
    if(coordinates.size()<=2) return true; 
    if(coordinates[1][0]-coordinates[0][0]==0){
        for(int i=0;i<coordinates.size();i++){
            if(coordinates[i][0]!=coordinates[0][0])
            return false;
        }
        return true;
    }
    float m = (float)(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
    float c= coordinates[0][1]-(m*coordinates[0][0]);
    for(int i=2;i<coordinates.size();i++){
        if(coordinates[i][1]!= (m*coordinates[i][0])+c)
        return false;
    }
    return true;
    }
// 2nd method 
bool checkStraightLine(vector<vector<int>>& coordinates) {
    if(coordinates.size()<2) return true;
    int x= coordinates[1][1] - coordinates[0][1];  
    int y= coordinates[1][0] - coordinates[0][0];
    for(int i=2;i<coordinates.size();i++) {
        if(x*(coordinates[i][0]-coordinates[1][0]) != y*(coordinates[i][1]-coordinates[1][1]))
        return false;
    }
    return true;
    }
