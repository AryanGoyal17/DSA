//Insertion in an array -- Method2

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v1 = {1, 2, 3, 4, 5};

    int N = v1.size();

    cout << "Array before insertion: ";
    for(int i = 0; i < N; i++){
        cout << v1[i] << " ";
    }

    cout << endl;

    int elem;
    cout << "Enter the element you want to insert: ";
    cin >> elem;

    int index;
    cout << "Enter the index at which you want to insert the element: ";
    cin >> index;

    v1.insert(v1.begin() + index, elem);

    N = v1.size();

    for(int i = 0; i < N; i++){
        cout << v1[i] << " ";
    }

    //Time complexity -- O(N)
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    //NOTE: Check written notes for space allocation with push back in vectors and for space alloc in arrays... 

    return 0;
}