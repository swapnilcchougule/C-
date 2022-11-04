/*
C++ has many functions that allows mathematical tasks to be performed on numbers.s
*/

#include <iostream>
#include <cmath>   // Include the cmath library
using namespace std;

int main()
{cout << abs(-6.5) << "\n"; // The abs() function returns the absolute value of the argument.
 cout << abs(-6.5) << "\n"; // The fabs function returns the absolute value of the floating point argument.
 cout << cos(1) << "\n";    // The cos() returns the cosine of an argument given in radians.
 cout << acos(1) << "\n";   // The acos() function returns the inverse cosine of the argument in radians.
 cout << sin(1) << "\n";    // The sin() function returns the sine of an angle argument, given in radians, in the range [-1,1].
 cout << asin(1) << "\n";   // The asin() function returns the inverse sine of the argument in radians.
 cout << sqrt(4) << "\n";   // The sqrt() function returns the square root of the argument.
 cout << cbrt(27) << "\n";  // The cbrt() function returns the cube root of the argument.
 cout << exp(1) << "\n";    // The exp() function returns the base-e exponential value of the argument-
 cout << expm1(1) << "\n";  // The expm1() function returns e raised to the power of the argument minus 1.
 cout << pow(2,3) << "\n";  // pow(base, exponent). 2 raised to the power of 3 equals 8
 cout << fmax(5,10)<<"\n";  // The fmax() function returns the larger of two arguments.
 cout << fmin(5,10)<<"\n";  // The fmin() function returns the smaller of two arguments.
 cout << fdim(10,5)<<"\n";  // The fdim() function returns the positive difference between two arguments.
 cout << fdim(5,10)<<"\n";  // o/p = 0
}

