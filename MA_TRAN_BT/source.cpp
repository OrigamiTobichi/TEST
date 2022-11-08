#include"header.h"

void nhapMaTran(MaTran & mt)
{
    cout<<"Nhap so dong :";
    cin>>mt.n;
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>mt.a[i][j];
        }
    }
}
void xuatMaTran(MaTran mt)
{
 for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            cout<<mt.a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int tinhTongTrenDuongCheoPhu(MaTran mt)
{
    int tong=0;
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(i+j==mt.n-1)// điều kiện trên đường chéo phụ.
            {
                tong+=mt.a[i][j];
            }
        }
    }
    return tong;
}
int tinhTongTamGiacDuoiDuongCheoPhu(MaTran mt)
{
    int tong=0;
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(i+j>=mt.n-1)
            {
                tong+=mt.a[i][j];
            }
        }
    }
    return tong;
}
int timMaxDuongCheoPhu(MaTran mt)
{
    int max=mt.a[0][mt.n-1];
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(i+j==mt.n-1)
            {
                if(mt.a[i][j]>max)
                max=mt.a[i][j];
            }
        }
    }
    return max;
}
int timPTLN(MaTran mt)
{
    int max=mt.a[0][0];
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(max<mt.a[i][j])
            {
                max=mt.a[i][j];
            }
        }
    }
    return max;
}
int demSoLanXuatHienPTLN(MaTran mt, int max)
{
    int dem=0;
    max = timPTLN(mt);
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(mt.a[i][j]==max)
            {
                dem++;
            }
        }
    }
    return dem;
}
int demSoPTChanDuongCheoChinh(MaTran mt)
{
    int dem=0;
    for(int i=0;i<mt.n;i++)
    {
        if(mt.a[i][i]%2==0)
        {
            dem ++;
        }
    }
    return dem;
}
int timPTLNTrenDuongCheoPhu(MaTran mt)
{
    int max=mt.a[0][mt.n-1];
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(i+j==mt.n-1)
            {
                if(max<mt.a[i][j])
                {
                    max=mt.a[i][j];
                }
            }
        }
    }
    return max;
}
bool kiemTraMaTranDonVi(MaTran mt)
{

    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(mt.a[i][i]==1)//điều kiện ma trận đơn vị
            {
                if(mt.a[i][j]==0 && i!=j)
                return true;
            }
        }
    }
    return false;
}
int timDongCoNhieuSoDuongNhat(MaTran mt)
{
    int vitri=0;
    int demmax=0;   
    for(int i=0;i<mt.n;i++)
    {
        int dem=0;
        for(int j=0;j<mt.n;j++)
        {
            if(mt.a[i][j]>0)
            dem++;
        }
        if(demmax<dem)
        {
            demmax=dem;
            vitri=i;
        }   
    }
    return vitri;
}
void inTatCaCacPTTamGiacDuoiDuongCheoPhu(MaTran mt)
{
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(i+j>=mt.n-1)
            {
                cout<<mt.a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int tinhTongBoiCua7(MaTran mt)
{
    int tong=0;
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(mt.a[i][j]%7==0)
            {
                tong+=mt.a[i][j];
            }
        }
    }
    return tong;
}
int tinhTongTrenTungCot(MaTran mt)
{
    for(int j=0;j<mt.n;j++)//cột đứng dòng chạy
    {
        int tong =0;
        for(int i=0;i<mt.n;i++)//dòng chạy từ i = 0. 
        {
            tong += mt.a[i][j];
        }
        cout <<"TONG TREN COT THU "<<j<<" LA :"<<tong<<endl; 
    }
}
int tinhTongTrenTungDong(MaTran mt)
{
    for(int  i=0;i<mt.n;i++)//dòng đứng cột chạy .
    {
        int tong =0;
        for(int j=0;j<mt.n;j++)// cột chạy từ j = 0.
        {
            tong+=mt.a[i][j];
        }
        cout <<"TONG TREN DONG THU "<<i<<" LA :"<<tong<<endl; 
    }
}
int timPTLNTren1Cot(MaTran mt,int cot)
{
    int max = mt.a[0][cot];   
    for(int i=0;i<mt.n;i++)
    {
        if(mt.a[i][cot]>max)
        {  
            max=mt.a[i][cot];
        }
    }
    return max;
}
int tinhTongCacPTLNTrenTungCot(MaTran mt)
{
    int tong=0;
    for(int i=0;i<mt.n;i++)
    {
        tong += timPTLNTren1Cot(mt,i);
    }
    return tong;
}
bool kiemTraSCP(int n)
{
    int i=1;
    while(i<n)
    {
        if(i*i==n)
        {
            return true;
        }
        i++;
    }
    return false;
}
bool timSCPLNTrongMaTran(MaTran mt, int & SCPMax)
{
    bool flag=false;
    for(int i=0;i<mt.n;i++)
    {
        for(int j=0;j<mt.n;j++)
        {
            if(kiemTraSCP(mt.a[i][j])==true)
            {
            if(!flag)
                {
                    SCPMax=mt.a[i][j];
                    flag = true;
                }
            else if(SCPMax<mt.a[i][j])
                SCPMax=mt.a[i][j];
            }
        }
    }
    cout<<"SCP LON NHAT TRONG MA TRAN LA :"<<SCPMax<<endl;
    return flag;
}
