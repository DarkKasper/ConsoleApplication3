// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int a;
    std::cin >> a;
    std::cout << "Hello World!\n";
    std::cout << std::endl;

    const int b = 5;

    int array[b]{ 0 };

    for (int i(0); i < b; ++i)
    {
        array[i] = rand() % 10;
        std::cout << array[i];
    }


    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    
}
void foo(int a)
{
    for (int i(0); i < a; ++i)
    {
        std::cout << "Hi!" << " ";
    }
    std::cout << std::endl << "oyur number is:" << a;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
