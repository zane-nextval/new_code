/* 一只青蛙一次可以跳上1级台阶，也可以跳上2级。
    求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。 
*/

#include <iostream>
using namespace std;

int jump(int level)
{
    if (level == 0 || level == 1)
    {
        return 1;
    }
    return jump(level - 1) + jump(level - 2);
}

int main()
{
    int level;
    cin >> level;
    cout << " 222 " << endl;
    cout << jump(level) << "1111111" << endl;
    return 0;
}

