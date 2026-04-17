#include <iostream>
using namespace std;
int main()
{

    // 2d Array --> in stack memory
    // int arr[2][4] = {
    //     {2, 4, 6, 8},
    //     {1, 2, 3, 4}};

    // 2D array --> Heap memory
    //  4 -> row count
    //  3 -> col count
    int **arr = new int *[4];

    for (int i = 0; i < 4; i++)
    {
        // create 1D array for each pointer
        arr[i] = new int[3];
    }

    // taking input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl
         << " Printing the 2D array" << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }


    //deleting each array individualy

    for(int i = 0; i < 4; i ++){
        delete[] arr[i];
    }
    return 0;
}