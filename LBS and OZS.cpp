
#include <iostream>


int main()
{
    using namespace std;
    double UserOZinput;
    int howmanypounds = 0;
    double MathOZinputVAR;
    double poundsdecimal;

    cout << "Hello!\n"
         << "Welcome to the Ounce Conversion Program!\n";
    
    do {
        cout << "Please enter the value of ounces you want to convert: ";
        cin >> UserOZinput;

        if (cin.fail()) {
            cin.clear(); cin.ignore(512, '\n');
            cout << "\nThe character you entered is invalid, please try again...\n";
        } 
        else if (UserOZinput <= 0) {
            cout << "\nThat is not a positive number, please try again...\n";
        }
        else;

    } while (UserOZinput <= 0);

    cout << "\nYou enetered " << UserOZinput << "...\n\n"
         << "Converting...\n\n";

    poundsdecimal = (UserOZinput / 16);
    MathOZinputVAR = (UserOZinput);


    while (MathOZinputVAR >= 16) {
        howmanypounds += 1;
        MathOZinputVAR -= 16;
        if (MathOZinputVAR <= 16)
        {
            break;
        }
    }
    cout << UserOZinput << " oz is the equivalent to " << howmanypounds << " lb(s) and " << MathOZinputVAR << " oz.\n";
    cout << UserOZinput << " oz is the equivalent to " << poundsdecimal << " lb(s).\n\n";

    cout << "Thank you for using the OCP!";

    return 0;
}
