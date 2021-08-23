#include <iostream>

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
      engineturnedon = true;
    } 
    void engine_off(void){
      engineturnedon = false;
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
  std::cout<<"Car Menu:\n1: Create a Car\n2: Check Car's Status\n3: Edit car\n";
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
    carClass();
    break;

    case 2:
    mycar.status();
    carClass();

    case 3:
    std::cout<<"1. Turn Engine On\n2. Turn Engine Off\n3. Lock Car\n4. Unlock Car";
    std::cin>>interaction;
    carClass();
    break;

    default:
    std::cout << "Not a Valid Choice. \n";
    std::cout << "Choose again.\n";
    std::cin >> menu;
    break;
  }
}


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}