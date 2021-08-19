#include <fstream>

void phoneDirectory(void) {
  std::string name;
  std::string number;
  std::string line;
  std::ifstream fileobject; 
  int numberlines;
  std::string search;

  std::cout<<"Please enter a name or number to search: ";
  getline(std::cin, search);

  fileobject.open("phonebook.csv");
  for (numberlines = 0; std::getline(fileobject, line); ++numberlines);
  std::cout<<"Searching "<<numberlines<<" records...\n\n";
  fileobject.close();

  fileobject.open("phonebook.csv");
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
	std::cout << " - dataFileParser: not yet implemented\n\n";
}