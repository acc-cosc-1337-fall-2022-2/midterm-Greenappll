#include "question3.h"

bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double GPA){
    string grade = "";
    if (3.5 <= GPA && GPA <= 4 ){
        grade = "A";
    }
    else if (3 <= GPA && GPA <= 3.49){
        grade = "B";
    }
    else if (2 <= GPA && GPA <= 2.99){
        grade = "C";
    }
    else if (1 <= GPA && GPA <= 1.99){
        grade = "D";
    }
    else if (0 <= GPA && GPA <= .99){
        grade = "F";
    }

    return grade;
}