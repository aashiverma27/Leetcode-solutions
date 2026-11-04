class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0;i*i<=c;i++){
            long long target=c-i*i;
            long long j=sqrt(target);
            if(j*j==target){return 1;}}return 0;
            
        
    }
};