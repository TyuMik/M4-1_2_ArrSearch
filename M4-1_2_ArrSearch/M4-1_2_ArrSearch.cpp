#include <iostream>

int arrCount(int* arr, int size, int N) {
    int left = 0;
    int right = size - 1;
    int answ = 0;
    while (left <= right) {
        int middle = (left + right) / 2;
        if ((arr[middle] > N) && (arr[middle - 1] <= N)) {
            answ = size - middle;
        }
        if (arr[middle] <= N) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return answ;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    const int size = 9;
    int Arr[size] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
    std::cout << "Введите точку отсчёта: ";
    std::cin >> N;
    std::cout << "Количество элементов в массиве, больших чем " << N << ": " << arrCount(Arr, size, N);
    return 0;
}