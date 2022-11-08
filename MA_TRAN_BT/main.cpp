#include"header.h"

int main()
{
    MaTran mt;
    int max;
    nhapMaTran(mt);
    xuatMaTran(mt);
    // int kq=tinhTongTrenDuongCheoPhu(mt);
    // cout<<"TONG TREN DUONG CHEO PHU LA :"<<kq<<endl;
    // int kq1=tinhTongTamGiacDuoiDuongCheoPhu(mt);
    // cout<<"TONG TAM DUOI DUONG CHEO PHU LA :"<<kq1<<endl;
    // int kq3=timMaxDuongCheoPhu(mt);
    // cout<<"MAX TREN DUONG CHEO PHU LA :"<<kq3<<endl;
    // int kq2=demSoLanXuatHienPTLN(mt,max);
    // cout<<"SO CAC SO PTLN LA :"<<kq2<<endl;
    // int kq4=demSoPTChanDuongCheoChinh(mt);
    // cout<<"SO CAC PT CHAN TREN DUONG CHEO CHINH LA :"<<kq4<<endl;
    // int kq5=timMaxDuongCheoPhu(mt);
    // cout<<"MAX TREN DUONG CHEO PHU LA :"<<kq5<<endl;
    // bool kq6=kiemTraMaTranDonVi(mt);
    // if(kq==true)
    // {
    //     cout<<"DAY LA MA TRAN DON VI ";
    // }
    // else
    // {
    //     cout<<"KHONG PHAI MA TRAN DON VI";
    // }
    // int kq7=timDongCoNhieuSoDuongNhat(mt);
    // cout<<"DONG CO NHIEU SO DUONG NHAT LA :"<<kq7<<endl;
    // cout<<"CAC PT TRONG TAM GIAC DUOI PHAI ";
    // cout<<endl;
    // inTatCaCacPTTamGiacDuoiDuongCheoPhu(mt);
    // int kq8=tinhTongBoiCua7(mt);
    // cout<<"TONG LA BOI CUA 7 LA :"<<kq8<<endl;
    // tinhTongTrenTungDong(mt);
    // int cot;
    // cout<<"NHAP COT :";
    // cin>>cot;
    // int kq10=timPTLNTren1Cot(mt,cot);
    // cout<<"PTLN TREN COT THU "<<cot<<" LA:"<<kq10<<endl;
    // int kq11=tinhTongCacPTLNTrenTungCot(mt);
    // cout<<"TONG LA :"<<kq11<<endl;
    int SCPMax;
    timSCPLNTrongMaTran(mt,SCPMax);
    system("pause");
    return 0;
}