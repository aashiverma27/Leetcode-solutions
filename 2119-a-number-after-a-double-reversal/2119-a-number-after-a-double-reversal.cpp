class Solution {
public:
    bool isSameAfterReversals(int num) {long long i=num;long long ans=0;
        while(i>0){
            ans=ans*10+i%10;
            i/=10;}
            long long reversed2=0;
            while(ans>0){
                reversed2=reversed2*10+ans%10;
                ans/=10;
            }return reversed2==num;
        
        
    }
};