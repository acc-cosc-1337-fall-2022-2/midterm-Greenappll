#include "question2.h"
#include <iostream>
using namespace std;
int main()
{   
    int seconds_since_1970;
    cout << "please input seconds since 1970";
    cin >> seconds_since_1970;
    cout << "your time is" << get_hours(seconds_since_1970) << ":" << get_minutes(seconds_since_1970) << ":" << get_seconds(seconds_since_1970);
    return 0;
}