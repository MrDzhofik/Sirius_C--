#include <iostream>

using namespace std;

int main()
{
    int x, cnt;
    float sum, ans;
    cin >> x;
    sum += x;
    cnt = 1;
    while (x != 0){
        cin >> x;
        sum += x;
        cnt += 1;
    }
    cnt -= 1;
    ans = sum / cnt;
    cout << ans;
//    int x, y, z, cnt;
//    cin >> y;
//    cin >> z;
//    cin >> x;
//    cnt = 0;
//    if ((z > x) && (z > y)){
//        cnt += 1;
//    }
//    while (x != 0){
//        y = z;
//        z = x;
//        cin >> x;
//        if ((z > x) && (z > y) && (x != 0)){
//          cnt += 1;
//        }
//    }
//    cout << cnt;
//    int x, y, cnt;
//    cin >> x;
//    cnt = 0;
//    while (x != 0){
//        y = x;
//        cin >> x;
//        if ((x > y) && (x != 0)){
//            cnt += 1;
//        }
//    }
//    cout << cnt;
//    int x, i;
//    i = 2;
//    cin >> x;
//    while (x % i != 0){
//        i += 1;
//    }
//    cout << i;
//    int x, p, y, ans;
//    cin >> x >> p >> y;
//    ans = 0;
//    while (x < y){
//        x = (x * p) / (p - 1);
//        ans += 1;
//    }
//    cout << ans;
//    int x, f1, f2, f3, ans;
//    cin >> x;
//    f1 = 1;
//    f2 = 2;
//    ans = 3;
//    while (f2 < x){
//        f3 = f1;
//        f1 = f2;
//        f2 += f3;
//        ans += 1;
//    }
//    if (f2 != x){
//        ans = -1;
//    }
//    cout << ans;
//    int x;
//    cin >> x;
//    while (x % 13 != 0){
//        cout << x << endl;
//        x += 1;
//    }
    return 0;
}
