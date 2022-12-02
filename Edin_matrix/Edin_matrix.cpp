#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    double** matrix = new double* [N];
    for (int i = 0; i < N; ++i)
        matrix[i] = new double[N] {0};

    for (int i = 0; i < N; i++)
        matrix[i][i] = 1;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

