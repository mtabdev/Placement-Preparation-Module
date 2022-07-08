class Solution {
public:
    int trap(vector<int>& height) {
        
         int l[height.size()];
         int r[height.size()];
         l[0]=height[0];
        for(int i=1;i<height.size();i++){
            l[i]=max(l[i-1],height[i]);
        }
        r[height.size()-1]=height[height.size()-1];
        for(int j=height.size()-2;j>=0;j--){
            r[j]=max(r[j+1],height[j]);
        }
        int sum=0;
         for(int i=0;i<height.size();i++){
            //l[i]=max(l[i-1],height[i]);
             
            sum+=min(l[i],r[i])-height[i]; 
             
        }
        return sum;
        
    }
};