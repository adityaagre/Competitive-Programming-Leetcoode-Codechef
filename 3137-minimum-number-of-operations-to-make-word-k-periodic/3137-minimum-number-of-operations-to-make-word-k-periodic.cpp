class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) 
    {
        unordered_map<string, double> umap;
        int n = word.length();
        int gatthe = n/k;
        
        for(int x = 0; x<gatthe; x++)
        {
            int i = x*k;
            string tukda = word.substr(i, k);
            
            if(umap.find(tukda) == umap.end())
            {
                umap.insert(make_pair(tukda,1));
            }
            else
            {
                umap[tukda] += 1;
            }
        }
        vector<int> freq;
        
        unordered_map<string, double>::iterator itr; 
  //cout << "\nAll Elements : \n"; 
  for (itr = umap.begin();  
       itr != umap.end(); itr++)  
  { 
    // itr works as a pointer to  
    // pair<string, double> type  
    // itr->first stores the key part and 
    // itr->second stores the value part 
    //cout << itr->first << "  " <<  
            //itr->second << endl; 
      freq.push_back(itr->second);
  } 
        int max_freq = *max_element(freq.begin(), freq.end());
        return n/k - max_freq;
        
    }
};