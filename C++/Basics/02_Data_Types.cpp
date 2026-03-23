#include<bits/stdc++.h> //Includes all C++ libraries..

using namespace std;

int main(){

    //Data types in C++
 
    //A- integer--
    //1-- int(4 bytes)[roughly for 10^-9 to 10^9], long(4 bytes), long long (8 bytes)[roughly for 10^-18 to 10^18]
    //NOTE: usually int and long long will be used in dsa... for integers out of range of int, use long long..

    //B- decimals--
    //1-- float(4 bytes), double(8 bytes)... double is more precise and accurate upto more decimal places..
    // NOTE: Use double in dsa

    //C- char and string
    // char(1byte -- 1 character), string(sequence of characters, after space the rest of the characters are left in the buffer)
    //NOTE: if there is only 1 character, use char instead of string since it takes up less space..

    //D- getline()

    string s1;
    cout << "Enter your name: ";
    cin >> s1;
    cout << "Name: " << s1 << endl;

    cin.ignore(256, '\n'); //Flushing the whole input buffer..
    string s2, s3;
    cout << "Enter your name: ";
    cin >> s2 >> s3;
    cout << "Name: " << s2 << " " << s3 << endl;
    
    string s4;
    cout << "Enter your name: ";
    // cin.ignore(); //Flushes the input buffer(only 1 character removed..)
    cin.ignore(256, '\n');
    getline(cin, s4);
    cout << "Name: " << s4 << endl;

    return 0;
}

