#include <iostream>

using namespace std;

int main(){
    
    int number_student;
    float score, total, average;
    
    number_student = 1;
    total =0;
    cout << "rata-rata nilai kelas";
    cout << "\n---------------------\n";
    cout << "Masukan nilai" << endl;
    
    while (number_student <= 15){
        cout << "Siswa Absen " << number_student << ": ";
        cin >> score;
        total += score;
        number_student += 1;
    }
    average = total / (number_student -1);
    cout << "\nJadi, rata-rata nilai kelas adalah" << average;
    
    return 0;
}
