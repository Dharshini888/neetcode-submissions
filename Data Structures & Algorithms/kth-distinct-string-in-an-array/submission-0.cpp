class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>freq;
        for(string ch:arr){
            freq[ch]++;
        }
        for(string ch:arr){
            if(freq[ch]==1){
                k--;
                if(k==0)
                return ch;
            }
        }
        return "";
    }
};