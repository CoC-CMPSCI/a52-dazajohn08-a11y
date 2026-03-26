#include <iostream>

using namespace std;

int main()
{
    int num, max;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (i == 0 || num > max) {
            max = num;
        }
    }
    cout << "max: " << max << endl;
    return 0;
}