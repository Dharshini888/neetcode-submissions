class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        return false;
        vector<int>stot(256,-1);
        vector<int>ttos(256,-1);
        for(int i=0;i<s.length();i++){
            unsigned char a=s[i];
            unsigned char b=t[i];

            if(stot[a]!=-1 && stot[a]!=b)
            return false;
            if(ttos[b]!=-1 && ttos[b]!=a)
            return false;
            stot[a]=b;
            ttos[b]=a;
        }
        return true;
    }
};