#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
// 24i2096 Moiz Hassan CY A
int main()
{
    unsigned int num1, num2, num3;
    string color1;
    string color2;
    string color3;

    srand(time(0));
    num1 = (rand() % 36) + 1;
    num2 = (rand() % 36) + 1;
    num3 = (rand() % 36) + 1;

    cout << "Random number 1: " << num1 << endl;
    cout << "Random number 2: " << num2 << endl;
    cout << "Random number 3: " << num3 << endl;
    cout << endl;
    // assigning color to num1
    if (num1 == 1 || num1 == 6 || num1 == 7 || num1 == 12 || num1 == 17 || num1 == 20 || num1 == 28 || num1 == 33)
    {
        color1 = "Green";
    }
    if (num1 == 2 || num1 == 11 || num1 == 13 || num1 == 18 || num1 == 19 || num1 == 24 || num1 == 29 || num1 == 32)
    {
        color1 = "Red";
    }
    if (num1 == 3 || num1 == 10 || num1 == 14 || num1 == 23 || num1 == 25 || num1 == 30 || num1 == 31 || num1 == 36)
    {
        color1 = "Blue";
    }
    if (num1 == 4 || num1 == 9 || num1 == 15 || num1 == 22 || num1 == 26 || num1 == 35)
    {
        color1 = "Orange";
    }
    if (num1 == 5 || num1 == 8 || num1 == 16 || num1 == 21 || num1 == 27 || num1 == 34)
    {
        color1 = "Grey";
    }
    // assigning color to num2
    if (num2 == 1 || num2 == 6 || num2 == 7 || num2 == 12 || num2 == 17 || num2 == 20 || num2 == 28 || num2 == 33)
    {
        color2 = "Green";
    }
    if (num2 == 2 || num2 == 11 || num2 == 13 || num2 == 18 || num2 == 19 || num2 == 24 || num2 == 29 || num2 == 32)
    {
        color2 = "Red";
    }
    if (num2 == 3 || num2 == 10 || num2 == 14 || num2 == 23 || num2 == 25 || num2 == 30 || num2 == 31 || num2 == 36)
    {
        color2 = "Blue";
    }
    if (num2 == 4 || num2 == 9 || num2 == 15 || num2 == 22 || num2 == 26 || num2 == 35)
    {
        color2 = "Orange";
    }
    if (num2 == 5 || num2 == 8 || num2 == 16 || num2 == 21 || num2 == 27 || num2 == 34)
    {
        color2 = "Grey";
    }
    // assigning color to num3
    if (num3 == 1 || num3 == 6 || num3 == 7 || num3 == 12 || num3 == 17 || num3 == 20 || num3 == 28 || num3 == 33)
    {
        color3 = "Green";
    }
    if (num3 == 2 || num3 == 11 || num3 == 13 || num3 == 18 || num3 == 19 || num3 == 24 || num3 == 29 || num3 == 32)
    {
        color3 = "Red";
    }
    if (num3 == 3 || num3 == 10 || num3 == 14 || num3 == 23 || num3 == 25 || num3 == 30 || num3 == 31 || num3 == 36)
    {
        color3 = "Blue";
    }
    if (num3 == 4 || num3 == 9 || num3 == 15 || num3 == 22 || num3 == 26 || num3 == 35)
    {
        color3 = "Orange";
    }
    if (num3 == 5 || num3 == 8 || num3 == 16 || num3 == 21 || num3 == 27 || num3 == 34)
    {
        color3 = "Grey";
    }

    cout << "Color 1: " << color1 << endl;
    cout << "Color 2: " << color2 << endl;
    cout << "Color 3: " << color3 << endl;
    cout << endl;
    // chcking the colours if they are same or two same or all are different
    if (color1 == color2 && color2 == color3 && color1 == color3)
    {
        cout << "ALL colors are same" << endl;
    }
    if ((color1 == color2 && color2 != color3) || (color2 == color3 && color1 != color3) || (color1 == color3 && color2 != color3))
    {
        cout << "Two colors are same" << endl;
    }
    if ((color1 != color2 && color2 != color3 && color1 != color3))
    {
        cout << "All colors are different" << endl;
    }
    return 0;
}
