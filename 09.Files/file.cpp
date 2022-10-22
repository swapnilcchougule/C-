/*Theory @ https://www.w3schools.com/cpp/cpp_files.asp 

class ofstream : Creates and writes to files
class ifstream	: Reads from files
class fstream	: A combination of ofstream and ifstream: creates, reads, and writes to files
*/

#include <iostream>
#include <fstream>  // There are three classes included in the fstream library, which are used to create, write or read files:
using namespace std; 

int main() 
{ofstream MyFile("filename.txt");              // Create and open a text file
 MyFile << "Text to be written in the file!";  // Write to the file
 MyFile.close();   				 // Close the file
 
 string FilText; 			    // Create a text string, which is used to output the text file
 ifstream MyReadFile("filename.txt");     // Read from the text file
 while (getline (MyReadFile, FilText))    // Use a while loop together with the getline() function to read the file line by line
 {cout << FilText <<"\n";
 }
}
