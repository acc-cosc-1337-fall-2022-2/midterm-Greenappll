#include "question4.h"
int main()
{
    int decimal;
    string exit = "";
    do
    {
    cout << "Please input a int value between 1 - 512.";
    cin >> decimal;
    if (1 <= decimal && decimal <= 512){
        cout << "Your hex is " << decimal_to_hex(decimal);
    }
    else{
      cout << "please enter a valid int";
    }
    cout << "would you like to exit the program?";
    cin >> exit;
    }
    while (exit != "y" || exit != "yes");
    return 0;
}