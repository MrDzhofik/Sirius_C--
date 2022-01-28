#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i, c = 0, h = 0;
    cin >> n;
    vector<int> v(n), ch, nech;
    for (i = 0; i < n; i++){
        cin >> v[i];
    }
    for (i = 0; i < n; i++){
        if (v[i] % 2 == 0){
            ch.push_back(v[i]);
            c++;
        }
        else {
            nech.push_back(v[i]);
            h++;
        }
    }
    for (i = 0; i < h; i++){
        cout << nech[i] << ' ';
    }
    cout << endl;
    for (i = 0; i < c; i++){
        cout << ch[i] << ' ';
    }
    cout << endl;
    if (c >= h){
        cout << '4';
    }
    else {
        cout << '3';
    }
//    int n, i;
//    cin >> n;
//    vector<int> v(n);
//    for (i = 0; i < n; i++){
//        cin >> v[i];
//    }
//    for (i = 0; i < n; i++){
//        if (v[i] % 2 == 0){
//            cout << v[i] << ' ';
//        }
//    }
    return 0;
}
