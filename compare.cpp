// compare two numbers and check which one is greater or smaller in the user input numbers.....

# include <iostream>
using namespace std;

// main function starts here.....

int main() {
    int num1, num2, num3;    // this is a local variable 

    cout << " Enter The Value Of num1: ";
    cin >> num1;

    cout << " Enter The Value of num2: ";
    cin >> num2;

    cout << " Enter The Value of num 3: ";
    cin >> num3;


//  the if else condition check to the number is greater or smaller...


    if (num1 > num2 && num1 > num3) {
        cout << " The number " << num1 << "is the largest number" << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << " The number " << num2 << " is the the largest number" << endl;
    } else if ( num1 == num2 && num1 == num3) {
        cout << " All the number are same or equal " << endl;
    } else {
        cout << " The number " << num3 << " is the largest number " << endl;
    }
    return 0;

    }