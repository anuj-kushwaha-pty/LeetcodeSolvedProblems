class Solution {
public:
    bool isfreqsame(int freq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;

    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i=0; i<s1.length(); i++){
            freq[s1[i]-'a']++;

        }
        int windsize = s1.length();
        for(int i = 0; i<s2.length(); i++){
            int windindex = 0, index = i, windfreq[26] = {0};
            while(windindex<windsize && index<s2.length()){
                windfreq[s2[index]-'a']++;
                windindex++; index++;

            }
            if(isfreqsame(freq,windfreq)){
                return true;
            }
            
        }
        return false;
    }
};