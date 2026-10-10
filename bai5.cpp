#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N;
    cin >> K;
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if(i % K == 0) count++;
    }
    cout << count;
    return 0;
}