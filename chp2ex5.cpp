// 2-5

/* 정사각형
#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++)
            cout << "*";
        cout << "\n";
     }
     return 0;
}
*/

/* 직사각형
#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for(j = 0; j < 20; j++)
            cout << "*";
        cout << "\n";
     }
     return 0;
 }
 */

/* 삼각형
#include<iostream>

using namespace std;

int main() 
{
    for (int i = 1; i <= 5; i++) {
        {
            for (int j = 1; j <= 5 - i; j++)
                cout << " ";
            for (int j = 1; j <= 2 * i - 1; j++)
                cout << "*";

        }
        cout << endl;
    }
    return 0;
}
*/
