// Leaders in an array -- optimal

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int arr[N];
	
	for(int i = 0; i < N; i++){
	    cin >> arr[i];
	}
	
	vector <int> leaders;
	
	int maximum = arr[N-1];
	leaders.push_back(arr[N-1]);
	
	for(int i = N-2; i >= 0; i--){
	    if(arr[i] > maximum){
	        leaders.push_back(arr[i]);
	        maximum = arr[i];
	    }
	}
	
	reverse(leaders.begin(), leaders.end());
	
	for(int i = 0; i < leaders.size(); i++){
	    cout << leaders[i] << " ";
	}

    //Time complexity = O(N)
    //Space complexity = O(N)
	
	return 0;

}
