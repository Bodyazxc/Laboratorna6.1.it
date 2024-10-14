#include <iostream>
#include <iomanip>

using namespace std;


void create(int* arr, const int SIZE) {
    static const int temp[22] = { -10, -5, 0, 2, 3, 6, 8, 9, 12, 15, 18, 21, 25, 28, 30, 33, 35 };
    for (int i = 0; i < SIZE; i++) {
        arr[i] = temp[i];
    }
}


void Print(int* arr, const int SIZE) {
    cout << "";  
    for (int i = 0; i < SIZE; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}


int findElements(int* arr, const int SIZE, int* result, int& sum) {
    int count = 0;
    sum = 0;  
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] > 0 || arr[i] % 3 != 0) {
            result[count++] = arr[i];
            
            if (arr[i] > 0 && arr[i] % 3 != 0) {
                sum += arr[i];  
                arr[i] = 0;  
            }
        }
    }
    return count;
}

int main() {
    const int SIZE = 16;  
    int arr[SIZE];
    int result[SIZE];
    int resultSize;
    int sum;  

    create(arr, SIZE);
    Print(arr, SIZE);
    resultSize = findElements(arr, SIZE, result, sum);

    cout << setw(8) << "Size = " << resultSize << endl;  
    cout << setw(8) << "Sum =  " << sum << endl;         

    Print(arr, SIZE); 

    return 0;
}
