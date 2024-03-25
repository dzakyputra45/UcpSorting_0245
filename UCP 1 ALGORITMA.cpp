// 1.Jelaskan bagaimana algoritma Insertion Sort membandingkan serta menukar elemen-elemen.?
//   Dengan cara mencari elemen terkecil terlebih dahulu 
//
// 2.Jelaskan bagaimana algoritma Selection Sort membandingkan serta menukar elemen-elemen.?
//  Mencari Elemen Terkecil: Algoritma Selection Sort dimulai dengan memilih elemen pertama sebagai elemen terkecil 
// (dianggap demikian sementara).Kemudian, algoritma akan membandingkan elemen ini dengan semua elemen yang tersisa 
// dalam array untuk mencari elemen terkecil yang sebenarnya.
// 
// 3.Dalam algorithma sortir, bagaimana cara untuk mengetahui jumlah langkah yang dilakukan? Jelaskan.
//   Dengan cara melihat hasil display


#include <iostream>

void selectionSort(int DzakyPutra[], int n) {
    for (int j = 0; j < n - 1; ++j) {
        int min_index = j;
        for (int i = j + 1; i < n; ++i) {
            if (DzakyPutra[i] < DzakyPutra[min_index]) {
                min_index = i;
            }
        }
        // Swap DzakyPutra[j] with DzakyPutra[min_index]
        int temp = DzakyPutra[j];
        DzakyPutra[j] = DzakyPutra[min_index];
        DzakyPutra[min_index] = temp;
    }
}

int main() {
    const int size = 45;
    int DzakyPutra[size];

    // Input data
    std::cout << "Masukkan " << size << " angka:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> DzakyPutra[i];
    }

    // Panggil fungsi selectionSort untuk mengurutkan data
    selectionSort(DzakyPutra, size);

    // Tampilkan data setelah diurutkan
    std::cout << "Data setelah diurutkan:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << DzakyPutra[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
