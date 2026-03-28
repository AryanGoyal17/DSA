#include <bits/stdc++.h>
using namespace std;

int main(){

    //pair -- custom datatype present in utility library of c++


    //1-- With same datatype
    pair <int, int> a = {1, 2};

    cout << a.first << " " << a.second << endl;

    //2-- With different datatype
    pair <int, string> student_info;

    student_info.first = 93;
    student_info.second = "Aryan";

    cout << "Roll_no: " << student_info.first << ", Name: " << student_info.second << endl;

    //3-- Nested pairs to hold more than 2 data..

    pair <pair<int, int>, pair<float, string>> b = {{1,2} , {3.14, "PI"}};
    cout << b.first.first << " " << b.first.second << " " << b.second.first << " " << b.second.second << endl;

    //4-- Array holding pairs

    pair<int, string> arr[] = {{1, "a"}, {2, "b"}};
    cout << arr[0].first << " " << arr[1].second << endl; 

    return 0;
}