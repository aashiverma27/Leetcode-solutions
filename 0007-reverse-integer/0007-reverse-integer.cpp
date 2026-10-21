class Solution {
public:
    int reverse(int x) {
        long ans=0;int rem;
        while(x!=0){rem=x%10;
        ans=ans*10+rem;
        x/=10;}
        if (ans<INT_MIN||ans>INT_MAX)
        {return 0;}
        return(int)ans;
    }
        
};