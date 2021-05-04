#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	long long num;
	cin >> num;
    cout << num << " ";
	while(num != 1 ){
        if (num % 2 == 0) {
            num  /= 2;
        } else {
            num = num * 3 + 1;
        }
        cout << num << " ";
	}
}