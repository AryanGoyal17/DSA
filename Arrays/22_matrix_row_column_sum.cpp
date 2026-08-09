//Lab-Assignment-1(q5)
// 5) Write a program to find sum of every row and every column in a two-dimensional array

#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[2][3]){

    for(int i = 0; i < 2; i++){

        int sum = 0;

        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }

        cout << "Sum of row-" << i + 1 << " = " << sum << endl;
    }
}

void ColumnSum(int arr[2][3]){

    for(int j = 0; j < 3; j++){

        int sum = 0;

        for(int i = 0; i < 2; i++){
            sum += arr[i][j];
        }
        cout << "Sum of column-" << j + 1 << " = " << sum << endl;
    }
}

int main(){

    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    rowSum(arr);
    ColumnSum(arr);

    //Time complexity = O(R x C) -- R = no of rows, C = number of columns... for square matrix its N^2
    //Space complexity = O(1)

    return 0;
}
