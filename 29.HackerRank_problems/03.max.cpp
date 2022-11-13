/*
write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.
*/

#include <iostream>


using namespace std;

int max_1(int a, int b, int c, int d)
{int data[]={a,b,c,d};
 int max = data[0];
 for(int i=1;i<=4;i++)
 {if(max<data[i]) max=data[i];
 }
 return max;
}

int max_2(int a, int b, int c, int d) 
{return max(max(a,b),max(c,d));
}

int main() 
{int a, b, c, d;
 cout << "Enter the 1st numbers : "; 
 cin >> a; 
 cout << "Enter the 2nd numbers : "; 
 cin >> b; 
 cout << "Enter the 3rd numbers : "; 
 cin >> c; 
 cout << "Enter the 4th numbers : "; 
 cin >> d;
 int ans1 = max_1(a, b, c, d);
 int ans2 = max_2(a, b, c, d);
 cout << "Max_1 is : " << ans1 << endl;
 cout << "Max_2 is : " << ans2 << endl;
 return 0;
}
