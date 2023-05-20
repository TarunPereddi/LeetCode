class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> table;
        int greatestCandy = *max_element(candies.begin(),candies.end());

        for(int i = 0; i < candies.size(); i++){
            if(greatestCandy <= (extraCandies+candies[i]) )table.push_back(true);
            else table.push_back(false);
        }

    return table;
    }
};