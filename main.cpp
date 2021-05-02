#include <iostream>
#include "complexType.h"
#include <iomanip>

using namespace std;

int main() {
    system("Color 2");
    int choice = 1;
    int run = 0;
    while (choice != 0) {
        int option;
        if (run >= 1) {
            cout << "Welcome Back!" << endl;
        } else {
            cout << "Welcome to the imaginary number calculator!" << endl;
            run++;
        }

        cout << setfill('*') << setw(80) << "-" << endl;
        cout << " Please select an operation " << endl;
        cout << " Press 1 for + " << endl;
        cout << " Press 2 for - " << endl;
        cout << " Press 3 for * " << endl;
        cout << " Press 4 to find conjugate " << endl;
        cout << " Press 5 for absolute value " << endl;
        cout << " Press 0 to quit" << endl;
        cout << " Press 9 to run a demonstration of the equality operation" << endl;
        cout << " ---> ";
        cin >> option;
        cout << endl;

        switch (option) {
            {
                case 0:
                {
                    cout << "Thank you for using the imaginary calculator! " << endl;
                    choice = 0;
                    break;
                }
                case 1: {
                    complexType temp1;
                    complexType temp2;

                    cout << "Enter real and imaginary of first number: ";
                    cin >> temp1;
                    cout << endl;

                    cout << "Enter real and imaginary of second number: ";
                    cin >> temp2;
                    cout << endl;

                    cout << temp1 + temp2 << endl;
                    break;
                }

                case 2: {
                    complexType temp1;
                    complexType temp2;

                    cout << "Enter real and imaginary of first number: ";
                    cin >> temp1;
                    cout << endl;

                    cout << "Enter real and imaginary of second number: ";
                    cin >> temp2;
                    cout << endl;

                    cout << temp1 - temp2 << endl;
                    break;
                }

                case 3: {
                    complexType temp1;
                    complexType temp2;

                    cout << "Enter real and imaginary of first number: ";
                    cin >> temp1;
                    cout << endl;

                    cout << "Enter real and imaginary of second number: ";
                    cin >> temp2;
                    cout << endl;

                    cout << temp1 * temp2 << endl;
                    break;
                }

                case 4: {
                    complexType temp1;

                    cout << "Enter real and imaginary number: ";
                    cin >> temp1;
                    cout << endl;
                    cout << ~temp1 << endl;

                    break;
                }

                case 5: {
                    complexType temp1;

                    cout << "Enter real and imaginary number: ";
                    cin >> temp1;
                    cout << endl;
                    cout << !temp1 << endl;

                    break;
                }
                case 9:
                {
                    complexType temp1;
                    complexType temp2;
                    cout << " Setting value of complexTemp1 " << endl;
                    temp1.setComplex(2.0, 2.0);
                    cout << "The Value of complexTemp1 is: " << temp1 << endl;


                    cout << " Setting value of complexTemp2 " << endl;
                    temp2.setComplex(2.0, 2.0);
                    cout << "The Value of complexTemp2 is: " << temp1 << endl;

                    cout << "Running equality check on temp1 and temp2" << endl;
                    temp1 == temp2;
                    cout << endl;

                    cout << "Creating 3rd temp of unequal value" << endl;
                    complexType temp3;
                    temp3.setComplex(5.2, 3.7);
                    cout << temp3 << endl;
                    cout << "Comparing temp1 to temp3" << endl;
                    temp1 == temp3;
                    cout << endl;
                    break;
                }


            };


        }



    }
    return 0;
}


