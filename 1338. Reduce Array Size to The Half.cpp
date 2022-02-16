    int minSetSize(vector<int>& arr) {
        map<int,int> map1;
        int sz=arr.size();
        for(int i=0;i<sz;i++)
        {
            map1[arr[i]]++;
            
        }
        
        priority_queue<int> pq;
        for(auto it:map1)
        {
            pq.push(it.second);
        }
        
        int num=0,suu=0;
        while(suu<(sz/2)){
            suu+=pq.top();
            pq.pop();
            num++;
            
        }
        return num;
    }
