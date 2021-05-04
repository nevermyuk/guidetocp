#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n;
vector<int> subset;

void search(int k)
{
    if (k == n + 1)
    {
        for (vector<int>::const_iterator i = subset.begin(); i != subset.end(); ++i)
        {
            std::cout << *i << ' ';
        }
        std::cout << "\n";
    }
    else
    {
        // include k in subset
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
        // don't include k in subset
        search(k + 1);
    }
}

int main()
{
    cin >> n;
    cout << "\n";
    search(1);
}