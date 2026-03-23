#include <bits/stdc++.h>
using namespace std;

int main(){


//If-else statements

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "You are an adult" << endl;
    }
    else if(age > 0){
        cout << "You are NOT an adult" << endl;
    }
    else{
        cout << "Invalid age entered" << endl;
    }

//Switches

// Q-- Take the day number and print the corresponding day

int day_no;

cout << "Enter the day number: ";
cin >> day_no;

switch(day_no){

    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid day_no entered" << endl;

}

    return 0;
}