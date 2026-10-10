#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int i = 1, giaithua = 1;
    while (i <= N && N <= 12) {
        giaithua *= i;
        i++;
    }
    cout << giaithua;
    return 0;
}