//program to convert characters of a string to uppercase
#include <iostream> // Including input-output stream header file
#include <algorithm> // Including algorithm header for transform function
using namespace std; // Using the standard namespace

int main() {
    string text; // Declaring a string variable named 'text' to store user input

    getline(cin, text); // Getting a line of text input from the user

    // Using transform function to convert each character of the string to uppercase
    transform(text.begin(), text.end(), text.begin(), ::toupper);

    // Displaying the converted string in uppercase
    cout << text << endl;

    return 0; // Indicating successful completion of the program
}
