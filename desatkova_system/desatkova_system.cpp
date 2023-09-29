#include <iostream>
#include <string>
using namespace std;
int main()
{
    string des = "";
    int temp = 128;
    int num;
    bool started = false;
    do
    {
        cout << "Enter num = ";
        cin >> num;
    } while (num > 255 || num < 0);
    
    while (temp >= 1)
    {
        if (num >= temp)
        {
            des += "1";
            num -= temp;
            started = true;
        }
        else if (started)
        {
            des += "0";
        }
        temp /= 2;
    }

    cout << des;
    return 0;

}