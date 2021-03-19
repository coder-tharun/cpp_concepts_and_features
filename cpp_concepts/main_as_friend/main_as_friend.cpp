#include<iostream>

class container
{
  int x; 
  friend int main();
};

int main()
{
  container obj; 
  obj.x = 100; 
  std::cout << obj.x << std::endl; 
  return 0 ; 
}

