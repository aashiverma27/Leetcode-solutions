class Solution {
public:
    int addDigits(int num) {int a=num; int ans=0;
    while(a>0){
        ans=ans+(a%10);
        a/=10;}
        if (ans<10){
        return ans;}
        else
        {return addDigits(ans);}
    
        
    }
        
    
};