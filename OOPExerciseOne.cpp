#include <iostream>
#include <string>

class Ship {
    std::string name_ = "YELOW SUB MARINE";
    size_t capacity_ = 8000u;
    size_t id_ = 1u;
    const size_t speed_ = 24u;
    size_t maxCrew_ = 255u;
    size_t crew_ = 10;
    
public:
    void setName(const std::string& name) {
      name_ = name;
    }

    std::string getName() const {return name_;}
    
    size_t getCapacity() const {return capacity_;}
    
    size_t getId() const {return id_;}

    size_t getSpeed() const {return speed_;}

    size_t getMaxCrew() const {return maxCrew_;}

    size_t getCrew() const {return crew_;}

    Ship() : id_(-1) {};  
    
    Ship(std::string name, size_t capacity, size_t id, size_t speed, size_t maxCrew, size_t crew) 
    : name_(name)
    , capacity_(capacity)
    , id_(id)
    , speed_(speed)
    , maxCrew_(maxCrew)
    , crew_(crew)
    {};
    
    Ship(size_t id, size_t speed, size_t maxCrew) : Ship ("", 0u, id, speed, maxCrew, 0u)
    {};

    Ship& operator += (const int crewIn) {
      crew_ += crewIn;
      return *this;
    }

    Ship& operator -= (const int crewOut) {
      crew_ -= crewOut;
      return *this;
    }
};

class Cargo {
  std::string name_ = "Cytryny";
  size_t amount = 100;
  float basePrice = 10.10;

  Cargo(std::string name, size_t amount, float basePrice)
  : name_ (name)
  , amount_ (amount)
  , basePrice_ (basePrice)  
  {};

  Cargo(std::string name, size_t amount, float basePrice) : Cargo ("pomarancze", 15, 4.30) 
  {};

  std::string getName() const {return name_;}

};

int main() {
  //Ship s1;
  //std::cout << "Ship s1 " << "Name: " << s1.getName() << '\n';
  //Ship s2;
  //s2.setName ("AMFIBIA");
  //std::cout << "Ship s2 " << "Name: " << s2.getName() << " | Capacity: " << s2.getCapacity()
  //  << " | Id: " << s2.getId() << " | Speed: " << s2.getSpeed() << " | Max Crew: " << s2.getMaxCrew() << '\n';
  std::string newName;
  Ship s3 ("KAJAK", 12, 2, 8, 128, 3);
  std::cout << "Ship s3 " << "Name: " << s3.getName() << " | Capacity: " << s3.getCapacity()
    << " | Id: " << s3.getId() << " | Speed: " << s3.getSpeed() << " | Max Crew: " << s3.getMaxCrew()
    << " | Crew: " << s3.getCrew() << '\n';
  s3 += 20;
  std::cout << "Ship s3 " << "Name: " << s3.getName() << " | Capacity: " << s3.getCapacity()
    << " | Id: " << s3.getId() << " | Speed: " << s3.getSpeed() << " | Max Crew: " << s3.getMaxCrew()
    << " | Crew: " << s3.getCrew() << '\n';
  s3 -=10;
  std::cout << "Ship s3 " << "Name: " << s3.getName() << " | Capacity: " << s3.getCapacity()
    << " | Id: " << s3.getId() << " | Speed: " << s3.getSpeed() << " | Max Crew: " << s3.getMaxCrew()
    << " | Crew: " << s3.getCrew() << '\n';
  std::cout << "Nowa nazwa statku s3: ";
  std::cin >> newName;
  s3.setName (newName); 
  std::cout << "Ship s3 " << "Name: " << s3.getName() << " | Capacity: " << s3.getCapacity()
  << " | Id: " << s3.getId() << " | Speed: " << s3.getSpeed() << " | Max Crew: " << s3.getMaxCrew()
  << " | Crew: " << s3.getCrew() << '\n';
}