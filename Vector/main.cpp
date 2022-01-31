#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i){
        cin >> v[i];
    }
    int k, x;
    cin >> k >> x;
    v.push_back(0);
    ++n;
    for (int i = n - 1; i > k; --i){
        v[i] = v[i - 1];
    }
    v[k] = x;
    for (int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
//    int n, i = 0, j = 0;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; ++i){
//        cin >> v[i];
//    }
//    for (int i = 0; i < n; ++i){
//        bool flag = false;
//        for (int j = 0; j < n; ++j){
//            if ((v[i] == v[j]) && (i != j)){
//                flag = true;
//            }
//        }
//        if (!flag){
//            cout << v[i] << " ";
//        }
//    }
//    int n, i, num;
//    cin >> n;
//    vector<int> v(9);
//    for (i = 1; i <= n; i++){
//        cin >> num;
//        ++v[num - 1];
//    }
//    for (i = 0; i < 9; i++){
//        cout << v[i] << ' ';
//    }
//    int n, i, minint, maxint, min_i, max_i, sum = 0, production = 1;
//    cin >> n;
//    vector<int> v(n);
//    for (i = 0; i < n; i++){
//        cin >> v[i];
//        if (v[i] > 0){
//            sum += v[i];
//        }
//    }
//    minint = 1000;
//    maxint = -1000;
//    for (i = 0; i < n; i++){
//        if (v[i] < minint){
//            minint = v[i];
//            min_i = i;
//        }
//        if(v[i] > maxint){
//            maxint = v[i];
//            max_i = i;
//        }
//    }
//    if (min_i < max_i){
//        for (i = min_i + 1; i < max_i; i++){
//            production *= v[i];
//        }
//    }
//    else{
//        for (i = max_i + 1; i < min_i; i++){
//            production *= v[i];
//        }
//    }
//    cout << sum << ' ' << production;
//    int n, i, min_pos;
//    cin >> n;
//    vector<int> v(n);
//    for (i = 0; i < n; i++){
//        cin >> v[i];
//    }
//    min_pos = 1000;
//    for (i = 0; i < n; i++){
//        if ((v[i] < min_pos) && (v[i] > 0)){
//            min_pos = v[i];
//        }
//    }
//    cout << min_pos;
//    int n, i, c = 0, h = 0;
//    cin >> n;
//    vector<int> v(n), ch, nech;
//    for (i = 0; i < n; i++){
//        cin >> v[i];
//    }
//    for (i = 0; i < n; i++){
//        if (v[i] % 2 == 0){
//            ch.push_back(v[i]);
//            c++;
//        }
//        else {
//            nech.push_back(v[i]);
//            h++;
//        }
//    }
//    for (i = 0; i < h; i++){
//        cout << nech[i] << ' ';
//    }
//    cout << endl;
//    for (i = 0; i < c; i++){
//        cout << ch[i] << ' ';
//    }
//    cout << endl;
//    if (c >= h){
//        cout << '4';
//    }
//    else {
//        cout << '3';
//    }
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
