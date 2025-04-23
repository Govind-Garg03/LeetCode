class Solution {
public:
    int sum(int n){
        int digitSum=0;
        while(n>0){
            digitSum+= n%10;
            n= n/10;
        }
        return digitSum;
    }

    int countLargestGroup(int n) {
        unordered_map<int,int>mp ;
        for(int i=1; i<=n; i++){
            int s= sum(i);
            if(mp.find(s)!=mp.end()){
                mp[s]++;
            }
            else mp[s]=1;
        }
        
        int maxSize = 0;
        for (auto &p : mp) {
            maxSize = max(maxSize, p.second);
        }
       int count = 0;
        for (auto &p : mp) {
            if (p.second == maxSize) count++;
        }

        return count;
    }
};