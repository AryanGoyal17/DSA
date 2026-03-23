#include <iostream> // 1. This imports the Input/Output Stream library
using namespace std; // 2. This saves you from typing std:: before every command

int main() {
    int age;

    // 3. OUTPUT: cout (character output) uses the insertion operator <<
    cout << "Enter your age: "; 

    // 4. INPUT: cin (character input) uses the extraction operator >>
    cin >> age; 

    // 5. Chaining outputs together
    cout << "You are " << age << " years old" << endl; // endl moves to the next line

    return 0;
}