class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        
        int len = nums.size();
        unordered_map<int, int> freq;
        vector<int> doubles;
        
        for(int i = 0; i<len; i++)
        {
            if(freq.find(nums[i]) == freq.end())
            {
                // If that number os not present previously, add that number to the hashmap.
                freq.insert({nums[i], 1});
            }
            
            else
            {
                // If that number was present previously, add it to the doubles vector.
                // Note:, this is based on the fact that no number can appear thrice according to given question.
                doubles.push_back(nums[i]);
            }
        }
        
        
        
        
        
        int ans = 0;
        if(doubles.size() == 0)
        {
            return ans;
        }
        else if(doubles.size() == 1)
        {
            return doubles[0];
        }
        else
        {
            int l2 = doubles.size();
            ans = doubles[0];
            
            for(int i =1; i<l2; i++)
            {
                ans =  ans ^ doubles[i];  // This is the symbol for XOR. x^y 
            }
            
            return ans;
        }
        
        
        
        
        
    }
};