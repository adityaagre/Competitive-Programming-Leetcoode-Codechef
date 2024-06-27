class Solution {
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        // int n = edges.size();
        // vector<int> e1 = edges[0];
        vector<int> e2 = edges[1];
        
        // int a = e1[0];
        // int b = e1[1];
        int c = e2[0];
        int d = e2[1];
        
        if(count(edges[0].begin(), edges[0].end(), c))
        {
            return c;
        }
        else
        {
            return d;
        }
        return -1;
    }
};