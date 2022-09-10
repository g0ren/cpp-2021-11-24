#include <iostream>
using namespace std;

int main()
{
    const int day = 86400; // Number of seconds in a full day
    int totalseconds {0};
    cout << "Enter the number of seconds since the beginning of the day" << endl;
    cin >> totalseconds;
    totalseconds %= day; // In case someone enters more than 24 hours worth of seconds
    int hours = totalseconds / 3600;
    int minutes = totalseconds % 3600 / 60;
    int seconds = totalseconds % 60;
    cout << "Current time is " << hours << ":" << minutes << ":" << seconds << endl;
    
    int seconds_to_midnight = day - totalseconds;
    hours = seconds_to_midnight / 3600;
    minutes = seconds_to_midnight % 3600 / 60;
    seconds = seconds_to_midnight % 60;
    cout << "It is " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds until midnight" << endl;
    

    return 0;
}
