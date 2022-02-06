#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, temp, tmp;
    cin >> n;
    vector<vector<int> > t(n, vector<int> (n, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> t[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i == j) && (j <= n)){
                temp = t[i][i];
                tmp = t[n - i - 1][i];
                t[i][i] = tmp;
                t[n - i - 1][i] = temp;
            }
        }
    }
    for (int i = 0; i < t.size(); ++i){
        for (int j = 0; j < t[i].size(); ++j){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            if (j <= i){
//                temp = t[i][j];
//                t[i][j] = t[j][i];
//                t[j][i] = temp;
//                cout << t[i][j] << endl;
//            }
//    }
//    }
//    for (int i = 0; i < t.size(); ++i){
//        for (int j = 0; j < t[i].size(); ++j){
//            cout << t[i][j] << " ";
//        }
//        cout << endl;
//    }
//    maxi = -10000000;
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            if (t[i][j] > maxi){
//                maxi = t[i][j];
//                imax = i;
//                jmax = j;
//            }
//        }
//    }
//    cout << imax << ' ' << jmax;
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < m; ++j){
//            if ((i + j) % 2 == 0){
//                t[i][j] = 1;
//            }
//            else{
//                t[i][j] = 0;
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < m; ++j){
//            cout << t[i][j] << " ";
//        }
//        cout << endl;
//    }
//    int n, m;
//    cin >> n >> m;
//    vector<vector<int> > t(n, vector<int> (m, 0));
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < m; ++j){
//            t[i][j] = j * n + i;
//        }
//    }
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < m; ++j){
//            cout << t[i][j] << " ";
//        }
//        cout << endl;
//    }
//    int n, m;
//    cin >> n >> m;
//    vector<vector<int> > t(n, vector<int> (m));
//    int now = 0;
//    for (int i = 0; i < t.size(); ++i){ // количество строк таблицы - t.size()
//       if (i % 2 == 0){
//          for (int j = 0;j < t[i].size(); ++j){ //количество элементов на i-той строке - t[i].size()
//              t[i][j] = now;
//              ++now;
//          }
//       }
//       else{
//          for (int j = t[i].size() - 1;j >= 0; --j){
//              t[i][j] = now;
//              ++now;
//          }
//       }
//    }
//    for (int i = 0; i < t.size(); ++i){
//        for (int j = 0; j < t[i].size(); ++j){
//            cout << t[i][j] << " ";
//        }
//        cout << endl;
//    }
//    int n, m, second;
//    cin >> n >> m;
//    vector<vector<int> > t(n, vector<int> (m, 0));
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < m; ++j){
//            second = i * m + j;
//            t[i][j] = second;
//        }
//    }
//    for (int i = 0; i < n; ++i){
//        for (int j = 0; j < m; ++j){
//            cout << t[i][j] << " ";
//        }
//        cout << endl;
//    }
    return 0;
}
