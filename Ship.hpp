#include <iostream>
#include <string>

class Ship {
    std::string name_ = "YELOW SUB MARINE";
    size_t capacity_ = 8000u;
    size_t id_ = 1u;
    size_t speed_ = 24u;
    size_t maxCrew_ = 255u;
    size_t crew_ = 10;
    
public:
    void setName(const std::string& name);
    
    std::string getName() const;
    
    size_t getCapacity() const;

    size_t getId() const;

    size_t getSpeed() const;

    size_t getMaxCrew() const;

    size_t getCrew() const;

    Ship() : id_(-1) {};  
    
    Ship(std::string, size_t, size_t, size_t, size_t, size_t) {};
    
    Ship(size_t, size_t, size_t) {};

    Ship& operator += (const int crewIn);

    Ship& operator -= (const int crewOut);
};