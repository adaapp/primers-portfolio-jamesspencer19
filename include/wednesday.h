#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

void phoneDirectory(void) {
  //the users search criteria
  std::string search;
  //line that is read
  std::string line;
  //creating an input stream
  std::ifstream file("primer5.csv");
  //asking the user to enter a name or number to search
	std::cout << "\nEnter a name or number to search: ";
  //storing the search criteria as search
	getline(std::cin, search);

  // 2d vector to hold all rows
  std::vector<std::vector<std::string>> records; 
  //retrieving the line from the phonebook
  while(getline(file, line)) {
    // setup variables to split each record into
    std::stringstream stream(line);
    //string to store the fields
    std::string field;  
    //vector to store list of all rows
    std::vector<std::string> rowList;
    // split the row into a fields where there are commas
    while(getline(stream, field, ',')) { 
      // push this new word to the row list
      rowList.push_back(field); 
    }
    // push this record onto the list of all rows
    records.push_back(rowList);
  }
  //close the file
  file.close();

  //display the number of records that are being searched
  std::cout << "Searching " << records.size() << " records ...\n\n";

  // boolean to see if search has been found
  bool found = false; 

  // check every item in the column
  for (int col = 0; col < records.size(); col++) { 
    // check every item in the row
    for (int row = 0; row < records.size(); row++) {
      // if the data in the field matches the search
      if (search == records[col][row]) { 
        //display the contat details to the user
        std::cout << "Contact details:\n" << records[col][0] << ", T:" << records[col][1] << std::endl;
        found = true;
      }
    }
  }
  //if the search could not find the record
  if (!found) { 
    // message displayed that nothing is found
    std::cout << "Sorry, no contact details found\n"; 
  }
}

void displayTable(std::vector<std::vector<std::string>> records, int widths[3]){
  int buffer = 2;
  int firstname = 0;
  int lastname = 1;
  int salary =2;
  // first two lines printed based off of the spacing we calculated earlier
  std::cout << std::left << std::setw(widths[firstname]) << "Initial" << std::setw(widths[lastname] + buffer) << "Last" << std::setw(widths[salary])  << "Salary"<< std::endl<<"\n"<< std::setw(widths[firstname]) << "--------" << std::setw(widths[lastname] + buffer) << "----------" << std::setw(widths[salary]) << "--------" << std::endl;
  // for each record in the 2d vector
  for (int col = 0; col < records.size(); col++) { 
    // for each field in each record
    for (int row = 0; row < records[col].size(); row++) { 
      // if the field is an firstname
      if (row == firstname) { 
        //calculate the initial by getting first character of the first name
        std::string initial = std::string(1, records[col][row].at(0)) + ".";
        // space using the widths we calculated earlier
        std::cout << std::setw(widths[row]) << initial; 
      }
      // if the field is a lastname
      if (row == lastname) { 
        //display the last name with the buffer
        std::cout << std::setw(widths[row] + buffer) << records[col][row];
      }
      // if the field is a salary
      if (row == salary) { 
        //display the salary with a pound sign 
        std::cout << std::left << "£" << records[col][row];
      }
    }
    std::cout << std::endl;
  }
}


void dataFileParser(void) {
  //declare variables
  int widths[3] = {0, 0, 0};
  std::string line;
  std::vector<std::vector<std::string>> records;
  std::ifstream fileobject;

  //open file primer6
  fileobject.open("primer6.csv");

  //get each line within the file
  while(getline(fileobject, line)) {
    // setup variables to split each record into
    std::stringstream stream(line);
    std::string field;  
    std::vector<std::string> rowList;

    int index = 0;
    // split the row into a fields where there are commas
    while(getline(stream, field, ',')) { 
      // keep a running tally of the length of the longest word for spacing
      if (field.length() > widths[index]) { 
        widths[index] = field.length();
      }
      // keep track of which column
      index++; 
      // push this new word to the row list
      rowList.push_back(field); 
    }
    // push this record onto the list of all rows
    records.push_back(rowList); 
  }
  //close the file
  fileobject.close();

  displayTable(records,widths);
}

