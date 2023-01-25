#include <iostream>
using namespace std;
char gettowlower(char &ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        // cout << ch << endl;
        return ch;
    }
    else
    {
        char c1 = ch - 'A' + 'a';
        cout << c1 << endl;
        return c1;
    }
}
char getuper(char &ch1)
{
    if (ch1 >= 'A' && ch1 <= 'Z')
    {
        cout << ch1 << endl;
        return ch1;
    }
    else
    {
        char c1 = ch1 - 'a' + 'A';
        cout << c1 << endl;
        return c1;
    }
}
bool checkpalindrome(char ch2[4], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (gettowlower(ch2[s]) != gettowlower(ch2[e]))
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    cout << "1" << endl;
    return 1;
}
bool check_palindrome_byrecussion(string &ch5, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (ch5[start] != ch5[end])
    {
        return false;
    }
    else
    {
        return check_palindrome_byrecussion(ch5, start++, end--);
    }
}
void getrevrsestring(string &ch3, int s, int e)
{
    cout << " recrsive call  " << ch3 << endl;
    if (s >= e)
    {
        return;
    }
    swap(ch3[s], ch3[e]);
    s++;
    e--;
    getrevrsestring(ch3, s, e);
}
void getrevrsestringbyloop(string &ch3, int s, int e)
{

    while (s <= e)
    {
        swap(ch3[s], ch3[e]);
        s++;
        e--;
    }
}
void get_reverse_chararray(char ch4[7], int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        swap(ch4[s], ch4[e]);
        s++;
        e--;
    }
}

int main(int argc, char const *argv[])
{
    char ch = 'A';
    string ch3 = "cat";
    char ch1 = 'q';
    char ch4[7];
    int size = 7;
    char ch2[4];
    string ch5 = "baab";
    gettowlower(ch);
    getuper(ch1);
    cout << "enter chararray" << endl;
    cin >> ch2;
    checkpalindrome(ch2, 4);
    cout << ch3 << endl;
    getrevrsestring(ch3, 0, ch3.length() - 1);
    cout << ch3 << endl;
    getrevrsestringbyloop(ch3, 0, ch3.length() - 1);
    cout << ch3 << endl;
    cout << "enter char araray again " << endl;
    cin >> ch4;
    get_reverse_chararray(ch4, size);
    cout << ch4 << endl;

    bool c1 = check_palindrome_byrecussion(ch5, 0, ch5.length() - 1);
    if (c1)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "no palindrome";
    }

    return 0;
}
