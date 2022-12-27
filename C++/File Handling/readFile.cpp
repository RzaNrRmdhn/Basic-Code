#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
   // ofstream MyWriteFile("filename.txt");
 
   // MyWriteFile.close();


   string myText;


   ifstream MyReadFile("filename.txt");

   while (getline (MyReadFile, myText)) { //getline(cin, variabel)

     cout << myText <<"\n";
   }

   // Close the file
   MyReadFile.close();
   //  remove("filename.txt");
}
