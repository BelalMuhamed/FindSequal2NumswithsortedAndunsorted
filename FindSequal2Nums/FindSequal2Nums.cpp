

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
int main()
{
    int numbers[10] = { 1,5,8,9,7,12,3,99,15,17 };
    cout << FindTwoNumbersEqualNumInUnsortedArray(numbers, 10, 200);
}

