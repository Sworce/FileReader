#include <iostream>
#include <fstream> //for File I/O
#include <string>

using namespace std;

int main()
{
  string fileName; //to get the name of the file to open
  string line; //to store a single line of a text file
  fstream fileStream; //to open a file for reading

  cout<<"What file do you want to open? ";
  getline(cin, fileName);
  
  //STEP 1: open the fileStream for input, using the fileName specified
  fileStream.open(fileName.c_str(), ios::in);

  if(fileStream.is_open() /*STEP 2: check to see if the fileStream successfully opened*/ )
  {
    cout<<fileName<<" opened.\nFILE CONTENTS:\n";
 
    while(!(fileStream.eof())) {
   
    getline(fileStream, line);
    cout << line << endl;
      
    }
    //STEP 3: repeat the following until the end-of-file (eof) has been reached...  

    // 3A: read a line from fileStream into the variable line
    // 3B: display the line, followed by an endline
  
    //STEP 4: close the fileStream
    fileStream.close();
  }
  else
  {
    cout<<fileName<<" could not be opened.\n";
  }

  return 0;
}
