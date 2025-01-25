#include <iostream>
using namespace std;

double calculate(int score_number, string grade)
{
    if (grade == "A+") return score_number * 4.5;
    else if (grade == "A0") return score_number * 4.0;
    else if (grade == "B+") return score_number * 3.5;
    else if (grade == "B0") return score_number * 3.0;
    else if (grade == "C+") return score_number * 2.5;
    else if (grade == "C0") return score_number * 2.0;
    else if (grade == "D+") return score_number * 1.5;
    else if (grade == "D0") return score_number * 1.0;
    else if (grade == "F") return 0.0;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double total_score_number = 0;
    double total_grade = 0;

    string class_name;
    double score_number;
    string grade;
    for (int i=0; i<20; i++) {

        cin >> class_name >> score_number >> grade;

        if (grade == "P") continue; // 만약 P이면 생략

        // P 가 아니면
        total_score_number += score_number; // 학점 더해주기
        total_grade += calculate(score_number, grade); // 등급 계산해서 전체 점수에 더해주기

    }

    cout << total_grade / total_score_number;

    return 0;
}

