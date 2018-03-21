//
//  main.cpp
//  3n+1 Problem
//
//  Created by samuel on 10/5/17.
//  Copyright © 2017 Samuel. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int value1, value2, range, maxCycles, temp, n;
    bool reverse = false;
    
    while (cin >> value1 >> value2)
    {

        
        if (value2 < value1)
        {
            temp = value2;
            value2 = value1;
            value1 = temp;
            reverse = true;
        }

        
        range = value2 - value1 + 1;
        
        
        vector<int> checkValues(range);
        vector<int> cycles(range, 0);
        
        for (int i=0; i < range; i++)
            checkValues[i] = value1 + i;
        
        for (int i=0; i<range; i++)
        {
            n = checkValues[i];
            
            while (n != 1)
            {
                if (n % 2 == 0)
                    n = n/2;
                else
                    n = 3*n+1;
            
                cycles[i] = cycles[i]+1;
            }
            
            cycles[i] = cycles[i]+1;
        }
        
        maxCycles = *max_element(cycles.begin(), cycles.end());
        
    
      if (reverse == false)
          cout << value1 << " " << value2 << " " << maxCycles;
      else
          cout << value2 << " " << value1 << " " << maxCycles;

        cout << endl;
    }
    
    return 0;
}

