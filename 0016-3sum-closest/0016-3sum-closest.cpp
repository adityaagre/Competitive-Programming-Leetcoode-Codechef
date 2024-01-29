class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int ans[3];
        ans[0] = 0;
        ans[1] = 1;
        ans[2] = 2;
        
        int min_diff = target - nums[0] - nums[1] - nums[2];
        int final_sum = nums[0] + nums[1] + nums[2];
        
        if(min_diff < 0)
        {
            min_diff = min_diff *(-1);
        }
        //cout<<min_diff<<endl;
        
        for(int i = 0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k = j+1; k<n; k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    int diff = target - sum;
                    if(diff < 0)
                    {
                        diff = diff*(-1);
                    }
                    //cout<<diff<<endl;
                    if(diff<min_diff)
                    {
                        min_diff = diff;
                        final_sum = sum;
                    }
                    
                    
                }
            }
        }
        
        
        
        return  final_sum;
        
        
    }
};