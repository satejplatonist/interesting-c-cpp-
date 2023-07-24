#include <iostream>
#include <functional>
#include <vector>

int main()
{
  const int x{8};
  const int &y=x; // can only acess not modify non-modifiable  reference
  std::vector<std::reference_wrapper<const int>> v1;
  v1.push_back(y);
  for(auto name:v1)
    {
      std::cout<<name.get()<<" ";
    }
  const int* const p =&x;
  
  std::cout << "Hello World!\n";
}
