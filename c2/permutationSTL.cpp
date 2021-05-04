#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 0;
vector<int> permutation;

void search()
{
    for (int i = 1; i <= n; i++)
    {
        permutation.push_back(i);
    }
    do
    {
        cout << "{ ";
        for (vector<int>::const_iterator i = permutation.begin(); i != permutation.end(); ++i)
        {
            cout << *i << ' ';
        }
        cout << "}"
             << "\n";
    } while (next_permutation(permutation.begin(), permutation.end()));
}

int main()
{
    cin >> n;
    search();
}