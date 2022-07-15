class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int i = 0, j = 0;
        priority_queue<pair<int,int>> pq;
        while(j < n){
            pq.push({nums[j],j});
            while(pq.top().second <= (j-k))
                pq.pop();
            if((j-i+1) == k){
                ans.push_back(pq.top().first);
                i++;
            }
            j++;
        }
        return ans;
    }
};