class Solution {
public:
    bool isnozero(int num){
        while(num>0){
        if(num%10==0){return 0;}
        num/=10;
    }return 1;}
    vector<int> getNoZeroIntegers(int n) { 
        for(int i=1;i<n;i++){
            int j=n-i;
            if(isnozero(i)&&isnozero(j)){return{i,j};}
        }return{};

            }
        
        
    
};