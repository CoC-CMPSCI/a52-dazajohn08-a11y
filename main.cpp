
#include <iostream>

using namespace std;

int main()
{
    int num, max = INT_MIN;  
    for (int i = 0; i < 10; i++){
        cin >> num;
        if(i == 0 || max < num){
            max = num;
        }
    }
    cout << "max: "<< max << endl;
    return 0;
}