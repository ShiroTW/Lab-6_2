#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end);
void PrintArray(int* a, const int numberOfElements);
int SumOfEvenElements(int* a, int numberOfElements);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 22;
    int a[n];

    int Low = -10;
    int High = 35;
    CreateArrayWithRandomElements(a, n, Low, High);

    cout << "Array with Random elements:" << endl;
    PrintArray(a, n);

    int evenSum = SumOfEvenElements(a, n);
    cout << "Sum of even elements: " << evenSum << endl;

    return 0;
}

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end) {
    for (int i = 0; i < numberOfElements; i++) {
        a[i] = start + rand() % (end - start + 1);
    }
}

void PrintArray(int* a, const int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++) {
        cout << "a[" << setw(1) << i << "] = " << setw(1) << a[i] << "; ";
    }
    cout << endl;
}

int SumOfEvenElements(int* a, int numberOfElements) {
    int sum = 0;
    for (int i = 0; i < numberOfElements; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}