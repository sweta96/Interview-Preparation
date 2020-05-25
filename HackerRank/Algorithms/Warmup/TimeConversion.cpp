/* https://www.hackerrank.com/challenges/time-conversion/problem
      Time Conversion   */

string timeConversion(string s) {
    string hh,time;
    int h;
    hh=s.substr(0,2);
    if(s[8]=='A')
    {
        if(stoi(hh)==12)
            hh="00";
    }
    if(s[8]=='P')
    {
        if(stoi(hh)!=12)
        {
            h=stoi(hh)+12;
            hh=to_string(h);
        }
    }
    time=hh+s.substr(2,6);
    return time;
}
