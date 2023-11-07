#include <bits/stdc++.h>

using namespace std;

class CanBo {
    string hoTen;
    int tuoi;
    string gioiTinh;
    string diaChi;

public:
    CanBo(string HT = "", int T = 0, string GT = "", string DC = "") {
        hoTen = HT;
        tuoi = T;
        gioiTinh = GT;
        diaChi = DC;
    }

    string getHoTen() {
        return hoTen;
    }

    void setHoTen(string HT) {
        hoTen = HT;
    }

    int getTuoi() {
        return tuoi;
    }

    void setTuoi(int T) {
        tuoi = T;
    }

    string getGioiTinh() {
        return gioiTinh;
    }

    void setGioiTinh(string GT) {
        gioiTinh = GT;
    }

    string getDiaChi() {
        return diaChi;
    }

    void setDiaChi(string DC) {
        diaChi = DC;
    }

    string catTen() {
        int pos = hoTen.rfind(" ");
        if (hoTen != "") {
            return hoTen.substr(pos + 1);
        } else {
            return "Ten khong hop le!";
        }
    }

    void hienThi() {
        cout << "Ho ten can bo: " << hoTen << ", ";
        cout << tuoi << " tuoi, ";
        cout << "Gioi tinh: " << gioiTinh << ", ";
        cout << "Dia chi: " << diaChi << endl;
        cout << "Ten: " << catTen();
    }
};

class QLCB {
    int soCanBo;
    CanBo DSCB[1000];

public:
    QLCB(int n = 0) {
        soCanBo = n;
    }

    void themCB() {
        cin.ignore();
        for (int i = 0; i < soCanBo; i++) {
            string a, b, c;
            int d;
            cout << "Nhap thong tin can bo thu(" << i + 1 << "): " << endl;
            cout << "Nhap ten can bo: ";
            getline(cin, a);
            cout << "Nhap tuoi can bo: ";
            cin >> d;
            cout << "Nhap gioi tinh: ";
            cin >> b;
            cin.ignore();
            cout << "Nhap dia chi: ";
            getline(cin, c);
            DSCB[i] = CanBo(a, d, b, c);
            cout << "<--------------------------------->" << endl;
        }
    }

    void hienThiCB() {
        cout << "so can bo la: " << soCanBo << endl;
        cout << "---------------------------------" << endl;
        for (int i = 0; i < soCanBo; i++) {
            cout << "can bo(" << i + 1 << "):" << endl;
            cout << "Ho ten: " << DSCB[i].getHoTen() << endl;
            cout << "Tuoi: " << DSCB[i].getTuoi() << endl;
            cout << "Gioi tinh: " << DSCB[i].getGioiTinh() << endl;
            cout << "Dia chi: " << DSCB[i].getDiaChi() << endl;
        }
        cout << "<--------------------------------->" << endl;
    }

    void timKiem() {
        string hoTenCT;
        cout << "Nhap ten can tim: ";
        getline(cin, hoTenCT);
        for (int i = 0; i < soCanBo; i++) {
            if (hoTenCT == DSCB[i].getHoTen()) {
                cout << "can bo(" << i + 1 << "): la can bo can tim" << endl;
                cout << "Ten: " << DSCB[i].getHoTen() << ", ";
                cout << DSCB[i].getTuoi() << " tuoi, ";
                cout << "GT: " << DSCB[i].getGioiTinh() << ", ";
                cout << "co dia chi: " << DSCB[i].getDiaChi();
                cout << endl;
            }
        }
    }
};

int main() {
	int n;
	cout <<"Nhap so luong can bo de them";
	cin>> n;
    QLCB b(n);
    b.themCB();
    b.hienThiCB();
    b.timKiem();
    return 0;
}

