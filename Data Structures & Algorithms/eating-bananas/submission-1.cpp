class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int m=l+(r-l)/2;
            long long total=0;
            for(int p:piles){
                total+=(p+m-1)/m;
            }
            if(total<=h){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
    }
};
