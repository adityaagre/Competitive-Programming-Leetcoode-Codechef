class Solution {
public:
    int numberOfChild(int n, int k) 
    {
        // int round = k/n-1;
        // cout<<round;
        // if(round%2)
        // {
        //    return n-1%k; 
        // }
        // else
        // {
        //     return n-1 - (n-1%k);
        // }
        
        int round = k % (2*(n-1));
        if (round>n-1)
        {
            // return n-1 - (round - n-1);
            return n-1 - (round - (n-1) );
        }
        else
        {
            return round;
        }
    }
};