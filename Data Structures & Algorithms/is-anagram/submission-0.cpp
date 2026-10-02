class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> h;
        int i;
        for( i=0;i<s.size();i++)
        {
            h[s[i]]++;
        }
        unordered_map<char,int> k;
        int j;
        for( j=0;j<t.size();j++)
        {
            k[t[j]]++;
        }
        if(h==k)
        {
            return true;
        }
        return false;
    }
};
