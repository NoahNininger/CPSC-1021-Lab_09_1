#include <iostream>
#include <string>
#include <vector>

#include "accum.h"

using namespace std;

int main()
{
    vector<int> vec;
    vector<string> vec2;
    int temp;
    string temp2;

    cout << "Enter four numbers: ";
    for (int i = 0; i < 4; ++i)
    {   
        cin >> temp;
        vec.push_back(temp);
    }

    cout << "The sum of the numbers is " << accum<int>(vec) << endl;

    cout << "Enter four strings: ";
    for (int i = 0; i < 4; ++i)
    {
        cin >> temp2;
        vec2.push_back(temp2);
    }

    cout << "The sum of the strings is " << accum(vec2) << endl;

    return 0;
}
