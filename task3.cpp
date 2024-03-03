#include "hw1.hpp"

struct address {  
  std::string city;
  std::string street;
  int house_number;
  int apartment_number;
  int postal_code;
};

void print_struct(address *a)
{
  std::cout << "city: " << a->city << std::endl;
  std::cout << "street: " << a->street << std::endl;
  std::cout << "house_number: " << a->house_number << std::endl;
  std::cout << "apartment_number: " << a->apartment_number << std::endl;
  std::cout << "postal_code: " << a->postal_code << std::endl;
  std::cout << std::endl;
}

int task3()
{
  address adr1;
  address adr2;

  adr1.city = "Moscow";
  adr1.street = "Tverskaya";
  adr1.apartment_number = 7;
  adr1.house_number = 10;
  adr1.postal_code = 12345;

  adr2.city = "Kazan";
  adr2.street = "Bauman str";
  adr2.apartment_number = 2;
  adr2.house_number = 15;
  adr2.postal_code = 42005;

  print_struct(&adr1);
  print_struct(&adr2);

  return (0);
}