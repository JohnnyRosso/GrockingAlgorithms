#include <iostream>
#include <vector>
#include <algorithm>

int BinarySearch(std::vector<int> numbers, int value)
{
    int left = 0, right = numbers.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (value == numbers[mid])
            return mid;

        if (value > numbers[mid])
            left = mid + 1;

        else
            right = mid - 1;
    }
    return 0;
}

int main()
{
    int value, len;
    std::cout << "Enter the length of array: ";
    std::cin >> len;
    std::vector<int> numbers(len);
    std::cout << "Enter the array: ";
    for (int i = 0; i < len; i++)
        std::cin >> numbers[i];

    std::cout << "Enter the number to search: ";
    std::cin >> value;

    std::sort(numbers.begin(), numbers.end());

    std::cout << BinarySearch(numbers, value);

    return 0;
}