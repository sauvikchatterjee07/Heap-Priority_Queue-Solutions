
#Frequency Sort - Leetcode (Not giving correct answer)

  vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        map<int,priority_queue<int>> pq;
        for(auto &x: nums)
            mp[x]++;
        for(auto &x : mp)
            pq[x.second].push(x.first);
        vector<int> v;
        for( auto &x: pq){
            int a = x.first;
            while(!x.second.empty()){
                while(a--)
                v.push_back(x.second.top());
                a = x.first;
                x.second.pop();
            }
        }
        return v;
    }


#Using Comparator Function




class Solution {
private:
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int, int>> pr;
        unordered_map<int, int> mp;
        for(auto i: nums) mp[i]++;
        
        for(auto it: mp){
            pr.push_back(it);
        }
        
        sort(pr.begin(), pr.end(), cmp);
        vector<int> ans;
        
        for(auto v : pr) {
            for(int i=0;i<v.second;i++) {
                ans.push_back(v.first);
            }
        }
        
        
        return ans;
    }
};
