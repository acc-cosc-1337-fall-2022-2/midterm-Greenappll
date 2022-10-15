#include "question3.h"
int main()
{
    double GPA;
    string exit = "";
    do
    {
        cout << "please input your GPA";
        cin >> GPA;
        if (0 < GPA && GPA < 4){
            cout << gpa_to_letter_grade(GPA) << " is your letter grade";
        }
        else if(0 <! GPA && GPA <! 4){
            cout << "please input a valid number, between 0-4, decimals are fine.";
        }
        cout << "would you like to exit the program?";
        cin >> exit;
    } while (exit != "y" || exit != "yes");
    
    
    return 0;
}