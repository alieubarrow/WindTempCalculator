//Header files
#include <iostream>
#include <cmath>
using namespace std;

int main() {

        int temperature;
        double effectiveTemperature;
        int windSpeed;
        char answer;

        do {

                //Get temperature from user
                cout << "Enter temperature: ";
                cin >> temperature;

                //Get wind speed from user
                cout << "Enter wind speed: ";
                cin >> windSpeed;

                cout << endl;

                //Calculate effective temperature using Osczevskis and Bluesteins formula
                effectiveTemperature = 13.126667 + 0.6215 * temperature - 13.924748 * pow(windSpeed, 0.16) + 0.4875195 * temperature * pow(windSpeed, 0.16);
                effectiveTemperature = round(effectiveTemperature);

                cout << "The Effective Temperature is " << effectiveTemperature << " degree Celsius" << endl;
                cout << endl;

                cout << "Do you wish to calculate again? (Y/N) ";
                cin >> answer;

        } while (answer == 'Y' || answer == 'y');

        return 0;
}
