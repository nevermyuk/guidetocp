#include <iostream>
#include <vector>

using namespace std;

long long unsigned n = 0;
vector<int> permutation;
vector<bool> chosen;

void search()
{
    if (permutation.size() == n)
    {
        cout << "{ ";
        for (vector<int>::const_iterator i = permutation.begin(); i != permutation.end(); ++i)
        {
            cout << *i << ' ';
        }
        cout << "}"<<"\n";
    }
    else
    {
        for (int i = 1; i <= n ;i++)
        {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main()
{
    cin >> n;
    chosen.resize(n + 1);
    search();
}