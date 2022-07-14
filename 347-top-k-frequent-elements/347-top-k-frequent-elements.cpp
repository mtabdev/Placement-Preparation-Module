class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        priority_queue<pair<int,int>>pqp;
        for(int x:nums){
            um[x]++;
        }
        for(auto it:um){
            pqp.push({it.second,it.first});
        }
         vector<int>ans;
        while(k--){
            pair<int,int>pp=pqp.top();
            pqp.pop();
            ans.push_back(pp.second);
        }
        return ans;
    }
};