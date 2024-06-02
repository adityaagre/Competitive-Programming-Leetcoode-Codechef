class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings)
    {
        /*
        int counter = days;
        vector<bool> taken;
        for(int i=1; i<=days; i++)
        {
            taken.push_back(0);
        }
        for(int i=0; i<meetings.size(); i++)
        {
            for(int j=meetings[i][0]; j<=meetings[i][1]; j++)
            {
                    if(taken[j-1] == 0)
                    {
                        counter--;
                        taken[j-1]=1;
                    }
               
            }
        }
        */
        /*
        for(int i=0; i<days; i++)
        {
            if(taken[i]==1)
            {
                counter--;
            }
            else
            {
                cout<<i<<endl;
            }
        }
        */
       
        sort(meetings.begin(), meetings.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0];
    });
        
        vector<vector<int>> meetings2;
        
       int curr_min = meetings[0][0];
       int curr_max = meetings[0][1];
        
        for(int i=0; i<meetings.size(); i++)
        {
            int new_min = meetings[i][0];
            int new_max = meetings[i][1];
            
            cout<<curr_min<<curr_max<<" "<<new_min<<new_max<<endl;
            
            if(new_min <= curr_max)
            {
                if(new_max > curr_max)
                {
                    curr_max=new_max;
                }
            }
            
            else
            {
                vector<int> local;
                local.push_back(curr_min);
                local.push_back(curr_max);
                meetings2.push_back(local);
                
                curr_min = new_min;
                curr_max = new_max;
            }
            
            
        }
        
        vector<int> local;
                local.push_back(curr_min);
                local.push_back(curr_max);
                meetings2.push_back(local);
        
        cout<<"Meet2"<<endl;
        
        for(int i=0; i<meetings2.size(); i++)
        {
            cout<<meetings2[i][0]<<meetings2[i][1]<<" ";
        }
        
        
        int counter = days;
        for(int i=0; i<meetings2.size(); i++)
        {
            counter -= meetings2[i][1] - meetings2[i][0] +1;
        }
        
        return counter;
        
        
        
        
    
    
     
        
        
    }
};