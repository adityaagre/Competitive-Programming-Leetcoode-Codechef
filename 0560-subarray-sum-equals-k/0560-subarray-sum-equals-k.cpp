class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int sum = 0;
        int counter = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for(int i =0; i<nums.size(); i++)
        {
            sum = sum + nums[i];
            counter += m[sum - k];
            cout<<nums[i]<<" "<<sum<<" "<<counter<<endl;
            m[sum] ++;
            
        }
        return counter;
    }
};