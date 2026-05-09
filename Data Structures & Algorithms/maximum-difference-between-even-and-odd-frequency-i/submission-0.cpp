class Solution {
public:
    int maxDifference(string s) {
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int maxodd=0;
        int mineven=INT_MAX;
        for(int f:freq){
            if(f==0)continue;
            if(f%2==0){
                mineven=min(mineven,f);
            }
            else{
                maxodd=max(maxodd,f);
            }
        }
        return maxodd-mineven;
    }
};