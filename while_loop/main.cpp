#include <iostream>

using namespace std;

int main()
{
    int x, f1, f2, f3, ans;
    cin >> x;
    f1 = 1;
    f2 = 2;
    ans = 3;
    while (f2 < x){
        f3 = f1;
        f1 = f2;
        f2 += f3;
        ans += 1;
    }
    if (f2 != x){
        ans = -1;
    }
    cout << ans;
//    int x;
//    cin >> x;
//    while (x % 13 != 0){
//        cout << x << endl;
//        x += 1;
//    }
    return 0;
}
