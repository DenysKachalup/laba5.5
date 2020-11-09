#include <iostream>

using namespace std;

double C(int N, int K)
{
    if (N < K)
        return 0;
    if (K == 0)
        return 1;
    else
        return ((N - K + 1) / double(K) * C(N, K - 1));

}

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j <= n; j++)
    {
        for (int i = 0; i <= j; i++) {
            cout << C(j, i) << " ";

        }cout << " \n";
    }

    return 0;
}
