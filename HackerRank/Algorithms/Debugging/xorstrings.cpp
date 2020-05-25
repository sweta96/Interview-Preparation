/* https://www.hackerrank.com/challenges/strings-xor/problem
    XOR Strings   */

string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i])
            res = res+"0";
        else
            res = res+"1";
    }

    return res;
}
