class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1, r=n-1;
            long targ = (long)target-nums[i]-nums[j];
            while(l<r)
            {
                int sum = nums[l]+nums[r];
                if(sum == targ){   
                    res.push_back({nums[i],nums[j],nums[l],nums[r]});
                    int a=nums[l],b=nums[r];
                    while(l<r && nums[l]==a)   l++;
                    while(l<r && nums[r]==b)   r--;
                }
                else if(sum > targ)     r--;
                else    l++;
            }
            while(j+1<n && nums[j]==nums[j+1])  j++;
        }
        while(i+1<n && nums[i]==nums[i+1])  i++;
    }
    return res;
    }
};