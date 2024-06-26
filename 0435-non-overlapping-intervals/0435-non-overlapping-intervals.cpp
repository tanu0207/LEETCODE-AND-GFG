class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        
        return a.second<b.second;
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>>v;
        for(int i=0;i<intervals.size();i++)
        {
            v.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(v.begin(),v.end(),cmp);
        int count=1;
        int free=v[0].second;
        for(int i=1;i<v.size();i++)
        {
            if(v[i].first>=free)
            {
                 count++;
                 free=v[i].second;
            }
           
        }
        return v.size()-count;

        
    }
};