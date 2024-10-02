//Partial code left by programmer

/*
physicsProblem(problem8).cpp (project file)

Abraham Avila   2/22/2022

    This program calculates the trajectory of a bouncing ball when
    thrown with a certain initial horizontal velocity from a certain height.
    The program determines where the ball hits the ground, printing out
    the horizontal distance travelled from the starting point at each bounce.
    It is assumed that there is a fixed proportional loss of velocity at each
    bounce (initially set to 10%).  This is not physically accurate but the
    problem is just a programming exercise.  The bouncing stops after the
    ball passes 1000 meters, after 20 bounces, or when the ball falls
    in a one metre diameter hole at 500m.

    The program will repeatedly request an initial velocity until 0 is entered.

    Written by S Antoun and a CS1 GOD: Abraham Avila \^0^/

Academic Integrity as per syllabus
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const float bounce_mod = 0.9;    // proportion change in velocity at bounce

int main(void)
{
    float
        height,                  // initial height from the ground
        vinit,                   // initial horizontal velocity
        vhoriz,                  // current horizontal velocity
        vvert,                   // current vertical velocity
        time,                    // time duration between bounces
        distance,                // total horizontal distance travelled
        bounce_distance;         // horizontal distance for current bounce
    int
        bounce_number;   // gravitational constant

    const float g = 9.802;

/*
    input the initial velocity
*/

    cout << "Enter the height: ";
    cin >> height;

/*
    loop for varying initial horizontal velocities
*/

    cout << "Enter the initial velocity (0 to finish) ";
    cin >> vinit;

    cout << setprecision(2) << fixed;

    while (vinit > 0)
    {
/*
        determine where the first bounce occurs
*/
//      This is where you should enter the time duration for the first bounce
        time = sqrt((2*height)/g);
        vhoriz = vinit;
        vvert = vinit;
        distance = vinit*time;
        bounce_number = 0;

    while ((distance < 1000 && bounce_number < 20))
    {
        if ((distance > 499.50) && (distance < 500.5))
            {
                cout << "Stopped by landing in one metre hole at 500 metres." << endl;
                cout << "\nEnter the initial velocity (0 to finish): ";
                cin >> vinit;
                    break;
            }
        else
        bounce_distance = (vhoriz*vvert)/g;
        bounce_number++;
        distance += bounce_distance;
        cout << "Bounce " << bounce_number << ": distance = " << distance << endl;

        vhoriz *= bounce_mod;
        vvert *= bounce_mod;
    }

        if (bounce_number >= 20)
        {
            cout << "Stopped after 20 bounces." << endl;
            cout << "\nEnter the initial velocity (0 to finish): ";
            cin >> vinit;
        }

        else if (distance > 1000)
        {
            cout << "Stopped after reaching 1000 metres." << endl;
            cout << "\nEnter the initial velocity (0 to finish): ";
            cin >> vinit;
        }
    }
    return 0;
}
