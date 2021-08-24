#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

void phoneDirectory() {

  std::string search;

	std::cout << "\nEnter a name or number to search: ";
	getline(std::cin, search);

  const std::string FILE_NAME = "contacts.csv";
  std::ifstream file(FILE_NAME);

  std::string line;
  std::vector<std::vector<std::string>> records; // 2d vector to hold all rows

  while(getline(file, line)) {
    // setup variables to split each record into
    std::stringstream stream(line);
    std::string field;  
    std::vector<std::string> rowList;

    while(getline(stream, field, ',')) { // split the row into a fields where there are commas
      rowList.push_back(field); // push this new word to the row list
			std::cout << "\nXXX: " << field;
    }
    records.push_back(rowList); // push this record onto the list of all rows
  }
  file.close();
  return records;
}
	int records = data.size();

  std::cout << "Searching " << records << " records ...\n\n";

  bool found = false; // flag to see if search has been found

  // check every item in the 2d vector
  for (int col = 0; col < records; col++) { 
    for (int row = 0; row < records; row++) {
      if (search == data[col][row] { // if the data in the field matches the search
        std::cout << "Contact details:\n" << data[col][0] << ", T:" << data[col][1] << std::endl;
        found = true;
      }
    }
  }
  if (!found) { // message for if nothing is found
    std::cout << "Sorry, no contact details found\n"; 
  }
}


void dataFileParser(void) {
  int buffer = 2;
  int initial = 1;
  int lastname = 1;
  int salary =2;
  std::string line;
  std::vector<std::vector<std::string>> records;
  int widths[3] = {0, 0, 0};
  std::ifstream fileobject;

  fileobject.open("primer6.csv");

  while(getline(fileobject, line)) {
    // setup variables to split each record into
    std::stringstream stream(line);
    std::string field;  
    std::vector<std::string> rowList;

    int index = 0;
    while(getline(stream, field, ',')) { // split the row into a fields where there are commas
      if (field.length() > widths[index]) { // keep a running tally of the length of the longest word for spacing
        widths[index] = field.length();
      }
      index++; // keep track of which column
      rowList.push_back(field); // push this new word to the row list
    }
    records.push_back(rowList); // push this record onto the list of all rows
  }

  fileobject.close();

  // first two lines printed based off of the spacing we calculated earlier
  std::cout << std::left << std::setw(widths[initial]) << "Initial" << std::setw(widths[lastname] + buffer) << "Last" << std::setw(widths[salary])  << "Salary"<< std::endl;  
  std::cout << std::setw(widths[initial]) << "--------" << std::setw(widths[lastname] + buffer) << "----------" << std::setw(widths[salary]) << "--------" << std::endl;
  
  for (int i = 0; i < records.size(); i++) { // for each record in the 2d vector
    for (int j = 0; j < records[i].size(); j++) { // for each field in each record
      if (j == initial) { // if the field is an initial
        std::string initial = std::string(1, records[i][j].at(0)) + ".";
        std::cout << std::setw(widths[j]) << initial; // space using the widths we calculated earlier
      }
      if (j == lastname) { // if the field is a lastname
        std::cout << std::setw(widths[j] + buffer) << records[i][j];
      }
      if (j == salary) { // if the field is a salary
        std::cout << std::left << "£" << records[i][j];
      }
    }
    std::cout << std::endl;
  }
}