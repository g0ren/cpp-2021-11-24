#include <iostream>
using namespace std;

int main()
{
    const int workday = 8*3600; // Number of seconds in a full workday
    int totalseconds {0};
    cout << "Enter the number of seconds since the beginning of the workday" << endl;
    cin >> totalseconds;
    totalseconds %= workday; // In case someone enters more than 8 hours worth of seconds
                             // We assume that one's overtime carries over to the next day
                             // If only that was always the case…
    int seconds = workday - totalseconds;
    int hours = seconds / 3600;
    cout << "You still have to work about " << hours << " hours this workday" << endl;
    
    return 0;
}
