#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void input (int *arr[], int n, int m);
void output (int *arr[], int n, int m);
void solve (int* arr[], int n, int m);
int isuniq (int* arr, int m);
int main ()
{
    int n = 0, m = 0, i = 0, j = 0;
    cin >> n >> m;
    int **arr = new int* [n];
    for (i = 0; i < n; i++)
    arr[i] = new int[m];
    input(arr, n, m);
    cout << "Before:\n";
    output(arr, n, m);
    cout << "After:\n";
    solve( arr, n, m);
    return 0;
}

void input (int *arr[], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
}

void output (int *arr[], int n, int m)
{
    for (int i = 0; i < n; i++)
        {for (int j = 0; j < m; j++)
            cout << arr[i][j]<< " ";
        cout << endl;}
}

int isuniq (int* arr, int m)
{ 
    for (int i=0; i < m-1; i++ )
        for (int j=i+1; j<m; j++) {
            if (arr[i] == arr[j]) {
                return 0;
            }
        }
    return 1;
}

void solve (int* arr[], int n, int m)
{ 
    for (int i=0; i<n; i++)
        if (isuniq(arr[i], m) == 1)
        {
            delete [] arr[i];
            arr[i] = NULL;
        }
    for (int i =0; i<n; i++)
        if (arr[i] != NULL)
        { for (int j=0; j<m; j++)
            cout << arr[i][j]<<" ";
            cout <<endl;}


}
