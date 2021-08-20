#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

void phoneDirectory(void) {
  std::string name;
  std::string number;
  std::string line;
  std::ifstream fileobject; 
  int numberlines;
  std::string search;

  std::cout<<"Please enter a name or number to search: ";
  getline(std::cin, search);

  fileobject.open("primer5.csv");
  for (numberlines = 0; std::getline(fileobject, line); ++numberlines);
  std::cout<<"Searching "<<numberlines<<" records...\n\n";
  fileobject.close();

  fileobject.open("primer5.csv");
  while(!fileobject.eof()){
    getline(fileobject, name ,',');
    getline(fileobject, number);
    if(search == name || search == number){
      std::cout<<"Contact details:\n"<<name<<", T:"<<number;
      fileobject.close();
      return;
    }
  }
  std::cout<<"Sorry, no contact details found";
  fileobject.close();
}


void dataFileParser(void) {
}