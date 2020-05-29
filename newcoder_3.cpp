/* 请实现一个函数，将一个字符串中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为
We%20Are%20Happy。 */
#include <iostream>
#include <string.h>
using namespace std;
void replaceSpace(char *str, int length);

int main()
{
    string str{"We Are Happy"};
    int len = str.size();
    cout << len << endl;
    char str1[len];
    strcpy(str1, str.c_str());
    replaceSpace(str1, len);
    string s = str1;
    cout << s.size() << endl;
    cout << str1 << endl;
}
void replaceSpace(char *str, int length)
{
    int log = 0;
    for (int i = 0; i < length; ++i)
    {
        if (str[i] == ' ')
        {
            log++;
        }
    }
    int len = 2 * log;
    len += length;
    for (int i = len - 1; i >= 0; i--)
    {
        length--;
        if (str[length] == ' ')
        {
            str[i--] = '0';
            str[i--] = '2';
            str[i] = '%';
        }
        else
        {
            str[i] = str[length];
        }
    }
}