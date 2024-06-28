class Solution {
public:
    class city
    {
        public:
            int number;
            long long degree;
        
            city(int number_, long long degree_)
            {
                number = number_;
                degree = degree_;
            }
    };
    long long maximumImportance(int n, vector<vector<int>>& roads)
    {
        // vector<int> random_list;
        // for(int i = 0; i<roads.size(); i++)
        // {
        //     random_list.push_back(roads[i][0]);
        //     random_list.push_back(roads[i][1]);
        // }
        
        unordered_map<int, long long> frequencyMap;
        for(int i = 0; i<roads.size(); i++)
        {
            frequencyMap[roads[i][0]]++;
            frequencyMap[roads[i][1]]++;
        }
        
        
        vector<city> city_list;
        for(int i = 0; i<n; i++)
        {
            long long degree_of_i = frequencyMap[i];
            city city_local =  city(i, degree_of_i);
            city_list.push_back(city_local);
        }
        
        sort(
            city_list.begin(), 
            city_list.end(), 
            [](const city &a, const city &b) {return a.degree > b.degree ;}
             );
            
        long long count = 0;
        for(long long i = 0; i<n; i++)
        {
            count+= (n-i)*(city_list[i].degree);
        }
        return count;
        
    }
};