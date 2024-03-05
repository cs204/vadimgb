#include<iostream>
struct World
{
    World()
    {
        std::cout << "Hello!\n";
    }
    ~World()
    {
        std::cout << "Good bye!\n";
    }
};

World TheWorld;
int main()
{}
