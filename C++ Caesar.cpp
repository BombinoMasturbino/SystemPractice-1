#include <iostream>
#include <string>

using namespace std;

string caesar(string t, int s, bool e) {
  string r = "";
  for (char c : t) {
    if (isalpha(c)) {
      char b = islower(c) ? 'a' : 'A';
      r += (char)((c - b + (e ? s : -s) + 26) % 26 + b);
    } else {
      r += c;
    }
  }
  return r;
}

int main() {
  string t;
  int s, c;
  cout << "Текст: "; getline(cin, t);
  cout << "Сдвиг: "; cin >> s;
  cout << "1.Шифр 2.Дешифр: "; cin >> c;
  cout << (c == 1 ? "Шифр: " : "Дешифр: ") << caesar(t, s, c == 1) << endl;
  return 0;
}