class car {
  private:
    //default colour and make declared
    const std::string DEFAULT_COLOUR = "Blue";
    const std::string DEFAULT_MAKE = "Honda";
    //car colour and make
    std::string carcolour; 
    std::string carmake; 
    //engine on default false
    bool engineturnedon = false;
    //car locked default false
    bool carlocked = false;

    //initialise car
    void init_car(std::string colour, std::string make) {
      carcolour = colour;
      carmake = make;
    }


  public:
    //if a colour or name isn't provided the car is created with default params
    car(std::string colour = "", std::string make = "") {
      if (colour == "") {
        colour = DEFAULT_COLOUR;
      }
      if (make == "") {
        make = DEFAULT_MAKE;
      }
      init_car(colour, make);
    }

    ~car() {
      std::cout << "\ndestroyed\n";
    }

    //getter an setter for car colour
    void set_colour(std::string colour) { 
      carcolour = colour;
    }
    std::string get_colour(void) { 
      return carcolour;
    }
    //getter an setter for car make
    void set_make(std::string make) { 
      carmake = make;
    }
    std::string get_make(void) { 
      return carmake;
    }
    //turn engine on if not on already
    void engine_on(void) {
      if(engineturnedon) {
        std::cout<<"\nThe engine is already running\n";
      } else {
        std::cout<<"\nStarting the engine...\n";
        engineturnedon = true;
      }
    } 
    //turn engine off if not off already
    void engine_off(void) {
      if(engineturnedon == false) {
        std::cout<<"\nThe engine is already off\n";
      } else {
        std::cout<<"\nStopping the engine...\n";
        engineturnedon = false;
      }
    };

    //lock car if not locked already
    void locked(bool islocked) { 
      std::string lockedlabel;
      if(islocked == carlocked) {
        lockedlabel = islocked ? "locked" : "unlocked";
        std::cout<<"\nThe car is already " << lockedlabel << "\n";
      } else {
        carlocked = islocked;
      }
    } 

    //provide the overall status of the car
    void status(void) {
      std::string enginelabel;
      std::string lockedlabel;

      engineturnedon ? enginelabel = "Running" : enginelabel = "Off";
      carlocked ? lockedlabel = "Locked" : lockedlabel = "Unlocked";

      std::cout << "\nCar Status: Colour: " << carcolour << ", Make: " << carmake << ", Engine: " << enginelabel << ", " << lockedlabel<<"\n";
    }
};


void carClass() {
  //users input for interaction menu
  std::string input;
  //users input for car make
  std::string mycarMake;
  //users input for car colour
  std::string mycarColour;
  //interaction menu answer as integer
  int interaction;

  //asking user to enter car make
  std::cout << "Enter car make: ";
  getline(std::cin,mycarMake);
  //asking user to enter car colour
  std::cout<<"Enter car colour: ";
  getline(std::cin,mycarColour);
  car mycar(mycarColour, mycarMake);

  while (true) {
    mycar.status();
    //Displays the interaction menu to the user
    std::cout<<"Interation Menu:\n1: Turn Engine On\n2: Turn Engine Off\n3: Lock Car\n4: Unlock Car\nPlease select an option (or 0 to finish): ";
    getline(std::cin, input);
    try {
      interaction = stoi(input);
    }
    catch (std::invalid_argument error) {
      interaction = 99;
    }
    switch(interaction) {
      case 1:
        mycar.engine_on();
        break;
      case 2:
        mycar.engine_off();
        break;
      case 3:
        mycar.locked(true);
        break;
      case 4:
        mycar.locked(false);
        break;
      case 0:
        return;
        break;
      default:
        std::cout << "Not a Valid Choice. \n";
        std::cout << "Choose again.\n";
    }
  }
}

struct shape {
  float radius;
  float length;
  float width;
  float baseA;
  float baseB;
  float height;
};

class circle: public shape {
  public:
    circle(){}
    ~circle(){}
    circle(float Radius){
      radius = Radius;
    }
};

class rectangle: public shape {
  public:
    rectangle(){}
    ~rectangle(){}
    rectangle(float Length, float Width){
      length = Length;
      width = Width;
    }
};

class trapezoid: public shape {
  public:
    trapezoid(){}
    ~trapezoid(){}
    trapezoid(float BaseA, float BaseB, float Height){
      baseA = BaseA;
      baseB = BaseB;
      height = Height;
    }
};

class AreaOf{
  private:
    float PI = 3.1415;
  public:
    float size(circle Circle){
      return PI*(Circle.radius*Circle.radius);
    }
    float size(rectangle Rectangle){
      return Rectangle.length*Rectangle.width;
    }
    float size(trapezoid Trapezoid){
      return ((Trapezoid.baseA + Trapezoid.baseB)/2)*Trapezoid.height;
    }
};

void areaOf(void) {
  AreaOf area;
  std::cout<<"Area of Circle (r = 4.5): "<<area.size(circle(4.5))<<"\n";
  std::cout<<"Area of Rectangle (w = 4, l = 5.9): "<<area.size(rectangle(4,5.9))<<"\n";
  std::cout<<"Area of Trapezoid (b = 14, h = 7.5, a = 6): "<<area.size(trapezoid(14,6,7.5));
}