class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem=0;
        int ans=1;
        int Sum=0;
        while (n!=0){
            rem=n%10;
            ans=ans*rem;
            Sum=Sum+rem;
            n=n/10;}
        
        return ans-Sum;
        
    }
};