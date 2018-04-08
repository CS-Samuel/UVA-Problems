

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int numberReverse(int number);

int main() {
    
    int numCases;
    cin >> numCases;
    
    for (int i=0; i < numCases; i++)
    {
        int currentNumber, count = 0;
        cin >> currentNumber;

        int reverseNumber = numberReverse(currentNumber);

        while (currentNumber != reverseNumber)
        {
            currentNumber += reverseNumber;
            reverseNumber = numberReverse(currentNumber);
            ++count;
        }

        cout << count << " " << currentNumber << endl;
    }
   
    return 0;
}

int numberReverse(int number)
{
    if (number == 0) return 0;
    
    int reverseNumber = 0;
    vector<int> reverseNumberVector;
    
    while (number != 0)
    {
        reverseNumberVector.push_back(number%10);
        number /= 10;
    }
    
    for (int i=0; i<reverseNumberVector.size(); i++)
        reverseNumber += reverseNumberVector[i] * pow(10,reverseNumberVector.size()-i-1);
    
    return reverseNumber;
}
