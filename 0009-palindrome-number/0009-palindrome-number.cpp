class Solution {
public:
    bool isPalindrome(int x){int num=x;int rem=0;long long ans=0;
        while(x>0){
            rem=x%10;
            ans=ans*10+rem;
            x=x/10;

        }return num==ans;
        
    }
};