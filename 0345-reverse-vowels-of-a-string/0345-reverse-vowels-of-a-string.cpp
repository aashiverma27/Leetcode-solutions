class Solution {
public:bool isvowel(char c){
    c=tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}
    string reverseVowels(string s) {
        
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!isvowel(s[i])){
                i++;}
                else if(!isvowel(s[j])){j--;}
                else{
                swap(s[i],s[j]);
                i++;
                j--;}
            }
            
        return s;

    }      
    
};