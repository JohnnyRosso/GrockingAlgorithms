#include <iostream>
#include <vector>
#include <algorithm>
#include "BinarySearch.h"
#include "SelectionSort.h"
#include "Partition.h"
#include "QuickSort.h"

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

void ManualEntering(int size, std::vector<int> &numbers)
{
    std::cout << "Enter the array ";

    for (int i = 0; i < size; i++)
        std::cin >> numbers[i];
}

void ArrayOutput(std::vector<int> numbers)
{
    for (auto element : numbers)
        std::cout << element;
}

int main()
{
    while (true)
    {
        std::cout << "Algorithms\n\n";
        std::cout << "1.Binary Search\n";
        std::cout << "2.Selection Sort\n";
        std::cout << "3.Exit\n";
        std::cout << "\n";
        std::cout << "Choose an option ";

        int algorithmNumber;

        std::cin >> algorithmNumber;

        switch (algorithmNumber)
        {
            case 1: //BinarySearch
            {
                system("cls");
                std::cout << "Binary Search\n\n";
                std::cout << "Manual entering the array Y/N? ";

                int size;
                char item;
                std::cin >> item;

                if (item == 'Y')
                {
                    std::cout << "Enter the size of array ";
                    std::cin >> size;
                    std::vector<int> numbers(size);

                    ManualEntering(size, numbers);

                    std::sort(numbers.begin(), numbers.end());
                    std::cout << "Sorted array: ";
                    ArrayOutput(numbers);

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
            case 2: //SelectionSort
            {
                system("cls");
                std::cout << "Selection Sort\n\n";
                std::cout << "Manual entering the array Y/N? ";

                int size;
                char item;
                std::cin >> item;

                if (item == 'Y')
                {
                    std::cout << "Enter the size of array ";
                    std::cin >> size;
                    std::vector<int> numbers(size);

                    ManualEntering(size, numbers);
                    std::vector<int> selectionSortResult = SelectionSort(numbers);
                    
                    std::cout << "Sorted array: ";
                    ArrayOutput(selectionSortResult);
                }


            }
            default:
                return 0;
        }
    }
    return 0;
}