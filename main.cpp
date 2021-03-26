#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    ifstream fin("questions.txt");

    vector<string> arr;
    string temp;

    while (getline(fin, temp))
        arr.push_back(temp);

    int Size = arr.size() - 1;
    int count = Size;
    for (int i = 0; i < Size; i++) {
        int tempN = 1 + rand() % count;
        cout << arr[tempN] << "\n";
        auto iter = arr.cbegin();
        arr.erase(iter + tempN);
        count--;
        Sleep(15000);
    }
}