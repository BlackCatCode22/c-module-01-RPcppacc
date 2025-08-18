// Made by Roman Pena on 8/8/25 - CIT-66
/* This is a test
it is a very nice test
Thank you for the lesson
 */
// this program will get three im]nts from the user and output the largest of the three
// https://www.w3schools.com/cpp/cpp_user_input.asp

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my  largest of three program \n";

    int num1;
    int num2;
    int num3;


//inttialize

num1 = 0;
    num2 = 0;
    num3 = 0;
    // get three ints from user

    //get num1
    cout << "Choose a Number: ";
    cin >> num1; //user input
    cout << "\n you entered " << num1 << " for num1";

 //get num2

cout << "Choose a Number: ";
    cin >> num2;
    cout << "\n you entered " << num2 << " for num2";



 //get num3

    cout << "Choosa Number: ";
    cin >> num3;
    cout << "\n you entered " << num3 << " for num3";

if (num1 > num2) {
    cout << num1 << " is greater than num2";

}
else {
    cout << num2 << " is greater than" << num1;
}

    return 0;
}


