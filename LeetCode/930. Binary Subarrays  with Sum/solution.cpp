class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int right =0;
        int left =0;
        int sum =0;
        int answer=0;
        int prefixZeros=0;

        while(right<nums.size()){
            sum+=nums[right];
            
            while(left<right && (nums[left]==0 || sum>goal)){
                if(nums[left]==1){
                    prefixZeros=0;
                }else{
                    prefixZeros++;
                }
                sum-=nums[left];
                left++;
            }

            if(sum==goal){
                answer +=1+prefixZeros;
            }

                        right++;

        }
        return answer;
    }
    
};