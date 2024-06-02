class Solution {
public:
    int minimumChairs(string s) 
    {
        int max = 0;
        int current = 0;
        for(int i =0; i<s.length(); i++)
        {
            if (s[i] == 'E')
            {
                current ++;
            }
            else
            {
                current--;
            }
            
            if(current > max)
            {
                max = current;
            }
        }
        return max;
    }
};