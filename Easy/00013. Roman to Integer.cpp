class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')n+=1;
            else if(s[i]=='V')n+=5;
            else if(s[i]=='X')n+=10;
            else if(s[i]=='L')n+=50;
            else if(s[i]=='C')n+=100;
            else if(s[i]=='D')n+=500;
            else if(s[i]=='M')n+=1000;
            
           if(s[i+1]=='V'&& s[i]=='I') n-=2;  //4
           if(s[i+1]=='D'&& s[i]=='C') n-=200; //400
           if(s[i+1]=='M'&& s[i]=='C') n-=200; //900
           if(s[i+1]=='L'&& s[i]=='X') n-=20;  //40
           if(s[i+1]=='C'&& s[i]=='X') n-=20;  //90
           if(s[i+1]=='X'&& s[i]=='I') n-=2;   //9
       
        }
        return n;
    }
};
