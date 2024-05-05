
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        

        // Hashtable
        unordered_map<int, int> hashMap;
       

        // Single iteration
        for(int i = 0; i<n; i++)
        {
            int remainder = target - nums[i];
            //cout<<remainder<<endl;
            
            if(hashMap.count(remainder))
            //cout<<"Found"<<endl;
            // number = remainder is already present
            {
                
                return {hashMap[remainder], i};
            }

            hashMap[nums[i]] = i;
            }


            //return temp;
        return{};
    }

            
           
        
        
        
};

