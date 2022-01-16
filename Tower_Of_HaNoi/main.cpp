#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <climits>

using namespace std;

void towerOfHaNoi(int n, string src = "A", string auxi = "B", string des = "C")
{
    if (n == 1)
    {
        cout << "From " << src << " to " << des << '\n';
        return;
    }
    towerOfHaNoi(n - 1, src, des, auxi);
    cout << "From " << src << " to " << des << '\n';
    towerOfHaNoi(n - 1, auxi, src, des);
}

int main()
{
    int n = 0;
    bool remake = false;
    do
    {
        cout << "\nHow many disks do you want to have in your tower? ";
        cin >> n;
        cout << "\n=======================================================\nThen, here is your solution:\n";
        towerOfHaNoi(n);
        cout << "Do you want to remake? (Type 0 for NO, 1 for YES) ";
        cin >> remake;
    } while (remake);
    return 0;
}