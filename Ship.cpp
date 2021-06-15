#include "Ship.hpp"

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

    Ship& Ship::operator += (const int crewIn) {
      crew_ += crewIn;
      return *this;
    }

    Ship& Ship::operator -= (const int crewOut) {
      crew_ -= crewOut;
      return *this;
    }