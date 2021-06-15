#include <iostream>
#include <string>
#include "Ship.hpp"

int main() {
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