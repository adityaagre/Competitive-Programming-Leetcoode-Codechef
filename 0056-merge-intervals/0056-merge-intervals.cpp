class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(
            intervals.begin(), 
            intervals.end(), 
            [](const vector<int>& a, const vector<int>& b){return a[0] < b[0];}
        );
        unordered_map<int, int> omit_list;
        vector<vector<int>> ans;
        for(int i=0; i<intervals.size(); i++)
        {
            if(omit_list.find(i) == omit_list.end())
            {
                int start=intervals[i][0];
                int end=intervals[i][1];
                bool flag = true;
                int ctr = 1;
                while(flag)
                {
                    if(i+ctr >= intervals.size())
                    {
                        break;
                    }
                    if(intervals[i+ctr][0] <= end)
                    {
                        omit_list[i+ctr] = 1;
                        if(intervals[i+ctr][1]>end)
                            end = intervals[i+ctr][1];
                    }
                    ctr++;
                }
                vector<int> single;
                single.push_back(start);
                single.push_back(end);
                ans.push_back(single);
            }
        }
        return ans;
            
            // for(int i=0; i<intervals.size(); i++)
            // {
            //     if(omit_list.find(i) == omit_list.end())
            //     {
            //         ans.push_back(intervals[i]);
            //     }
            // }
            // return ans;
            
            
        
            
    }
};