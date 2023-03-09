/*
time out
*/

#include <iostream>

using namespace std;

int checkTrue(int checkNum);

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    int n, a = 0, b = 0;

    cin >> T ;

    for (int i = 0; i < T; i++)
    {
        cin >> n;
        for (int j = 0; j <= n; j++)
        {

            if (checkTrue(n/2-j) && checkTrue(n/2+j))
            {
                a= n/2 -j;
                b = n/2 + j;
                break;
            }
        }

        cout << a << " " << b<<"\n";
    }
}

int checkTrue(int checkNum)
{
    int count = 0;

    for (int i = 1; i <= checkNum; i++)
    {
        if (checkNum % i == 0)
            count++;
    }

    if (count == 2)
        return 1;
    else
        return 0;
}