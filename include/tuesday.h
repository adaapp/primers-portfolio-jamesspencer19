int passwordChecker(std::string password) {
  //number of letters in the string
  int letters = 0;
  //number of numbers in the string
  int numbers = 0;
  //number of special characters in the string
  int specialCharacters = 0;
  //the password length
  int passwordLength = password.length();

  //loop that passes through each character in the string for comparison
  for(int i = 0; i < passwordLength; i++){
    //stores each character for comparison
    char character = password[i];
    //standard library comparison to an alphabetic character
    if(std::isalpha(character)){
      //increment the number of letters in the string
      letters++;
      //output that a letter has been found
      // std::cout<<"letter";
    }
    //standard library comparison to an numeric character
    else if(std::isdigit(character)){
      //increment the number of numbers in the string
      numbers++;
      //output that a number has been found
      // std::cout<<"numbers";
    }
    //else a special character has been found
    else if(std::ispunct(character)){
      //increment the number of special characters in the string
      specialCharacters++;
      //output that a special character has been found
      // std::cout<<"special";
    }
  }

  //if the passwords length only contains numbers or only contains letters
  if(passwordLength == letters || passwordLength == numbers){
    //1 is returned
    return 1;
  }
  //if the users password has a length greater than or equal to 8, has more than or equal to 2 numbers and has 4 or more letters and contains a special character
  if(passwordLength >= 8 && numbers >= 2 && letters >=4 && specialCharacters >= 1){
      return 4;
  }
  //if the users password has a length greater than or equal to 8, has more than or equal to 2 numbers and has 4 or more letters
  if(passwordLength >= 8 && numbers >= 2 && letters >=4){
    //return 2
    return 3;
  }
  else if(passwordLength >= 4){
    return 2;
  }
  return 0;
}


void passwordComplexityChecker(void) {
  //sets the password as a string
  std::string pass;
  //ask the user to enter their password
  std::cout<<"Password: ";
  //stores the input as pass
  std::cin>>pass;
  //passes the password through the checker
  passwordChecker(pass);
  //sets the complexity as a string
  std::string complexity;
  //if the passwordChecker returns 1
  if(passwordChecker(pass) == 1){
    //the complexity is weak
    complexity = "Weak";
  }
  //if the passwordChecker returns 2
  if(passwordChecker(pass) == 2){
    //the complexity is moderate
    complexity = "Moderate";
  }
  //if the passwordChecker returns 3
  if(passwordChecker(pass) == 3){
    //the complexity is strong
    complexity = "Strong";
  }
  //if the passwordChecker returns 4
  if(passwordChecker(pass) == 4){
    //the complexity is very strong
    complexity = "Very strong";
  }
  //displays the complexity of the users password
  std::cout<<"Your password "<< pass << " is: " << complexity;
}


void employeeListRemoval(void) {
  //initialize array 
  std::vector<std::string> employeeArray = { "John Smith","Jaelynn Stuart","Kaley Barajas","Walter Collier","Cale Myers","John Smith" };
  //declare the string that will need to be removed
  std::string remove;
  //loop through array and display each element on a seperate line
  std::cout<< "There are: "<< employeeArray.size() <<" employees\n";
  for (int i = 0; i < employeeArray.size(); i++){
    std::cout << employeeArray[i] << "\n";
  }
  //asking the user which employee they would like to remove from the list
  std::cout<<"Enter an employee name to remove: ";
  //gets the line entered by the user and saves it to remove
  std:getline(std::cin,remove);
  auto value = std::find(employeeArray.begin(), employeeArray.end(), remove);
  if(value != employeeArray.end()){
    //when the element is found it is erased from the array
    employeeArray.erase(value);
    //loop through array and display each element on a seperate line
    std::cout<< "There are: "<< employeeArray.size() <<" employees\n";
    for (int i = 0; i < employeeArray.size(); i++){
      std::cout << employeeArray[i] << "\n";
    }
  }
  //if the element cannot be erased "Employee not found" is displayed
  else{
    std::cout<<"Employee not found";
  }
}
