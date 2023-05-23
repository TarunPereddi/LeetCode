class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0;
        string temp = "";
        if(chars.size()==1){return 1;}
        for(int i = 1; i < chars.size(); i++){
            if(chars[i-1]!=chars[i]){
                temp += chars[i-1];
                count += 1;
                if(count>1){
                    temp += to_string(count);
                }
                count = 0;
            }
            else if(i == chars.size()-1){
                temp += chars[i-1];
                count += 2;
                if(count>1){
                    temp += to_string(count);
                }
                count = 0;
            }
            else{
                count++;
            }
            if(i == chars.size()-1 & chars[i-1]!=chars[i]){
                temp += chars[i];
            }
        }



        vector<char> result;
        for(int i = 0; i < temp.size(); i++){
            result.push_back(temp[i]);
        }

        chars = result;
        

        return chars.size();
    }
};