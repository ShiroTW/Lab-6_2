#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end, int i);
void PrintArray(int* a, const int numberOfElements, int i);
int SumOfEvenElements(int* a, int numberOfElements, int i);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 22;
    int a[n];

    int Low = -10;
    int High = 35;
    CreateArrayWithRandomElements(a, n, Low, High, 0);

    cout << "Array with Random elements:" << endl;
    PrintArray(a, n, 0);

    int evenSum = SumOfEvenElements(a, n, 0);
    cout << "Sum of even elements: " << evenSum << endl;

    return 0;
}

void CreateArrayWithRandomElements(int* a, int numberOfElements, int start, int end, int i) {
    if (i < numberOfElements) {
        a[i] = start + rand() % (end - start + 1);
        CreateArrayWithRandomElements(a, numberOfElements, start, end, i + 1);
    }
}

void PrintArray(int* a, const int numberOfElements, int i)
{
    if (i < numberOfElements) {
        cout << "a[" << i << "] = " << a[i] << "; ";
        PrintArray(a, numberOfElements, i + 1);
    }
    else {
        cout << endl;
    }
}

int SumOfEvenElements(int* a, int numberOfElements, int i) {
    if (i >= numberOfElements) {
        return 0;
    }
    return (a[i] % 2 == 0 ? a[i] : 0) + SumOfEvenElements(a, numberOfElements, i + 1);
}