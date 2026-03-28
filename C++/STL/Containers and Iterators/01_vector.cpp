#include <bits/stdc++.h>
using namespace std;

int main(){

    //Vectors -- Store data in same manner as an array .. but are dynamic i.e; size(no of elements) can be changed after initializing..

//////

    //1-- Initializing vectors
    //2-- Difference between push back and emplace back..
    //3-- Initializing + Assigning vectors
    //4-- Creating a copy of a vector..
    //5-- Accessing elements in a vector..
     
        //M1-- v1[index] or v1.at(index)
        //M2-- By using an iterator

             //In M2-- v.begin(), v.end(), v.rbegin(), v.rend() covered..

    //6-- Printing the vector elements using loops..(total 4 methods are there.. 2 of them are in //6)
    //7-- auto(includes 1 method of //6)
    //8-- for each loop(includes 1 method of //6)
    //9-- Deletion in a vector..
    //10-- Insertion in a vector..
    //11-- Inserting a copy of one vector into another
    //12-- Some important vector functions

//////

    //1-- Initializing..
    vector <int> a; // Creating an empty vector container..

    a.push_back(1); 
    a.emplace_back(2);

    //Now vector becomes -- {1,2}

    vector <string> b;

    b.push_back("Hi");
    b.emplace_back("My name is Aryan");

    vector <char> c; //Initializing a char vector


    //2-- Difference between push back and emplace back..

    vector <pair<int, float>> d;

    d.push_back({1,1.1});
    d.emplace_back(2, 2.2); //emplace_back automatically converts 2,2.2 to a pair..

    //3-- Initializing + Assigning..

    vector <int> v1(5, 100); // {100, 100, 100, 100, 100} = v1
    vector <int> v2(5); // {0, 0, 0, 0, 0} = v2

    //NOTE:
    v1.push_back(20); // v1 = {100, 100, 100, 100, 100, 20} .. This shows that a vector is dynamic unlike an array..

    //4-- Creating a copy of a vector..

    vector <int> v3(v2); //v3 = {0, 0, 0, 0, 0} = copy of v2

    //5-- Accessing elements in a vector..
     
    //M1-- v1[index] or v1.at(index)
    //M2-- By using an iterator

    //M1
    cout << v1[0] << " " << v1.at(0) << endl; 

    //NOTE: To print the last element use v.back()..

    cout << v1.back() << endl;

    //M2-- Iterator
    
    vector <int> v = {10,20,30,40};

    vector <int> :: iterator i1 = v.begin(); //i1 is an iterator(pointer) pointing at memory address of 10..
                                             //i1++ points at 20.. and so on

    vector <int> :: iterator i2 = v.end(); // i2 points at block just right of 40..

    //Similarly we have --

    //1-- v.rend(); first reverse the vector and iterator points at end... iterator points left of 10..
    //2-- v.rbegin(); first reverse the vector and iterator points at begin .. i.e; at 40..

    //NOTE: on incrementing for reverse cases pointer moves in left direction instead of right..

    //6-- Printing the vector elements using loops..

    //M1-- 
    for(int i = 0; i < 4; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    //M2--

    for(vector <int> :: iterator i3 = v.begin() ; i3 != v.end(); i3++){
        cout << *(i3) << " ";
    }
    cout << endl;

    //7-- auto (Automatically assigns the data type on the basis of the data)

    //Example -- auto a = 5; ... a automatically assigned to be of integer data type..

    for(auto i4 = v.begin(); i4 != v.end(); i4++){ // i4 automatically assigned as a vector iterator
        cout << *(i4) << " ";
    }

    cout << endl;

    //8-- For each loop..    

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;


    //9-- Deletion in a vector..
    
    vector <int> v0 = {10,20,30,40,50,60,70};

    v0.erase(v0.begin() + 3); // v0 becomes {10, 20, 30, 50, 60, 70}
    auto v_copy = v0.erase(v0.begin(), v0.end() - 2); //second argument = not inclusive! // v0 = {60, 70} 

    //NOTE:
    //In line 106, v_copy is not a vector, its an iterator!! as v0.erase() returns an iterator...
    // v0.insert(v0.begin(), v_copy.begin(), v_copy.end()); //This results in error..

    //10-- Insertion in a vector..

    v0.insert(v0.begin() + 1, 300); // v0 = {60, 300, 70}
    v0.insert(v0.begin() + 2, 2, 50); // v0 = {60, 300, 50, 50, 70}




    //11-- Inserting a copy(some part) of one vector into another.. for full copy write vect.end() instead of vect.end() - 1..

    vector <int> vect(3, 67);

    v0.insert(v0.begin() + 1, vect.begin(), vect.end() - 1); //v0 = {60, 67, 67, 300, 50, 50, 70}

     //12-- Some important vector functions --

     //A--
     cout << v0.size() << endl;

     //B-- pop_back() .. removes the last element

     v0.pop_back();

     for(int i = 0; i < v0.size(); i++){
        cout << v0[i] << " ";
     }

     //C-- v1.swap(v2) ... vectors v1 and v2 get swapped..

     //D--
     v0.clear(); //v0 becomes an empty vector

     for(int i = 0; i < v0.size(); i++){
        cout << v0[i] << " ";
     }
     cout << endl;

     //E-- 
     cout << v0.empty() << endl; //Returns true or 1 if vector empty otherwise false or 0..

     v0.push_back(1);

     cout << v0.empty();

    return 0;
}