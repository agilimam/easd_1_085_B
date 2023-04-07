// 1. Karena suatu masalah yang memiliki banyak data akan lebih mudah diselesaikan melalui algorithma
// 2. Prosedural dan objek
// 3. Metode, program ,
// 4. Quick Sort karena algoritma ini sangat cepat dan efisien , algoritma ini membagi array menjadi dua bagian , satu bagian elemen yang lebih kecil dan bagian satunya memuat elemen yang lebih besar dari pivot.Kemudian , algoritma ini dijalankan secara rekursif pada kedua bagian array tersebut hingga seluruh array terurut.
// 5. bubbleSort, insertionSort dan SelectionSort untuk linequer MergeSort
// 6.

#include <iostream>
using namespace std;

const int MAX_DATA = 125; // maximum number of data
const string INITIALS = "AI"; // change "j" to the two initials of your name
const string NICKNAME = "Agil"; // change "arr" with your nickname

// Procedure Input to get user input for the array
void input(int Agil[], int& n) {
    cout << "Masukkan jumlah data (maksimum " << MAX_DATA << "): ";
    cin >> n;

    if (n > MAX_DATA) {
        cout << "Jumlah data terlalu banyak. Maksimum data adalah " << MAX_DATA << "." << endl;
        exit(0); // terminate the program

    }

    for (int t = 0; t < n; t++) {
        cout << "Data ke-" << (t + 1) << ": ";
        cin >> Agil[t];
    }
}

// Algorithm to perform merge sort
void mergeSort(int Agil[], int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(Agil, low, mid);
    mergeSort(Agil, mid + 1, high);

    int i = low;
    int AI = mid + 1;
    int k = low;
    int B[MAX_DATA];

    while (i <= mid && AI <= high) {
        if (Agil[i] <= Agil[AI]) {
            B[k] = Agil[i];
            i++;
        }
        else {
            B[k] = Agil[AI];
            AI++;
        }
        k++;
    }
    while (i <= mid) {
        B[k] = Agil[i];
        i++;
        k++;
    }

    while (AI <= high) {
        B[k] = Agil[AI];
        AI++;
        k++;
    }
    for (int t = low; t <= high; t++) {
        Agil[t] = B[t];
    }
}

// Procedure Display to output the sorted array
void display(int a[], int n) {
    cout << "\nSetelah diurutkan:" << endl;
    for (int t = 0; t < n; t++) {
        cout << "Data ke-" << (t + 1) << ": " << a[t] << endl;
    }
}

int main() {
    int n;
    int a[MAX_DATA];


