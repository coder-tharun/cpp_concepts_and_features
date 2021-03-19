#include <iostream>

using namespace std;

class container
{
  public:
    container()
    {
      std::cout << "Default Constructor " << std::endl; 
    }
    container(const container& obj)
    {
      std::cout << "Copy Constructor " << std::endl; 
    }
    container& operator = (container& obj)
    {
      std::cout << "Assignment Operator " << std::endl;
      return obj;
    }
};


container test_function_1() 
{
  std::cout << __func__ << std::endl;
  container second_instance;
  return second_instance;
}

container test_function_2()  
{
  std::cout << __func__ << std::endl;
  return container(); 
}

void test_function_3()
{
  std::cout << __func__ << std::endl;
  try
  {
    container inst;
    throw inst; 
  }
  catch (container caught)
  {
    std::cout << "Exception caught " << std::endl; 
  }
}

int main()
{
  test_function_1();
  std::cout << "------------------------------------------" << std::endl; 
  test_function_2(); 
  std::cout << "------------------------------------------" << std::endl; 
  test_function_3();  
  std::cout << "------------------------------------------" << std::endl; 
  return 0;
}

