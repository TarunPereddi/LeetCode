class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatestCandy = 0;
        vector<bool> table;
        for(int i = 0; i < candies.size(); i++){
            greatestCandy = greatestCandy < candies[i] ? candies[i]: greatestCandy;
        }

        for(int i = 0; i < candies.size(); i++){
            if(greatestCandy <= (extraCandies+candies[i]) )table.push_back(true);
            else table.push_back(false);
        }

    return table;
    }
};