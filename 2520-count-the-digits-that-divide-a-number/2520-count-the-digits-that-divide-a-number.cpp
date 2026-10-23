class Solution {
public:
    int countDigits(int num) {
        int rem=0;
        int ans=0;
        int temp=num;
        while (num>0){
            rem=num%10;
            if (temp%rem==0){
                 ans=ans+1;}
           num=num/10; }
            return ans;

        
        
    }
};