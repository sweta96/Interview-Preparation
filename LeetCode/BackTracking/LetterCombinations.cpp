/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/793/
    Letter Combinations of a Phone Number  */

class Solution {
public:
    void Combinations(vector<string>& result,string current,string digits,int index,string mapping[])
    {
        if(digits.size()==index)
        {
            result.push_back(current);
            return;
        }
        string a=mapping[(int)digits[index]-48];
        for(int i=0;i<a.size();i++)
        {
            Combinations(result,current+a[i],digits,index+1,mapping);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size()==0 || digits == "0" || digits == "1")
            return result;
        string mapping[] = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        Combinations(result,"",digits,0,mapping);
        return result;
    }
};
