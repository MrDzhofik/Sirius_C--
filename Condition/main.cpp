#include <iostream>

using namespace std;

int main(){
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a;
    if (b > c) {
        if (a < b) {
            ans = b;
        }
    }
    else if (b < c){
        if (a < c) {
            ans = c;
        }
    }
    else if (a < c) {
        ans = c;
    }
    else {
        ans = b;
    }
    cout << ans;
//    int a, b, ans;
//    cin >> a >> b;
//    if (a > b){
//        ans = 1;
//    }
//    else if(a < b){
//        ans = 2;
//    }
//    else {
//        ans = 0;
//    }
//    cout << ans;
//    int year;
//    cin >> year;
//    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    if (a - c == b - d) {
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    if (a == c || b == d){
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    if ((a + b) % 2 == (c + d) % 2){
//        cout << "YES";
//    }
//    else {
//        cout << "NO";
//    }
//    int n;
//    cin >> n;
//    if (n % 2 == 0){
//        cout << n / 2;
//    }
//    else{
//        cout << n;
//    }
    return 0;
}

