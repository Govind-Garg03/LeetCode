class Solution {
public:
    string largestOddNumber(string s) {
        int n= s.size(), end= n-1;
        while(end>=0 && (s[end]-'0')%2 == 0){
            end--;
        }
        return s.substr(0,end+1);
    }
};