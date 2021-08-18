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
  return 0;
}


void passwordComplexityChecker(void) {
  //store the password as a string
  std::string pass;
  //ask the user to enter their password
  std::cout<<"Password: ";
  //stores the input as pass
  std::cin>>pass;
  //passes the password through the checker
  passwordChecker(pass);
}


void employeeListRemoval(void) {
	std::cout << " - employeeListRemoval: not yet implemented\n\n";
}
