class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set <char> a;
        for(char i:sentence){
            a.insert(i);
        }return size(a)==26;
        
    }
};