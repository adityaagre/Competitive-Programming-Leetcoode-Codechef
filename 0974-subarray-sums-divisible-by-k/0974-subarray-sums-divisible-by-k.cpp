class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int sum = 0;
        int counter = 0;
        unordered_map<int,int> m;
        m[0] =1;
        for(int i =0; i<nums.size(); i++)
        {
            
            sum = sum + (nums[i]);
            int remainder = sum%k;
            if(remainder<0)
            {
                remainder = k+remainder;
            }
            counter += m[remainder];
            
            m[remainder] ++;
            
        }
        return counter;
    }
};