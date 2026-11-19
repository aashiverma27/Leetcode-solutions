class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {int count=0;
        for(char &c:jewels){
            for(char &v:stones){
                if(c==v){
                    count++;
                }
            }
        }
        
    return count;}
};