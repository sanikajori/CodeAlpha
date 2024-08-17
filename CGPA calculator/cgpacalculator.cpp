#include <iostream>
using namespace std;
int main()
{
    int num_of_courses;
    double grade,total_point=0,total_credits=0;

    cout << "Enter the number of Courses:";
    cin>>num_of_courses;

    for(int i=1;i<=num_of_courses;i++)
    {
        int credit_hours;
        double grade_points;

        cout << "Enter the Credit hours for Course:" <<i<<":";
        cin >> credit_hours;

        cout << "Enter the grade points of the Course:"<<i<<":";
        cin >> grade_points;

        total_point +=(grade_points * credit_hours);
        total_credits+= credit_hours;
    }

    double CGPA=total_point/ total_credits;
    cout << "Your CGPA is:"<<CGPA<<endl;

      return 0;

}
