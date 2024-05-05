#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
class Solution {
public:
    int minAnagramLength(string s) 
    {
        int n = s.length();
        unordered_map<char, int> umap;
        for(int i = 0; i<n; i++)
        {
            umap[s[i]] ++;
        }
        //vector<int> freq;
        int hcf = umap[s[0]];
         
          for (auto it:umap)  
  { 

      hcf = __gcd(hcf, it.second);
  }
        
        return n/hcf;
    }
};