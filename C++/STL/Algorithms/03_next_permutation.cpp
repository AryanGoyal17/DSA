#include <bits/stdc++.h>
using namespace std;

int main(){

    //This is used to print all the possible permutations of a number..

    //NOTE: The number must be first typecasted to a string..!! and the string should be sorted in ascending order..

    int num1 = 123;

    string str_num1 = to_string(num1); //typecasting number to string

    do{
        cout << str_num1 << endl;
    }while(next_permutation(str_num1.begin(), str_num1.end()));

    cout << endl;
    //The permutations are printed in a dictionary order... so always the sort the string !!

    int num2 = 231;

    string str_num2 = to_string(num2); //typecasting number to string

    do{
        cout << str_num2 << endl;
    }while(next_permutation(str_num2.begin(), str_num2.end())); //This gives incorrect answer...

    cout << endl;
    //Correction --

    sort(str_num2.begin(), str_num2.end());

    do{
        cout << str_num2 << endl;
    }while(next_permutation(str_num2.begin(), str_num2.end()));



    return 0;
}