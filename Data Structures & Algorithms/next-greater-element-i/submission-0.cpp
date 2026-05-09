class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>next(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[i]>nums2[st.top()]){
                next[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int>res;
        for(int num:nums1){
            for(int i=0;i<n;i++){
                if(nums2[i]==num){
                    res.push_back(next[i]);
                    break;
                }
            }
        }
        return res;
    }
};