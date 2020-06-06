/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/794/
    Generate Parentheses  */

class Solution {
public:
    void Generate(vector<string>& result, int n, string current,int open,int close){
	if(current.size()==(n*2))
	{
		result.push_back(current);
		return;
	}
	for(int i=0;i<2;i++)
	{
		if(i%2==0 && open<n)
			Generate(result,n,current+"(",open+1,close);	
		if(i%2==1 && (close<open) && close<n)
			Generate(result,n,current+")",open,close+1);
	}
}
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        if(n==0)
	        return result;
        Generate(result,n,"",0,0);
        return result;
    }
};
