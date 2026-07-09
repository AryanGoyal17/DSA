//Limits for diff types of arrays and containers----------------

// Limits for integer arrays--
/// a-- Inside int main (max no of numbers = approx(1e6))
/// b-- Outside int main (max no of numbers = approx(1e7))

//Limits for boolean arrays and character arrays--
/// a-- Inside int main (max no of elements = approx(between 1e6 and 1e7))
/// b-- Outside int main (max no of elements = approx(1e8))

//Limits for containers like vectors(char, bool), strings--
/// a-- Inside/outside int main (max no of elements = approx(10^8))

//Limits for vectors(int, float, long long, double)
/// a-- Inside/outside int main (max no of elements = approx(10^7))

//--------------------------------------------------------------


//These limits wont case problems in character hashing since hash array max size is 256
//But limits can cause problems in number hashing if max num(limit) > 10^7..

//--------------------------------------------------------------