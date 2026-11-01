class Solution {
public:
    bool isFascinating(int n) { 
        string(num)=to_string(n)+to_string(2*n)+to_string(3*n);
        ranges::sort(num);
        return num=="123456789";
        
    }
};