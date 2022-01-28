#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, i;
    cin >> a >> b >> c >> d;
    a += ((d - (a % d)) % d);
    for (i = a; i <= b; i += d){
        cout << i << ' ';
    }
//    int a, b, i;
//    cin >> a >> b;
//    a += (a % 2);
//    for (i = a; i <= b; i += 2){
//        cout << i << ' ';
//    }
//    long long n, i = 0;
//    cin >> n;
//    for (i = n; i > 0; i /= 10){
//        cout << i % 10 << " ";
//    }
//    int d;
//    cin >> d;
//    int mind = 1, maxd;
//    for (int i = 1; i < d ; ++i){
//        mind *= 10;
//    }
//    maxd = mind * 10 - 1;
//    for (int i = mind; i <= maxd; ++i){
//        cout << i << " ";
//    }
//    int n, i, put, ans = 0;
//    cin >> n;
//    for (i = 1; i <= n; i++){
//        cin >> put;
//        if (put == 0){
//            ans += 1;
//        }
//    }
//    cout << ans;
//    long long n, i, ans = 1;
//    cin >> n;
//    for (i = 1; i <= n; i++){
//        ans *= i;
//    }
//    if (n == 0){
//        ans = 0;
//    }
//    cout << ans;
//    int a, b, i;
//    cin >> a >> b;
//    if (a < b){
//        for (i = a; i <= b; i++){
//            cout << i << " ";
//        }
//    }
//    else {
//        for (i = a; i >= b; i--){
//            cout << i << " ";
//        }
//    }
    return 0;
}
