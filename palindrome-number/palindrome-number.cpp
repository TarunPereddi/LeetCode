class Solution {
public:
Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);   
    }
    bool isPalindrome(int x) {
        auto temp = to_string(x);
		    int i = 0;
		    int j = temp.size()-1;
		    
		    while(i<j){
		        if(temp[i] != temp[j]){
		            return false;
		        }
		        i++; j--;
		    }
		    return true;

    }
};