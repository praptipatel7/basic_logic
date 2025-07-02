//PATTERN-11
// 55555
// 54445
// 54345
// 54445
// 55555

//Method-1
#include <iostream>
using namespace std;

void patten(int n, int centerPoint)
{
    int x = (n + 1) / 2;
    int c = centerPoint;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int diff = abs(i - x);
            if (i == x)
            {
                cout << c + abs(x - j) << " ";
            }
            else if (j >= (x - diff) && j <= (x + diff))
            {
                cout << c + diff << " ";
            }
            else
            {
                cout << c + diff + min(abs(j - (x - diff)), abs(j - (x + diff))) << " ";
            }
        }
        cout << endl;
    }
    return;
}
int main()
{
    int a, b;
    cin >> a >> b;
    patten(a, b);
    return 0;
}

//Method-2
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     for (int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//             int layer = min(min(i, j), min(n - i + 1, n - j + 1));
//             cout << n - layer + 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }