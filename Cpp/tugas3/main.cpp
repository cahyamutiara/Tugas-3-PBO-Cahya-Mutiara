#include<iostream>
using namespace std;

class Data {
    public :
        void array1D();
        void array2D();
};

void Data::array1D() {
    int arr[10];
    int i;
    int sum = 0, avg = 0;
    
    cout << "Masukkan 10 elemen array : ";
    for (i=0; i < 10; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "\nElemen array adalah : " << endl;
    for (i = 0; i < 10; i++) {
        cout << arr[i] << "  ";
    }
}

void Data::array2D() {
    int i, j, m, n, A[10][10], flag = 0;
    
    cout << "Masukkan jumlah baris : ";
    cin >> m;
    cout << "Masukkan jumlah kolom : ";
    cin >> n;
    if (m != n) {
        cout << "\nBukan matriks bujur sangkar!!" << endl;
        exit(0);
    }
    
    cout << "\nMasukkan nilai array" << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << "Nilai array baris ke-" << i << " kolom ke-" << j << " : ";
            cin >> A[i][j];
        }
    }
    i = 0;
    do {
        j = 0;
        while ( j < n) {
            if ((A[i][j] != 1) && (A[j][i] != 0)) {
                flag = 1;
                break;
            }
            j++;
        }
        i++;
    } while(i < m);
    
    if (flag == 0) {
        cout << "\nMatriks merupakan matriks identitas\n";
    } else {
        cout << "\nMatriks bukan termasuk matriks identitas\n";
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int main () {
    Data data = Data();
    data.array1D();
    data.array2D();
}
