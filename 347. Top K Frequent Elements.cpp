    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto i: nums)
            mp[i]++;
        int n = nums.size();
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        for(auto it = mp.begin(); it!= mp.end(); it++){
            pq.push({it->second, it->first});
            
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
            
        return res;
        
    }
