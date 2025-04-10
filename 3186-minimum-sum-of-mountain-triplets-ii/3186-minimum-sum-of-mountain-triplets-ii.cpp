class Solution {
public:
    int minimumSum(vector<int>& nums) {
       int n= nums.size();
       if(n==0) return -1;
       vector<int>prefix(n,INT_MAX);
       vector<int>suffix(n,INT_MAX);
       
       for(int i=1; i<n; i++){
           prefix[i]= min(prefix[i-1],nums[i-1]);
       }
       
       for(int i=n-2; i>=0; i--){
            suffix[i]= min(suffix[i+1],nums[i+1]);
       }
       
       int min_sum= INT_MAX;
       
       for(int j=1; j<n-1; j++){
           if(prefix[j]<nums[j] && suffix[j]<nums[j]) 
           min_sum=min(min_sum,prefix[j]+nums[j]+suffix[j]);
       }
       
       return min_sum==INT_MAX?-1:min_sum;
    }
};