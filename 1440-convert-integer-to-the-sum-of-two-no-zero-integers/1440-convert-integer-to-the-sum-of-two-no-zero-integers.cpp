class Solution {
    bool check(int num){
        int digit;

        while(num>0){
            digit= num % 10;
            if(digit==0) return false;
            num = num/10; 
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        int a=1, b;
        while(a<n){
            b= n-a;
            if(check(a) && check(b)) return {a,b};
            a++;
        }
        return {a,b};
    }
};