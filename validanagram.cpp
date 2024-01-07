class Solution {
public:
    bool isAnagram(string s, string t) {
        int i=0;
        if(s.length()!=t.length())  //checks if size of string are equal or not
        {
            return false;   //return false if no
        }
        while(i<s.length())  //works until i is less than size of main string
        {
            if(s[i]==t[0])  //checks if any word of 1st string is equal to first word of 2nd string
            {
                s.erase(i,1);  //if yes then remove that letter
                t.erase(0,1);  //from both of the strings
                i=0;           // and reset i to 0 again
            }
            else
            {
                i++;   //else increase i
            }
        }

        return s.length()==0?true:false;   //return true if string becomes empty which means all letters matched
                                           //and removed
    }
};