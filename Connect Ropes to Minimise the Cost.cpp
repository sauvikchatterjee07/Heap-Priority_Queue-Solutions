
    int connectRopes(vector<int>& ropes) {
        priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end());
        int cost = 0;
        
        while(pq.size()>=k){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            cost+=first+second;
            pq.push(first+second);
        }
        
        while(!pq.empty()){
            cost += pq.top();
            pq.pop();
        }
        return cost;
    }
