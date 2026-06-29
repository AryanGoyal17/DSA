//Reverse an array--

//NOTE: Vector/array is taken input by the user(size - input, then elements - input) thus space complexity -- O(N) - all

////Methods---

////1-- 2 pointer - O(n) - tc, O(n) - sc
////2-- 1 pointer - O(n) - tc, O(n) - sc
////3-- applying pointer approach in a loop inside a function -- same complexities
////4-- creating a new vector/array and then assigning arr2[i] = arr1[N - i - 1] ---- same complexities
////5-- Creating a vector and using reverse(v.begin(), v.end()) --- same complexities

// -- interviews, sometimes auxiliary space = space complexity
//then M1, m2, m4 -- A-space = O(N),  input space = O(N)
//then m3, m5 -- A-space = O(1) , input space = O(N)