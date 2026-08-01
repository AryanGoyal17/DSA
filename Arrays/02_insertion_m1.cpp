//Insertion in an array -- Method1

#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int index, int N){

    int elem;
    cout << "Enter the number you want to insert: ";
    cin >> elem;

    for(int i = N - 1; i > index; i--){
       arr[i] = arr[i - 1];
    }

    arr[index] = elem;
}

int main(){

    int arr[6] = {1, 2, 3, 4, 5};

    int index;
    cout << "Enter the index at which you want to insert the element: ";
    cin >> index;

    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before insertion: " ;

    for(int i = 0; i < N - 1; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
    insertion(arr, index, N);

    //Printing vector after insertion

    cout << "Array after insertion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time complexity -- O(N)
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    return 0;
}