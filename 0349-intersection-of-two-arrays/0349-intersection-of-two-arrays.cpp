class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {

        unordered_set <int> s;
        // Hello
        // Hello again
        vector<int> ans;

        for(int i =0; i<nums1.size(); i++)
        {
            s.insert(nums1[i]);

        }

        for(int i =0; i<nums2.size(); i++)
        {
            if(s.find(nums2[i]) != s.end())
            {
                ans.push_back(nums2[i]);
            }
        }

        unordered_set<int> ans2;
        for(int i =0; i<ans.size(); i++)
        {
            if(ans2.find(ans[i]) == ans2.end())
            {
                ans2.insert(ans[i]);
            }

        }

        vector<int> ans3;
        unordered_set<int> :: iterator it;

        
        for(it = ans2.begin(); it!=ans2.end(); it++)
        {
            ans3.push_back(*it);
        }

        return ans3;
        



        
    }
};