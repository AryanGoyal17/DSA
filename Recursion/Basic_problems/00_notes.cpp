//1---Recursion
///// -- a fn calling itself, until a specified condition is met

//2---Infinite Recursion

///// infinite recursion --- stop condition is not present
///// --- in case of infinite recursion, the process occurs until me run out of memory(segmentation fault) = Stack Overflow
///// Stack overflow -- error which occurs when multiple fn calls occur during infnite recursion(we run out of memory available)
///// Stack space -- space which stores unfinished function calls.

//3---Stop Condition = base condition

///// condition which tells when to stop calling fn's recursively(prevents stack overflow and segmentation fault)
///// There can be multiple base conditions at one time..

//4--- Recursion tree

///// explain recursion code in terms of recursion tree in notes

//5--- Recursive call

///// specific line of code inside a function where the function invokes (calls) itself.

//6--- Types of recursion -- head and tail

///// head recursion ---- printing happens after the recursive call is executed
///// tail recursion ---- printing happens before the recursive call is executed

//// For now treat head recursion the same as backtracking

//summary -----

//1-- what is recursion
//2-- base case/condition
//3-- stack overflow and stack space
//4-- recursion tree
//5-- recursive call
//6-- types of recursion and note on backtracking