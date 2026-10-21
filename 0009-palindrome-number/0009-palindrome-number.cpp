class Solution {
public:
    bool isPalindrome(int x) {int y =x; long long ans=0;
    if(x<0){return 0;}
        while(x>0){int rem=x%10;
        ans=ans*10+rem;
        x/=10;
        }return y==ans;}

    
};