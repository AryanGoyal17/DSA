// Assignment-1, q4(C)
// c. Find the Transpose of a Matrix

#include <bits/stdc++.h>
using namespace std;

void transpose_matrix(int arr[2][3]){ //int arr[][3] also works but then we dont know the num of rows

    int transpose[3][2] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    cout << "Transpose matrix:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){

    int arr[][3] = {{1, 2, 3},
                   {4, 5, 6}};
    
    cout << "Original matrix:" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    transpose_matrix(arr);

    //This is the optimal method..
    //Time complexity -- O(R*C) -- R = no of rows, C = number of columns... for square matrix its N^2
    //Space complexity -- O(R*C) -- R = no of rows, C = number of columns... for square matrix its N^2

    //NOTE: For square matrix -- Time complexity optimal = O(N^2), space complexity = O(1)

    return 0;
}