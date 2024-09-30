class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int left =0;
    int right =0;
    int zeroCount=0;
    int maxSum=0;
    for(right =0; right<nums.size(); right++){
        if(nums[right]==0){
                zeroCount++;
                
           
        }
        

        while(zeroCount>k){
            if(nums[left]==0){
                zeroCount--;
            }
            left++;
        }

        maxSum=max(right-left+1,maxSum);
    }
    return maxSum;
    }
};