#include <iostream>

using namespace std;

class base_class
{
  public:
    double addition(double x)
    {
      return x+0.5;
    }
};

class derived_class : public base_class
{
  public:
    int addition(int x)
    {
      return x+1;
    }
};

int main()
{
  derived_class obj;
  std::cout << obj.addition(10) << " " << obj.addition(10.5) << std::endl; 
  return 0; 
}
