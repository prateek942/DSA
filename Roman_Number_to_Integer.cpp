
class Solution {
  public:
  int value(char roman){
      switch(roman)
      {
          case 'I':return 1;
          case 'V':return 5;
          case 'X':return 10;
          case 'L':return 50;
          case 'C':return 100;
          case 'D':return 500;
          case 'M':return 1000;
      }
  }
    int romanToDecimal(string &str) {
        // code here
        int i, n, ans=0,p=0;
        n=str.length()-1;
        for(i=n; i>=0;i--){
        if(value(str[i])>=p)
        ans=ans+value(str[i]);
        else
        ans=ans-value(str[i]);
        p=value(str[i]);
        
        
    }
    return ans;
    }
};
