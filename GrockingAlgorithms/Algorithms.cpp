#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "BinarySearch.h"
#include "SelectionSort.h"
#include "Partition.h"
#include "QuickSort.h"
#include "Merge.h"
#include "MergeSort.h"

void AlgorithmStart(std::vector<int>& numbers, int& size, char& item)
{
    std::cout << "Enter the size of array ";
    std::cin >> size;
    numbers.assign(size, 0);
    std::cout << "Manual entering the array Y/N? ";

    std::cin >> item;
}

void AlgorithmEnd()
{
    system("pause");
    system("cls");
}

void RandomNumbers(std::vector<int>& numbers, int size)
{
    std::cout << "\nThere are will be " << size << " random numbers\n";
    std::cout << "Enter the range of random numbers (left and right borders) ";
    int left, right;
    std::cin >> left >> right;
    std::cout << "\nYour random elements in range from " << left << " to " << right << "\n";

    for (auto& element : numbers)
    {
        element = std::rand() % (right - left) + left;
        std::cout << element << " ";
    }
    std::cout << "\nIn progress...\n";
}

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

void ManualEntering(std::vector<int> &numbers)
{
    std::cout << "Enter the array ";

    for (auto& element : numbers)
        std::cin >> element;
}

void ArrayOutput(std::vector<int> numbers)
{
    for (auto& element : numbers)
        std::cout << element << " ";
    std::cout << "\n\n";
}

int main()
{
    srand(time(NULL));

    while (true)
    {
        std::cout << "Algorithms\n\n";
        std::cout << "1.Binary Search\n";
        std::cout << "2.Selection Sort\n";
        std::cout << "3.Partition\n";
        std::cout << "4.QuickSort\n";
        std::cout << "5.MergeSort\n";
        std::cout << "6.Exit\n";
        std::cout << "\n";
        std::cout << "Choose an option ";

        int algorithmNumber;
        int size;
        char item;
        std::vector<int> numbers;

        std::cin >> algorithmNumber;

        switch (algorithmNumber)
        {
            case 1: //BinarySearch
            {
                system("cls");
                std::cout << "Binary Search - O(log(n))\n\n";

                AlgorithmStart(numbers, size, item);

                if (item == 'Y' || item == 'y')
                {
                    ManualEntering(numbers);

                    std::sort(numbers.begin(), numbers.end());
                    std::cout << "Sorted array: ";
                    ArrayOutput(numbers);

                    BinarySearchValueFinder(numbers);
                    
                    AlgorithmEnd();
                    break;
                }
                else if (item == 'N' || item == 'n')
                {
                    std::cout << "\nArray: ";

                    for (int i = 0; i < size; i++)
                    {
                        numbers[i] = i;
                        std::cout << i << " ";
                    }

                    BinarySearchValueFinder(numbers);

                    AlgorithmEnd();
                    break;
                }
            }
            case 2: //SelectionSort
            {
                system("cls");
                std::cout << "Selection Sort - O(n^2)\n\n";

                AlgorithmStart(numbers, size, item);

                if (item == 'Y' || item == 'y')
                {
                    ManualEntering(numbers);

                    SelectionSort(numbers);
                    std::cout << "Sorted array: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }
                else if (item == 'N' || item == 'n')
                {
                    RandomNumbers(numbers, size);

                    SelectionSort(numbers);
                    std::cout << "\n\nSorted array: \n";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }

            }
            case 3: //Partition
            {
                system("cls");
                std::cout << "Partition\n\n";

                AlgorithmStart(numbers, size, item);

                if (item == 'Y' || item == 'y')
                {
                    ManualEntering(numbers);

                    std::cout << "\nEnter the partition element ";
                    int pivot;
                    std::cin >> pivot;
                    std::cout << "\n";

                    Partition(numbers, 0, size, pivot);

                    std::cout << "Partition element: " << pivot << "\n";
                    std::cout << "Partition result: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }
                else if (item == 'N' || item == 'n')
                {
                    RandomNumbers(numbers, size);

                    std::cout << "\nEnter the partition element ";
                    int pivot;
                    std::cin >> pivot;
                    std::cout << "\n";

                    Partition(numbers, 0, size, pivot);

                    std::cout << "Partition element: " << pivot << "\n";
                    std::cout << "Partition result: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }
            }
            case 4: //QuickSort
            {
                system("cls");
                std::cout << "QuickSort\n\n";

                AlgorithmStart(numbers, size, item);

                if (item == 'Y' || item == 'y')
                {
                    ManualEntering(numbers);

                    QuickSort(numbers, 0, size);
                    std::cout << "\nSorted array: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }
                else if (item == 'N' || item == 'n')
                {
                    RandomNumbers(numbers, size);

                    QuickSort(numbers, 0, size);
                    std::cout << "\n\nSorted array: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }

            }
            case 5: //MergeSort
            {
                system("cls");
                std::cout << "MergeSort\n\n";

                AlgorithmStart(numbers, size, item);

                if (item == 'Y' || item == 'y')
                {
                    ManualEntering(numbers);

                    MergeSort(numbers);
                    std::cout << "\nSorted array: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }
                else if (item == 'N' || item == 'n')
                {
                    RandomNumbers(numbers, size);

                    MergeSort(numbers);
                    std::cout << "\n\nSorted array: ";
                    ArrayOutput(numbers);

                    AlgorithmEnd();
                    break;
                }

            }
            default:
                return 0;
        }
    }
    return 0;
}