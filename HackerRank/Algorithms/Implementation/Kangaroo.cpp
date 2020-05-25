/* https://www.hackerrank.com/challenges/kangaroo/problem
    Kangaroo  */

string kangaroo(int x1, int v1, int x2, int v2) {
    if(x1>x2)
    {
        if(v1>=v2)
            return "NO";
    }
    else if(x2>x1)
    {
        if(v2>=v1)
            return "NO";
    }
    if(x1==x2)
        return "YES";
    else
    {
        x1+=v1;
        x2+=v2;
        return kangaroo(x1,v1,x2,v2);
    }
    return "NO";
}
