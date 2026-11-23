class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]!=0)
            {swap(nums[i],nums[j]);
            j++;}
        }
        
        
    }
};