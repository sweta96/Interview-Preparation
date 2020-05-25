/* https://www.hackerrank.com/challenges/smart-number/problem?h_r=next-challenge&h_v=zen
      Smart Number   */

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(val*val == num)
        return true;
    return false;
}
