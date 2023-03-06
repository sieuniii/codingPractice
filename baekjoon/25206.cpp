#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    string subject[20];
    double score[20];
    string grade[20];
    double CalSum = 0;
    double GradeSum = 0;
    double result;

    for (int i = 0; i < 20; i++)
    {
        cin >> subject[i] >> score[i] >> grade[i];
        if(grade[i]!="P")
            GradeSum += score[i];
        //cout<<GradeSum<<endl;
    }

    for (int i = 0; i < 20; i++)
    {
        if (grade[i]== "A+")
            CalSum += 4.5 * score[i];
        else if (grade[i]== "A0")
            CalSum += 4.0 * score[i];
        else if (grade[i]== "B+")
            CalSum += 3.5 * score[i];
        else if (grade[i]== "B0")
            CalSum += 3.0 * score[i];
        else if (grade[i]== "C+")
            CalSum += 2.5 * score[i];
        else if (grade[i]== "C0")
            CalSum += 2.0 * score[i];
        else if (grade[i]== "D+")
            CalSum += 1.5 * score[i];
        else if (grade[i]== "D0")
            CalSum += 1.0 * score[i];
        else if (grade[i]== "F")
            CalSum += 0 * score[i];
        else
            continue;
    }
    cout<<fixed << setprecision(6)<<CalSum/GradeSum;
}