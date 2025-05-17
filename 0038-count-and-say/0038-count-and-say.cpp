class Solution
{
  public:
    string countAndSay(int n) {
      if(n==1) return "1";

      string prev= countAndSay(n-1);
      int len= prev.length();

      int cnt=1;
      string res="";

      for(int i=1; i<len; i++){
        if(prev[i]==prev[i-1]) cnt++;
        else{
          res+= '0'+cnt;
          res+= prev[i-1];
          cnt=1;
        }
      }

      res+= '0'+cnt;
      res+=  prev[len-1];
      
    return res;
    }   
};