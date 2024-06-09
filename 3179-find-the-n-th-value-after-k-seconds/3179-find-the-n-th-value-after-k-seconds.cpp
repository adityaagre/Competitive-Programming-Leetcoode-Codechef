class Solution {
public:
    int valueAfterKSeconds(int n, int k) 
    {
        const unsigned int M = 1000000007;
        vector<long long int> a1;
        vector<long long int> a2;
        for(int i=0; i<n; i++)
        {
            a1.push_back(1);
            a2.push_back(1);
        }
        for(int i=1; i<=k; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)
                {
                    a2[j] = a1[j];
                }
                else
                {
                    a2[j] = (a2[j-1] + a1[j])%M;
                }
            }
            a1 = a2;
        }
        return a2[n-1];
    }
};