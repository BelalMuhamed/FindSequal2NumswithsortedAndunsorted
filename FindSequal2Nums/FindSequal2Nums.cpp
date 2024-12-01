

#include <iostream>
using namespace std;
bool FindTwoNumbersEqualNumInUnsortedArray(int Numbers[], int size, int SearchValue)
{
    bool flag = false;
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            if (i == j)
                continue;
            else 
            {
                if (SearchValue == (Numbers[i] + Numbers[j]))
                {
                    flag = true;
                    break;
                }
                    
                
                
                    
            }
            
        }
        if (flag == true)
        {
            break;
        }
    }
    return flag;
}
bool FindTwoNumbersEqualNumInsortedArray(int Numbers[], int size, int SearchValue)
{
    bool flag = false;
    int left = 0;
    int right = size - 1;
    int sum;
    while (left < right)
    {
        sum = Numbers[left] + Numbers[right];
        if (SearchValue == sum)
        {
            return true;
        }
        else if (sum<SearchValue)
        {
           left++;

        }
        else 
        {
            right--;
        }
       
    } 
    return false;
}
int main()
{
    /*int numbers[10] = { 1,5,8,9,7,12,3,99,15,17 };
    cout << FindTwoNumbersEqualNumInUnsortedArray(numbers, 10, 200);*/

    int numbers02[10] = { 1,5,7,8,12,15,17,19,22,25 };
    cout << FindTwoNumbersEqualNumInsortedArray(numbers02, 10, 27);

}

