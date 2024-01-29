class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x==0)
        {
            return true;
        }
        
        else
        {
            long long seedha = x;
            long long ulta = 0;
            
            if(x>0)
            {
                while(x>0)
                {
                    int last_dig = x%10;
                    x = x/10;
                    
                    ulta = ulta*10 + last_dig;
                    
                    
                    
                    
                }
                
                
                
            }
            
            // Note: no negative number is considered a palindrome, atleast yaha to aisa diya hai. to note that 121 is a palindrome, but -121 is not. 
            
            return(ulta == seedha);
        }
        
        
    }
};
