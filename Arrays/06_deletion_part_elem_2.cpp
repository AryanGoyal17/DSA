// Find index of element to be deleted..
// If element is present in the array, delete it .. else print - Element not found

// In case of multiple occurences, Deleting all occurences (special case) {optimal approach using 2 pointers}

#include <bits/stdc++.h>
using namespace std;

void deletion(int arr[], int &N, int elem){

    int writer = 0;
    bool found = false;

    for(int reader = 0; reader < N; reader++){

        if(arr[reader] == elem){
            found = true;
        }
        else{
            arr[writer] = arr[reader];
            writer++;
        }
    }

    N = writer;

    if(!found){
        cout << "Element not present in the array" << endl;
    }
    else{
        cout << "All occurences of given element deleted successfully" << endl;
    }
}

int main(){

    int arr[] = {1, 2, 5, 1, 3, 2, 5, 7, 2};
    int N = sizeof(arr) / sizeof(arr[0]);

    int elem;
    cout << "Enter the element whose all occurences you want to delete: ";
    cin >> elem;

    cout << "Array before deletion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    deletion(arr, N, elem);

    cout << "Array after deletion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time complexity -- O(N) {optimal}
    //Space complexity -- O(1)

    return 0;
}