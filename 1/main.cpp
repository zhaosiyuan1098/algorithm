#include <iostream>
#define max 1
#define min 2
using namespace std;

int searchMax(int *searchArray, int low, int high)
{
    std::cout << "start to search MAX,low:" << low << ",high:" << high << std::endl;
    if (low == high)
    {
        return searchArray[low];
    }
    else
    {
        int mid = (low + high) / 2;
        int left_max = searchMax(searchArray, low, mid);
        int right_max = searchMax(searchArray, mid + 1, high);
        if (left_max > right_max)
        {
            return left_max;
        }
        else
            return right_max;
    }
}

int searchMin(int *searchArray, int low, int high)
{
    std::cout << "start to search MIN,low:" << low << ",high:" << high << std::endl;
    if (low == high)
    {
        return searchArray[low];
    }
    else
    {
        int mid = (low + high) / 2;
        int left_min = searchMin(searchArray, low, mid);
        int right_min = searchMin(searchArray, mid + 1, high);
        if (left_min < right_min)
        {
            return left_min;
        }
        else
            return right_min;
    }
}

int searchArray[] = {6, 3, 8, 1, 10, 5, 5, 9, 2, 7,7,4,2,8,16,2,6,8};
int arrayEnd;
int main()
{
    int length = sizeof(searchArray) / sizeof(searchArray[0]);
    int search_max = searchMax(searchArray, 0, length);
    int search_min = searchMin(searchArray, 0, length);
    std::cout << "max:"<<search_max<< "  min:"<<search_min<< std::endl;
}