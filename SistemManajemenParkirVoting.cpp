#include <iostream>
#include <string>
using namespace std;

int main () {
    const int MAX = 3; // jumlah kandidat
    string kandidat[MAX] = {"Kandidat A", "Kandidat B", "Kandidat C"};
    int suara[MAX] = {0, 0, 0};
    int pilihan;

    do {
        cout << "\n====SISTEM VOTING====\n";
        cout << "1. Tampilkan Kandidat\n";
        cout << "2. Voting\n";
        cout << "3. Tampilkan Hasil Voting.\n";
        cout << "4. Tampilkan Pemenang.\n";
        cout << "5. Keluar.\n";
        cout << "Pilih Menu (1-5): ";
        cin >>pilihan;

        switch (pilihan) {
            case 1:
            cout << "\nDaftar Kandidat:\n";
            for (int i = 0; i <MAX; i++) {
                cout << i + 1 << " . " << kandidat[i] <<endl;
            }
            break;

            case 2: {
                int pilihKandidat;
                cout << "\nPilih Kandidat (1-" <<MAX <<"): ";
                cin >>pilihKandidat;

                if (pilihKandidat >= 1 && pilihKandidat <= MAX) {
                    suara [pilihKandidat - 1]++;
                    cout << "Voting Berhasil.\n";
                } else {
                    cout << "Pilihan Tidak Valid.\n";
                }
                break;
            }

            case 3:
            cout << "\nHasil Voting:\n";
            for (int i = 0; i <MAX; i++) {
                cout <<  kandidat[i] << " : " <<suara[i] << "suara\n";
            }
            break;

            case 4: {
                int max = suara[0];
                int index = 0;

                for (int i = 0; i <MAX; i++) {
                    if (suara[i] <MAX) {
                        max = suara[i];
                        index = i;
                    }
                }
                cout << "\nPemenang Voting:\n";
                cout << kandidat[index] << " dengan " <<max << " suara\n ";
                break;
            }

            case 5:
            cout << "Program Selesai. Terima Kasih.\n";
            break;

            default:
            cout << "Menu Tidak Valid.\n";
            }
    
        } while (pilihan != 5);

    return 0;

}

