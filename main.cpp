#include <iostream>
#include <string>

using namespace std;

bool cardValid(string num)
{
        int numLen = num.length();
        int digitSums = 0;
        bool alternate = false;

        for (int i = numLen-1; i>=0; i--)
        {
            int digit = num.at(i) - '0';

            if (alternate == true)
            {
                digit = digit*2;
            }
            digitSums += digit/10;
            digitSums += digit%10;

            alternate = !alternate;
        }
        return (digitSums % 10 == 0);
        cout << "Length of number is: " << numLen << endl;

}

int main()
{
    string number;
    cout << "Enter a number: " << endl;
    cin >> number;

    if (cardValid(number))
    {
        cout << "VALID" << endl;
    }
    else
    {
        cout << "INVALID" << endl;
    }
    cardValid(number);
    return 0;
}
