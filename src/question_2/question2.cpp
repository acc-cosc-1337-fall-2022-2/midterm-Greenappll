#include "question2.h"
int extraTime, hours, minutes, seconds;

bool test_config()
{
    return true;
}

int get_hours(int seconds_since_1970){
    int timedif = seconds_since_1970 % (24 * 60 * 60);
    hours = timedif / 3600;
    return hours;
}

int get_minutes(int seconds_since_1970){
    int timedif = seconds_since_1970 % (24 * 60 * 60);
    minutes = (timedif % 3600) / 60;
    return minutes;
}

int get_seconds(int seconds_since_1970){
    int timedif = seconds_since_1970 % (24 * 60 * 60);
    seconds = (timedif % 3600) % 60;
    return seconds;
}