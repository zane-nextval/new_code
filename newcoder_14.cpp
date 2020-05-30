/* 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。 */

#include <iostream>
using namespace std;

int main()
{
    int in;
    int sum = 0;
    cin >> in;
    while (in)
    {
        in = in / 2;
        sum += in % 2;
    }
    return sum;
}
