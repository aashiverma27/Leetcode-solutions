class Solution {
public:
    int pivotInteger(int n) {
        int total_sum= n*(n+1)/2;
        int x=sqrt(total_sum);
        if(x*x==total_sum){
            return x;
        }return -1;
        
    }
};