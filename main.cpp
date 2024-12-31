#include <iostream>

using namespace std;

int main() {
    string keahlian, gender, target, bagianTubuh;
    int hariLatihan;
    float beratBadan, tinggiBadan;

    cout << "========================= Program Jadwal Olahraga =========================" << endl << endl;

    cout << "Masukkan keahlian Anda\n1.Mahir\n2.Pemula\nMasukkan pilihan anda: ";
    cin >> keahlian;
    cout << endl;
    cout << "Masukkan jenis kelamin\n1.Laki-laki\n2.Perempuan\nMasukkan pilihan anda [L/P]: ";
    cin >> gender;
    cout << endl;
    cout << "Masukkan berat badan anda  (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan anda (cm): ";
    cin >> tinggiBadan;
    cout << endl;
    cin.ignore();
    cout << "Bagian tubuh yang ingin dilatih\n1.Seluruh tubuh\n2.Otot perut\n3.Otot kaki\nMasukkan pilihan anda: ";
    getline(cin, bagianTubuh);
    cout << endl;
    cout << "Apa target olahraga Anda\n1.Mengurangi berat badan\n2.Membangun otot\nMasukkan pilihan anda: ";
    getline(cin, target);
    cout << endl;
    cout << "Berapa hari latihan dalam seminggu (1-7): ";
    cin >> hariLatihan;
    cout << endl;

    string jadwal[7];

    for (int i = 0; i < 6; i++) {  // Loop untuk hari
        if (i < hariLatihan) {
            for (int j = 0; j < 1; j++) { // Loop untuk bagian tubuh
                if (bagianTubuh == "Seluruh tubuh") {
                    if (keahlian == "Mahir") {
                        jadwal[i] = (gender == "L") ? "Plank 3 menit, Push-up 25x, Squat 30x"
                                                    : "Plank 2 menit, Push-up 20x, Squat 20x";
                    } else {
                        jadwal[i] = (gender == "L") ? "Plank 1 menit, Push-up 15x, Squat 15x"
                                                    : "Plank 30 detik, Push-up 10x, Squat 10x";
                    }
                } else if (bagianTubuh == "Otot perut") {
                    if (keahlian == "Mahir") {
                        jadwal[i] = (gender == "L") ? "Plank 3 menit, Sit-up 30x x3 set, Bicycle Crunch 50x x2 set"
                                                    : "Plank 2 menit, Sit-up 15x x2 set, Bicycle Crunch 20x x2 set";
                    } else {
                        jadwal[i] = (gender == "L") ? "Plank 1 menit, Sit-up 10x x2 set, Bicycle Crunch 20x x2 set"
                                                    : "Plank 30 detik x2 set, Sit-up 10x x2 set, Bicycle Crunch 10x x2 set";
                    }
                } else if (bagianTubuh == "Otot kaki") {
                    if (keahlian == "Mahir") {
                        jadwal[i] = (gender == "L") ? "Squat 30x x2 set, Squat Jump 20x x2 set"
                                                    : "Squat 20x x2 set, Squat Jump 10x x2 set";
                    } else {
                        jadwal[i] = (gender == "L") ? "Squat 15x x2 set, Squat Jump 10x"
                                                    : "Squat 10x, Squat Jump 5x x2 set";
                    }
                }
            }

            for (int k = 0; k < 1; k++) {  // Loop untuk target
                if (target == "Mengurangi berat badan") {
                    jadwal[i] += ", Kardio (Lompat tali, Jumping Jacks, Jogging)";
                } else {
                    jadwal[i] += ", Rekomendasi Protein Harian: Ayam, Telur, Tempe, Tahu";
                }
            }
        } else {
            jadwal[i] = "Rest Day";
        }
    }

    cout << "========================= Jadwal Olahraga Mingguan Anda =========================" << endl << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Hari " << i + 1 << ": " << jadwal[i] << endl;
    }

    return 0;
}
