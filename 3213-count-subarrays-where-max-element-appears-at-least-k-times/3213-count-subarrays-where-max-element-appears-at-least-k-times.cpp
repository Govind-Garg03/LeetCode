class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long cnt = 0;
        long long ans = 0;

        int maxi= *max_element(begin(nums), end(nums));
        int n= nums.size();
        int left=0, right=0;

        while(right < n){

            if (nums[right]== maxi){
                cnt++;
            }

            while(cnt==k){
              ans+= n-right;
              if(nums[left]==maxi){
               cnt--;
              }
              left++;
            }
            right++;
        }
        return ans;
    }
};