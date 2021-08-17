float ftoc(float f) {
  return ((f - 32) * 5 / 9); //Fahrenheit to Centigrade.
}

float ctof(float c) {
  return ((c * 9 / 5) + 32); //Centigrade to Fahrenheit.
}

float ktoc(float k) {
  return(k + 273.15); //Centigrade to Kelvin
}

void fahrenheitCentigradeConversion(void) {
  //Users conversion choice
  std::string temp;
  //The temperature units Centigrade or Fahrenheit
  std::string label;
  //Users original temperature
  float ot = 0.0;
  //Converted temperature
  float t = 0.0;

  int error = 0;


  do{
    //Asking the user to enter the temperature that they want to be converted
    std::cout << "\nPlease enter the starting temperature: ";
    //The temperature is stored
    std::cin >> ot;

    //Asking the user which conversion they want to make
    std::cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
    std::cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit";
    std::cout << "\nPress ‘K’ to convert from Centigrade to Kelvin.\n\n";

    //Displaying the users choice
    std::cout << "\nYour choice: ";
    std::cin >> temp;

    //If the user answers c or C the fahrenheit to centigrade conversion is used
    if(temp == "C" || temp == "c") {
      t = ftoc(ot);
      label = "Fahrenheit";
    }
    //If the user answers c or C the centigrade to fahrenheit conversion is used
    if(temp == "F" || temp == "f") {
      t = ctof(ot);
      label = "Centigrade";
    }
    //If the user answers k or K the centigrade to fahrenheit conversion is used
    if(temp == "K" || temp == "k") {
      t = ktoc(ot);
      label = "Kelvin";
    }
    //The converted temperature is displayed to the user
    std::cout << ot << " degrees " << label << " is = " << t << "\n";
    if (std::cin.fail()){
        std::cout << "Please enter a valid integer";
        error = 1;
        std::cin.clear();
        std::cin.ignore(80, '\n');
    }
  }while(error == 1);
}


void selfServiceCheckout(void) {
  //The number of items
	int items = 0;
  //The value for sales tax
  float salesTax = 5.5;
  //The quantity of the item
  float quantity = 1;
  //The cost of the item
  float cost = 0.0;
  //The total before taxes have been deducted
  float subtotal = 0.0;
  //The total after taxes have been deducted
  float total = 0.0;

  //A loop that will continuously ask the user to enter item quantity and item cost until zero is entered
  while (quantity > 0) {
    //Increment item count
    items++;
    //Asks the user to enter the quantity of the item
    std::cout << "Please enter a quantity for item " << items << " (or 0 to finish): ";
    std::cin >> quantity;

    if (quantity > 0) {
      //Asks the user for the cost of the item
      std::cout << "Please enter item " << items << "'s cost: ";
      std::cin >> cost;
      //Calculates the subtotal by multiplying the quantity by the cost
      subtotal =+ quantity * cost;
    }
  }
  //The sales tax is calculated and then rounded to 2dp
  salesTax = roundf(subtotal * (salesTax/100)*100)/100;
  //The total tax is calculated and then rounded to 2dp
  total = roundf((subtotal - salesTax)*100)/100;

  std::cout << "Thank you.\n\n";
  //The subtotal is displayed
  std::cout << "Subtotal: " << roundf(subtotal*100)/100 << "\n";
  //The Shopping tax is displayed
  std::cout << "Shopping Tax: " << salesTax << "\n\n";
  //The total after tax is displayed
  std::cout << "Total: " << total << "\n\n";
}

