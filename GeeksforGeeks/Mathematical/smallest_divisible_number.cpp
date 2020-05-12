/*https://practice.geeksforgeeks.org/problems/smallest-divisible-number/1
    Smallest Divisible Number  */

long long getSmallestDivNum(long long n)
{
    long long i,d,div,rem,lcm,gcd;
    lcm=1;
    for(i=2;i<=n;i++)
    {
        d=lcm;
        div=i;
        rem=d%div;
        while(rem!=0)
        {
            d=div;
            div=rem;
            rem=d%div;
        }
        gcd=div;
        lcm = (lcm*i)/gcd;
    }
    return lcm;
}
