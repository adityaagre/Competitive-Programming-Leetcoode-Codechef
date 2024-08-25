class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> m;
        vector<int> a;
        for (int i =0; i<s.size(); i++)
        {
            if(m.find(s[i]) == m.end())
            {
                m[s[i]] = -1;
            }
            else
            {
                m[s[i]] = 1;
            }
        }
        for (int i =0; i<s.size(); i++)
        {
            if(m[s[i]] == -1)
            {
                return i;
            }
        }
        return -1;
    }
};