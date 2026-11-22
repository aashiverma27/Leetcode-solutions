class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=size(nums)-1;
        while(i<j){
            if(nums[i]%2==0){
                i++;
            }else if(nums[j]%2!=0){
                j--;
            }else{
                nums[i]=nums[i]+nums[j];
                nums[j]=nums[i]-nums[j];
                nums[i]=nums[i]-nums[j];
            }
        }return nums;
        
    }
};