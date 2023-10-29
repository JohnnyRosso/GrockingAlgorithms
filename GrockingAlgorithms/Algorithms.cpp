#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h> 
#include "BinarySearch.h"

int main()
{
    std::cout << "Algorithms\n\n";
    std::cout << "1.BinarySearch\n";
    std::cout << "\n";
    std::cout << "Choose an algorithm to test ";

    int algorithmNumber;
    std::cin >> algorithmNumber;

    switch (algorithmNumber)
    {
    case 1: //BinarySearch
        system("cls");
        std::cout << "BinarySearch\n\n";
        std::cout << "Enter the size of array ";
        int size;
        std::cin >> size;
        std::vector<int> numbers(size);
        std::cout << "Enter the array ";
        
        for (int i = 0; i < size; i++)
            std::cin >> numbers[i];

        std::sort(numbers.begin(), numbers.end());
        std::cout << "Sorted array: ";
        for (int i = 0; i < size; i++)
            std::cout << numbers[i] << " ";

        int value;
        std::cout << "\nEnter the value to find ";
        std::cin >> value;

        std::cout << "Index of value: " << BinarySearch(numbers, value);
    }


    return 0;
}