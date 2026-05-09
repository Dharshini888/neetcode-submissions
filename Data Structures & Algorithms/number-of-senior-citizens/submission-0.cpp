class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        int n=details.size();
        for(int i=0;i<n;i++){
            int age=stoi(details[i].substr(11,2));
            if(age>60){
                cnt++;
            }
        }
        return cnt;
    }
};