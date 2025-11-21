#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int achiver_student_id = 4;
        int achiver_max_marks = -1;
        char achiver_student_name[101];
        char achiver_student_section[2];

        for (int i = 0; i < 3; i++)
        {
            int id, total_marks;
            char name[101], section[2];

            cin >> id >> name >> section >> total_marks;

            bool is_new_max = (total_marks > achiver_max_marks);
            bool is_tie_achiver = (total_marks == achiver_max_marks && id < achiver_student_id);

            if (is_new_max || is_tie_achiver)
            {
                achiver_student_id = id;
                achiver_max_marks = total_marks;
                strcpy(achiver_student_name, name);
                strcpy(achiver_student_section, section);
            }
        }
        cout << achiver_student_id << " " << achiver_student_name << " " << achiver_student_section << " " << achiver_max_marks << endl;
    }

    return 0;
}