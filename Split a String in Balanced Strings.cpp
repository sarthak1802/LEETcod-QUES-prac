//Split a String in Balanced Strings
class Solution {
public:
    int balancedStringSplit(string s) {
         int count = 0; int m = 0; 

      for(int i=0; i<s.length(); i++){
          if(s[i] == 'R') count++; else count--; 
          if(count == 0) m++; 
         
      }

      return m;  

    }
};
