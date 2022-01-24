#include <iostream>
#include <chrono>
#include <limits>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b;
    c = (b / a) + ((b + (b % a)) / (b + 1));
    cout << c;
    return 0;
}
//    double sum, n;
//    int i;
//    n = 1/0.0;
//    cout << n;
//    for (i = 1; i++; i<n){
//        sum += i;
//    }
//    cout << sum;
//    return 0;
//    int pupil, apple;
//    cin >> pupil;
//    cin >> apple;
//    cout << (pupil - (apple % pupil)) % pupil;
//    auto start = chrono::system_clock::now();   // Получаем из встроенной библиотеки настоящее время в миллисекундах
//    string line = "";   // Строчка, которую мы заполняем
//
//    for (int j = 0; j <= 100000; j++) {      // Заполняем строчку алфавитом с помощью кодов символов
//        for (char i = 65; i <= 90; i++) {
//            line += i;
//        }
//    }
//    cout << line;   // Вывести результат
//
//    auto end = chrono::system_clock::now();
//    cout << '\nВремя, за которое выполнено действие (в миллисекундах): ';
//    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << endl;   // Разница
//
//    return 0;
//    int time;
//    cin >> time;
//    cout << time / 60 << ' ' << time % 60;

//    int num, f, s, t, last;
//    cin >> num;
//    f = num / 1000;
//    s = num % 1000 / 100;
//    t = num % 1000 % 100 / 10;
//    last = num % 1000 % 100 % 10;
//    cout << f + s + t + last;

//    int num;
//    cin >> num;
//    cout << num % 100 / 10;

//    int num;
//    cin >> num;
//    cout << num + 2 - num % 2;

//    int rub, kop, quan, rubbles, kopeik, total;
//    cin >> rub;
//    cin >> kop;
//    cin >> quan;
//    total = rub * 100 + kop;
//    rubbles = total / 100 * quan + kop * quan / 100;
//    kopeik = total % 100 * quan % 100;
//    cout << rubbles << ' ' << kopeik;

//     int a, b, c;
//     cin >> a;
//     cin >> b;
//     cin >> c;
//     cout << (c - a) / b;

