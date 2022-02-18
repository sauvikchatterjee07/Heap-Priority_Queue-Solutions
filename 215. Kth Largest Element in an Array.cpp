   
//Most optimized Solution : Using Min Heap

    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i< nums.size(); i++){
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }








// Using Max Heap : 


int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        while(--k)
            pq.pop();
        return pq.top();
        
    }
