#include <stdio.h>
#include <vector>


class Solution {
public:
    int repeatedNTimes(vector<int> &nums) {

        //nums.sort();
        sort(nums.begin(), nums.end());
        int mid = nums.size();
        int lower_mid = nums[mid];
        int upper_mid = nums[mid+1];

        if (lower_mid == upper_mid)
        {
            return lower_mid;
        }

        else if(lower_mid = nums[mid-1])
        {
            return lower_mid;
        }

        else
        {
            return upper_mid;
        }
        
    }
};