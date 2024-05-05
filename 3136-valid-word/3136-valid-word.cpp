class Solution {
public:
    bool isValid(string word) 
    {
        if(word.length() < 3)
            return false;
        bool vowel = false;
        bool consonant = false;
        for(int i=0; i<word.length(); i++)
        {
            bool vstatus = isvowel(word[i]);
            bool cstatus = isconsonant(word[i]);
            bool dstatus = isdig(word[i]);
            
            if(vstatus || cstatus || dstatus)
            {
                if(vowel == false)
                {
                    vowel = vstatus;
                }
                if(consonant == false)
                {
                    consonant = cstatus;
                }
            }
            else
            {
                return false;
            }
            
        }
        if(vowel && consonant)
        {
            return true;
        }
        return false;
        
    }
    bool isvowel(char c)
    {
        string v = "aeiouAEIOU";
        return (v.find(c) != string::npos);
    }
    
    bool isconsonant(char c)
    {
        string v = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
        return (v.find(c) != string::npos);
    }
    bool isdig(char c)
    {
        string v = "0123456789";
        return (v.find(c) != string::npos);
    }
    
    
};