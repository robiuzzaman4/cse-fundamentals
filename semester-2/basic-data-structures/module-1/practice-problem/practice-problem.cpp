#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0, sum = 0;
    while (i < n) // O(N)
    {
        int j = 0;
        while (j < n) // O(N)
        {
            sum += j;
            j += 2;
        }
        i++;
    }

    return 0;
}

// complexity: O(N*N)

/**
 *
 *  1. O(N*N)
 *  2. O(N*N)
 *  3. O(N*sqrtN)
 *  4. O(N*N*N)
 *  5. O(sqrt(N))
 *  6. O(NlogN)
 *  7. O(N*NlogN)
 */

//  5
// for(int i=0;i*i<n;i++)
//     {
//         sum += i;
//     }


//     for(int i=0;i<n;i++)
//     {
//         sum += i;
//         i*=k;
//     }


// 