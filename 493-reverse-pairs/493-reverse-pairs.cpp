class Solution {
public:
    int merge(int low,int mid,int high, vector<int> &nums){
    int res = 0;

        int j = mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i] > 2LL * nums[j]){
                j++;
            }
            res += (j-(mid+1));
        }

        vector<int> temp;

        int left = low, right = mid+1;

        while(left <= mid && right <= high){

            if(nums[left] <= nums[right]){
                temp.push_back(nums[left++]);
            }else{
                temp.push_back(nums[right++]);
            }
        }

        while(left <= mid){
            temp.push_back(nums[left++]);
        }

        while(right <= high){
            temp.push_back(nums[right++]);
        }

        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }
        return res;
}


int mergeSort(int l,int h,vector<int> &arr){
    
    if(l>=h)return 0;
    
    int mid=(l+h)/2;
    int inv=mergeSort(l,mid,arr);
    inv+=mergeSort(mid+1,h,arr);
    inv+=merge(l,mid,h,arr);
    
    return inv;
    
}

    int reversePairs(vector<int>& nums) {
         return mergeSort(0,nums.size()-1,nums);
    }
};