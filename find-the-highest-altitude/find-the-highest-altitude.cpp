class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAlt = 0;
        int highest = 0;

        for(int i = 0; i < gain.size(); i++){
            currentAlt += gain[i];
            if(highest<=currentAlt) highest = currentAlt;
        }

        return highest;
    }
};