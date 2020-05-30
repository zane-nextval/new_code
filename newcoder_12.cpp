/* 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
并保证奇数和奇数，偶数和偶数之间的相对位置不变。 */
#include <vector>
#include <iostream>
using namespace std;

void reOrderArray(vector<int> &array)
{
    int len = array.size();
    int log = 0;
    int swap = 0;
    int swap1 = 0;
    for (int i = 0; i < len; ++i)
    {
        if (array[i] % 2 == 1)
        {
            for (int j = 0; j < i; ++j)
            {
                if(array[j] % 2 == 1)
                {
                    log = j;
                }
                else 
                {
                    log = j + 1;
                    swap = array[j];
                    swap1 = array[j + 1];
                    while (swap1 % 2 == 0)
                    {
                        array[++j] = swap;
                        swap = swap1;
                        swap1 = array[j + 1];
                    }
                    array[log] = swap;
                    array[j] = swap1;
                }   
            }
        }
    }
}

int main()
{
    vector<int> ive{1,2,3,4,5,6,7};
    reOrderArray(ive);
    for (int i = 0; i < ive.size(); ++i)
        cout << ive[i] << endl;
    return 0;
}