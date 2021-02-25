#include <iostream>
#include <vector>
using namespace std;

class HouseNumbering
{
public:
    vector<int> prepareDigits(int firstHouse, int numberOfHouses)
    {
        vector<int> v(10);
        for (int i = 0; i < numberOfHouses; i++)
        {
            int n = firstHouse;
            while (n)
            {
                v[n % 10]++;
                n /= 10;
            }
            firstHouse += 2;
        }
        return v;
    }
};
