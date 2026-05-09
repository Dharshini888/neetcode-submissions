class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    c++;
                }
                if(c>=nums.size()/2)
                return nums[i];
            }
        }
        return 0;
    }
};