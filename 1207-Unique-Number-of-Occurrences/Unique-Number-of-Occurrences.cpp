class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

       unordered_map<int,int>mp; //Creates a hash map (mp) to store the frequency of each number in arr.

       //store the frequency
       for(auto num:arr){
        mp[num]++;
       } 

       //check the count and insert in unordered set
       unordered_set<int>set; //Creates a hash set to store the frequencies.
       //Sets automatically discard duplicates, so this helps us detect if any frequency is repeated.
      
       for(auto it:mp){
        int freq = it.second;
        set.insert(freq);

       }
       //if size of mp is same as set that means all have unique frequency
       return set.size() == mp.size();
    }
};