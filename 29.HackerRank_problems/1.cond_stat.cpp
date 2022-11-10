/*
if you have Given a positive integer n, do the following:
1. If 1 <= n <= 9, print the lowercase English word corresponding to the number.
2. If n > 9, print Greater than 9.
*/

#include <iostream>
using namespace std;
string num[10] = {"Greater than 9","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{int in;
 cout << "Enter the number : "; 
 cin >> in;
 if(in > 9) cout << num[0]  << "\n";
 else cout << num[in] << "\n";
 return 0;
}

