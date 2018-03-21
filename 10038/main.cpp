//A sequence of n > 0 integers is called a jolly jumper if the absolute values of the difference between successive elements take on all the values 1 through n − 1. For instance,
//1 4 2 3
//is a jolly jumper, because the absolutes differences are 3, 2, and 1 respectively. The definition implies that any sequence of a single integer is a jolly jumper. You are to write a program to determine whether or not each of a number of sequences is a jolly jumper.
//Input
//Each line of input contains an integer n ≤ 3000 followed by n integers representing the sequence. Output
//For each line of input, generate a line of output saying ‘Jolly’ or ‘Not jolly’. Sample Input
//4 1 4 2 3
//5 1 4 2 -1 6
//Sample Output
//Jolly
//Not jolly


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> list;
    int list_size;
    
    while (cin >> list_size)
    {
        vector<int> list(list_size);
        
        for (int i=0; i<list_size; i++)
            cin >> list[i];
        
        vector<int> absolutes(list_size-1);
        
        for (int j=0; j<list_size-1; j++)
            absolutes[j] = abs (list[j]-list[j+1]);
        
        sort(absolutes.begin(), absolutes.end());
        
        vector<int> checkList(list_size-1);
        
        for (int k=0; k<list_size-1; k++)
            checkList[k] = k+1;
        
        
        if (checkList == absolutes)
            cout << "Jolly";
        else
            cout << "Not jolly";
        
    }
    
    
    return 0;
}
