class Solution {
public:
    bool isValid(string x) {
       stack<char>s;
        for(int i=0;i<x.length();i++)
        {
            if(!s.empty() && x[i]==')' && s.top()=='(')
              s.pop();
            else if(!s.empty() && x[i]==']' && s.top()=='[')
              s.pop();  
            else if(!s.empty() && x[i]=='}' && s.top()=='{')
              s.pop();   
            else
              s.push(x[i]);
        }
        return s.empty(); 
    }
};
