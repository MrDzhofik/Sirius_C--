#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > t(n, vector<int> (m, 0));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if ((i + j) % 2 == 0){
                t[i][j] = 1;
            }
            else{
                t[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
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
