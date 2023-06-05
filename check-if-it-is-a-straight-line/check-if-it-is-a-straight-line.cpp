class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int diffLeft = coordinates[1][0]-coordinates[0][0];
        int diffRight = coordinates[1][1] - coordinates[0][1];
        for(int i = 1; i < coordinates.size()-1 ; i++){
            if(((coordinates[i+1][1] - coordinates[i][1])*diffLeft != (coordinates[i+1][0]-coordinates[i][0])*diffRight)){
                return false;
            }
        }
        return true;
    }
};