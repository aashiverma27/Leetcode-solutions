class Solution {
public:
    int numberOfMatches(int n) {int matches_played=0;
    if(n<=1){
        return 0;
    }
        while (n>=2){
            
             if(n%2==0){
            matches_played=matches_played+n/2;
            n=n/2;}
            else if(n%2!=0){
                matches_played=matches_played+(n-1)/2;
                n=(n-1)/2+1;
            }
        }return matches_played;
        
    }
};