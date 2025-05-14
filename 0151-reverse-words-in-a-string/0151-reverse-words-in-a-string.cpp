class Solution {
public:
    string reverseWords(string s) {
       int n= s.length();

       reverse(begin(s),end(s));

       int start,end;
       int i=0,j=0;

       while(i<n){
        while(i<n && s[i]==' ')i++;
        if (i >= n) break;
        start=j;
        while(i<n && s[i]!=' '){
            s[j++] = s[i++];
        }
        end=j-1;
        reverse(begin(s)+start, begin(s)+end+1);
        s[j++]=' ';
       }
       return s.substr(0,end+1);
    } 
};