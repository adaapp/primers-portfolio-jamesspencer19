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
      std::cout<<"letter";
    }
    //standard library comparison to an numeric character
    else if(std::isdigit(character)){
      //increment the number of numbers in the string
      numbers++;
      //output that a number has been found
      std::cout<<"numbers";
    }
    //else a special character has been found
    else{
      //increment the number of special characters in the string
      specialCharacters++;
      //output that a special character has been found
      std::cout<<"special";
    }
  }
  if(passwordLength == letters || passwordLength == numbers){
    return 1;
  }
  if(passwordLength >= 8 && numbers >= 2 && letters >=4){
    return 2;
  }
  if(passwordLength >= 8 && numbers >= 2 && letters >=4 && specialCharacters >= 1){
    return 3;
  }
  else{
    return 4;
  }
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

  if(passwordChecker(pass) == 1){
    complexity = "weak";
  }
  if(passwordChecker(pass) == 2){
    complexity = "strong";
  }
  if(passwordChecker(pass) == 3){
    complexity = "very strong";
  }
  if(passwordChecker(pass) == 4){
    complexity = "moderate";
  }
  std::cout<<"Your password is: " << complexity;
}


void employeeListRemoval(void) {
  //initialize array 
  std::vector<std::string> employees = {"John Smith","Jaelynn Stuart","Kaley Barajas","Walter Collier","Cale Myers"};
 
  //printing Strings stored in array
  for (int i = 0; i < employees.size(); i++)
    std::cout << employees[i] << "\n";
}
