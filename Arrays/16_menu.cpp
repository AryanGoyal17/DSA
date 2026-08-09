// Lab-Assignment-1_q1

// 1) Develop a Menu-driven program to demonstrate the following operations ofArrays
// ——MENU——-
// 1.CREATE
// 2.DISPLAY
// 3.INSERT
// 4.DELETE
// 5. LINEAR SEARCH
// 6. EXIT

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int N){

    N--;
    cout << "Array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i];
    }
}

void insertion(int arr[], int N){
    int num;
    cout << "Enter the element you want to insert: ";
    cin >> num;

    int index;
    cout << "Enter the index at which you want to insert the element: ";
    cin >> index;

    for(int i = N - 1; i > index; i--){
        arr[i] = arr[i - 1];
    }

    arr[index] = num;

    cout << "Array after insertion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

}

void deletion(int arr[], int N){

    int index;
    cout << "Enter the index of the element you want to delete: ";
    cin >> index;

    for(int i = index; i < N - 1; i++){
        arr[i] = arr[i + 1];
    }

    N -= 2;

    cout << "Array after deletion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

void linearSearch(int arr[], int N){

    int elem;
    cout << "Enter the element you want to search for in the array: ";
    cin >> elem;

    int index = -1;

    for(int i = 0; i < N; i++){
        if(arr[i] == elem){
            index = i;
            break;
        }
    }

    if(index == -1){
        cout << "Element is not present in the array" << endl;
    }
    else{
        cout << "Element was found at position = " << index + 1 << endl;
    }

}

int main(){

    cout << "Welcome!!" << endl << endl;

    int choice;
    int arr1[7] = {0};
    bool isCreated = false;

    do{

    cout << "                 --MENU--                 " << endl << endl;
    cout << "1.CREATE" << endl;
    cout << "2.DISPLAY" << endl;
    cout << "3.INSERT" << endl;
    cout << "4.DELETE" << endl;
    cout << "5.LINEAR SEARCH" << endl;
    cout << "6.EXIT"<< endl << endl;

    cout << "Enter what you want to do(1/2/3/4/5/6): ";
    cin >> choice;

        switch(choice){

            case 1:
            cout << "Enter array elements(6 elements): ";
            for(int i = 0; i < 6; i++){ //Last element kept 0 as insertion will take place later
               cin >> arr1[i];
            }
            cout << "Array created" << endl;
            isCreated = true;
            break;
            
            case 2:
            if(!isCreated){
                cout << "First create the array using choice-1!!" << endl;
                break;
            }
            display(arr1, 7);
            break;

            case 3:
            if(!isCreated){
                cout << "First create the array using choice-1!!" << endl;
                break;
            }
            insertion(arr1, 7);
            break;
            
            case 4:
            if(!isCreated){
                cout << "First create the array using choice-1!!" << endl;
                break;
            }
            deletion(arr1, 7);
            break;

            case 5:
            if(!isCreated){
                cout << "First create the array using choice-1!!" << endl;
                break;
            }
            linearSearch(arr1, 7);
            break;
            
            case 6:
            cout << "Thank you for visiting!!" << endl;
            break;

            default:
            cout << "Invalid choice entered" << endl;

        }
}while(choice != 6);

    return 0;
}