// Deletion of an element at a particular index -- Method-2(Using vector)

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v1 = {1, 2, 3, 4, 5};

    int N = v1.size();

    int index;
    cout << "Enter the index of the elem you want to delete: ";
    cin >> index;

    cout << "Array before deletion: ";
    for(int i = 0; i < N; i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    // Erasing the element using the built-in function
    v1.erase(v1.begin() + index);

    // CRITICAL: Update N because the vector physically shrank!
    N = v1.size();

    cout << "Array after deletion: ";
    for(int i = 0; i < N; i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    //Time complexity -- O(N) [Worst/Average case due to shifting]
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input]

    return 0;
}