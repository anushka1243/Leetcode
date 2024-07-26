class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
           return false;
        else
        {
            string s,t;
            s=to_string(x);
            reverse(s.begin(),s.end());
            int a=stoll(s);
            if(a==x)
              return true;
            else
                return false;  
        }   
    }
};

/*
1. if number is negative it can't be palindrome becuse of negative sign
   for eg. -121
2. Convert the number to string 
   reverse the string 
   convert the string to number
   and check it with original number
*/
