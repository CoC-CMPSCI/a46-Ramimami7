#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;

    cin >> status >> gender >> major;

    // Determine factor based on status, gender, and major using nested if statements
    if (status == "student") {
        factor = 0.2; // base student factor
        if (gender == "female") {
            factor = 1.0;
            if (major == "cs") {
                factor = 3.0;
            }
        } else {
            // male or other
            if (major == "cs") {
                factor = 2.0;
            }
        }
    } else {
        // faculty or other
        if (major == "cs") {
            factor = 0.5;
        }
        // otherwise factor stays at default 0.1
    }

    double finalScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    cout << "Decided Factor: " << factor << ", Final Scholarship Amount: " << finalScholarship << endl;

    return 0;
}