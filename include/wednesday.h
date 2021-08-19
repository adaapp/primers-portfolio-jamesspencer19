#include <fstream>

void phoneDirectory(void) {
  std::string line;
  std::ifstream fileobject; 
  int numberlines = 0;

  fileobject.open("phonebook.csv"); 
  while(!fileobject.eof()){
    getline(fileobject, line);
    std::cout<<line<<std::endl;
    numberlines++;
  }
  std::cout<<"Number of records: "<<numberlines;
  // close the opened file.
  fileobject.close();
}


void dataFileParser(void) {
	std::cout << " - dataFileParser: not yet implemented\n\n";
}