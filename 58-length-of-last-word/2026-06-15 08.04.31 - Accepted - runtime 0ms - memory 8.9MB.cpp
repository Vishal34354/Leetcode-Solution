class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int count=0;
        while(n+1){
            if(count && s[n]==' ')
            break;
          if(s[n]==' ')
           {
            n--;
            continue;
           }
          else {
            count++;
            n--;
          } 
        }
        return count;
    }
};