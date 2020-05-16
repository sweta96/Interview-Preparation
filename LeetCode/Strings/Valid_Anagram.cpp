/*https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/882/
    Valid Anagram   */

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> s_freq;
        map<char,int> t_freq;
        int s_len=s.size();
        int t_len=t.size();
        if(s_len!=t_len)
            return false;
        for(int i=0;i<s_len;i++)
        {
            s_freq[s[i]]++;
            t_freq[t[i]]++;
        }
        char key;
        for(auto a: s_freq)
        {
            key=a.first;
            if(s_freq[key]!=t_freq[key])
                return false;
        }
        return true;
    }
};
