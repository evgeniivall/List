#include <iostream>
#include "List_Class.h"


int main()
{

List<int> a;
for (int i = 5; i < 10; i++)
{
    a.push_back(i);
}
for (int i = 4; i >= 0; i--)
{
     a.push_front(i);
}
for(auto i = a.begin(); i != a.end();i++)
{
    std::cout << *i << " ";
}
std::cout << std::endl;

a.insert(a.begin() + 2, 0);

for(auto i = a.begin(); i != a.end();i++)
{
    std::cout << *i << " ";
}

	
	return 0;
}
