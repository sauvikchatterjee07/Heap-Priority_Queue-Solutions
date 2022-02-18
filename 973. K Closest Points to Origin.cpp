    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> p;
            
        for(int i = 0; i< points.size(); i++){
            p.push({points[i][0] * points[i][0] + points[i][1] * points[i][1],{points[i][0],points[i][1]}});
            
            if(p.size()>k)
                p.pop();
        }
        
        vector<vector<int>> res;
        
        while(!p.empty()){
            vector<int> inner = {p.top().second.first, p.top().second.second};
            res.push_back(inner);
            inner.clear();
            p.pop();
        }
        
        return res;
    }
