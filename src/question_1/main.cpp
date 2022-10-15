#include "question1.h"
int main() {
    int n;
    string exit = "";
    do{
        cout << "Enter a integer: ";
        cin >> n;

        if (n < 0 || 10 < n)
            cout << "Error! please input between 1-10";
        else {
            cout << get_factorial_sequence(n);
            }
    cout << "would you like to exit? (if yes, type yes or y)";
    cin >> exit;
        }
        while (exit != "yes" || "y");
    return 0;
}
