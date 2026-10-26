class Solution {
public:
    bool isPowerOfThree(int n) {long long i=0;
        while (i<n){
            if(n<=0){
                return 0;
            }else if(pow(3,i)==n){return 1;}
            else if(pow(3,i)>n){break;}
            
i++;
                
        }return 0;
            }
        
        
    
};