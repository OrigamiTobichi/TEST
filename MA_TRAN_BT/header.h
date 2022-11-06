#include<iostream>
using namespace std;
#define MAX 100 
struct MaTran
{
    int n;
    int a[MAX][MAX];
};
void nhapMaTran(MaTran & mt);
void xuatMaTran(MaTran mt);
int tinhTongTrenDuongCheoPhu(MaTran mt);
int tinhTongTamGiacDuoiDuongCheoPhu(MaTran mt);
int timMaxDuongCheoPhu(MaTran mt);
int demSoLanXuatHienPTLN(MaTran mt, int max);
int timPTLN(MaTran mt);
int demSoPTChanDuongCheoChinh(MaTran mt);
int timPTLNTrenDuongCheoPhu(MaTran mt);
bool kiemTraMaTranDonVi(MaTran mt);
int demSoLanPTLNXuatHien(MaTran mt);
int timDongCoNhieuSoDuongNhat(MaTran mt);
void inTatCaCacPTTamGiacDuoiDuongCheoPhu(MaTran mt);
int tinhTongBoiCua7(MaTran mt);
int tinhTongTrenTungCot(MaTran mt);

