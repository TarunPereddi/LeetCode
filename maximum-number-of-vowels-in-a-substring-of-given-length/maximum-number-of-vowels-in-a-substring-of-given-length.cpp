class Solution {
public:

Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }

    
    int maxVowels(string s, int k) {
        int numOfVow = 0;
        for(int i =0; i < k; i++){
            if(s[i]== 'a'||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'){
                numOfVow++;
            }
        }
        int maxVow = numOfVow;

        for(int i = k; i < s.size(); i++){
            if(s[i-k]== 'a'||s[i-k]== 'e'||s[i-k]== 'i'||s[i-k]== 'o'||s[i-k]== 'u'){
                numOfVow--;
            }
            if(s[i]== 'a'||s[i]== 'e'||s[i]== 'i'||s[i]== 'o'||s[i]== 'u'){
                numOfVow++;
            }
            maxVow = max(maxVow,numOfVow);
        }

        return maxVow;
    }
};