class car {
  private:
    std::string carcolour; 
    std::string carmake; 
    bool engineturnedon = false;
    bool carlocked = false;

    void init_car(std::string colour, std::string make, bool running, bool islocked) {
      carcolour = colour;
      carmake = make;
      engineturnedon = running;
      carlocked = islocked;
    }


  public:
    void set_colour(std::string colour) { 
      carcolour = colour;
    }
    std::string get_colour(void) { 
      return carcolour;
    }

    void set_make(std::string make) { 
      carmake = make;
    }
    std::string get_make(void) { 
      return carmake;
    }

    void engine_on(void) {
      if(engineturnedon){
        std::cout<<"The engine is already running\n";
        engineturnedon = true;
      }else{
        engineturnedon = true;
      }
    } 
    void engine_off(void){
      if(engineturnedon == false){
        std::cout<<"The engine is already off\n";
        engineturnedon = false;
      }else{
        engineturnedon = false;
      }
    };

    void locked(bool islocked) { 
      if(islocked) {
        carlocked = true;
      } else {
        carlocked = false;
      }
    } 


    void status(void) {
      std::string enginelabel;
      std::string lockedlabel;

      engineturnedon ? enginelabel = "Running" : enginelabel = "Off";
      carlocked ? lockedlabel = "Locked" : lockedlabel = "Unlocked";

      std::cout << "\n Car Status: colour: " << carcolour << ", make: " << carmake << ", engine: " << enginelabel << ", " << lockedlabel<<"\n";
      }
};


void carClass() {
  int menu;
  std::string mycarMake;
  std::string mycarColour;
  int interaction;
  car mycar;

  while (true) {
    std::cout<<"Car Menu:\n1: Create a Car\n2: Check Car's Status\n3: Edit car\nPlease select an option (or 0 to finish): ";
    std::cin>>menu;
    switch(menu){
    case 1:
    std::cout<<"Enter car make: ";
    std::cin>>mycarMake;
    mycar.set_make(mycarMake);
    std::cout<<"Enter car colour: ";
    std::cin>>mycarColour;
    mycar.set_colour(mycarColour);
    mycar.status();
    break;

    case 2:
    mycar.status();
    break;

    case 3:
    std::cout<<"Interation Menu:\n1: Turn Engine On\n2: Turn Engine Off\n3: Lock Car\n4: Unlock Car\nPlease select an option (or 0 to finish): ";
    std::cin>>interaction;
    switch(interaction){
      case 1:
      mycar.engine_on();
      mycar.status();
      break;
      case 2:
      mycar.engine_off();
      mycar.status();
      break;
      case 3:
      mycar.locked(true);
      mycar.status();
      break;
      case 4:
      mycar.locked(false);
      mycar.status();
      break;
      case 0:
      break;
      default:
      std::cout << "Not a Valid Choice. \n";
      std::cout << "Choose again.\n";
      std::cin >> interaction;
      break;
    }
    break;
    case 0:
    return;
    default:
    std::cout << "Not a Valid Choice. \n";
    std::cout << "Choose again.\n";
    std::cin >> menu;
    break;
  }
  }
}


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}