class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        
        int low=0;
        int mid=low;
        int high = n-1;
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
                
            }
            else // 1
            {
                mid++;
            }
        }
        
    }
};