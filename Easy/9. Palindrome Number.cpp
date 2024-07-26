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
*/
