#include <iostream>
#include <vector>
#include <algorithm>
#include "BinarySearch.h"

void BinarySearchValueFinder(std::vector<int> numbers)
{
    int value;
    std::cout << "\n\nEnter the value to find ";
    std::cin >> value;
    std::cout << "\n";

    std::vector<int> BinarySearchResult = BinarySearch(numbers, value);
    std::cout << "Index of value: " << BinarySearchResult[0];
    std::cout << "\n";
    std::cout << "Amount of operations: " << BinarySearchResult[1];
    std::cout << "\n\n";
}

int main()
{
    while (true)
    {
        std::cout << "Algorithms\n\n";
        std::cout << "1.BinarySearch\n";
        std::cout << "2.Exit\n";
        std::cout << "\n";
        std::cout << "Choose an option ";

        int algorithmNumber;

        std::cin >> algorithmNumber;

        switch (algorithmNumber)
        {
            case 1: //BinarySearch
            {
                system("cls");
                std::cout << "BinarySearch\n\n";
                std::cout << "Manual entering the array Y/N? ";

                int size;
                char item;
                std::cin >> item;

                if (item == 'Y')
                {
                    std::cout << "Enter the size of array ";
                    std::cin >> size;
                    std::vector<int> numbers(size);

                    std::cout << "Enter the array ";

                    for (int i = 0; i < size; i++)
                        std::cin >> numbers[i];

                    std::sort(numbers.begin(), numbers.end());
                    std::cout << "Sorted array: ";
                    for (int i = 0; i < size; i++)
                        std::cout << numbers[i] << " ";

                    BinarySearchValueFinder(numbers);
                    
                    system("pause");
                    system("cls");
                    break;
                }
                else if (item == 'N')
                {
                    std::cout << "Enter the size of array (array will be 1 .. size) ";
                    std::cin >> size;
                    std::vector<int> numbers(size + 1);

                    std::cout << "\nArray: ";

                    for (int i = 1; i <= size; i++)
                    {
                        numbers[i] = i;
                        std::cout << i << " ";
                    }

                    BinarySearchValueFinder(numbers);

                    system("pause");
                    system("cls");
                    break;
                }
            }

            default:
                return 0;
        }
    }

    return 0;
}