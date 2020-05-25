/* https://www.hackerrank.com/challenges/grading/problem
    Grading Students   */

vector<int> gradingStudents(vector<int> grades) {
    int mod;
    for(int i=0;i<grades.size();i++)
    {
        if(grades[i]>35)
        {
            mod=grades[i]%5;
            if(mod >= 3)
                grades[i]=grades[i]+(5-mod);
        }
    }
    return grades;
}
