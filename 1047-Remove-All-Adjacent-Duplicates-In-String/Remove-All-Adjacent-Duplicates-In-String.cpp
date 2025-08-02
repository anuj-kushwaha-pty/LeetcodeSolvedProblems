class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(char c : s){
            if(!result.empty() && result.back() == c){// check whether the result string is empty or not && the last character added to the result string is the same as the current character c from the input string.
                result.pop_back();//it will remove the duplicate
            }
            else{
                result.push_back(c);
            }
        }
        return result;

    }
};