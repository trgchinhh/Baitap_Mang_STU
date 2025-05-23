#include <iostream>
using namespace std;
 
// I. KỸ THUẬT NHẬP XUẤT MẢNG 
void nhap_so_phan_tu_mang(int &n); 
void nhap_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void nhap_mang_1_chieu_so_thuc(float mang_so_thuc[], int n);
void xuat_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void xuat_mang_1_chieu_so_thuc(float mang_so_thuc[], int n);
void liet_ke_so_chan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void in_ra_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void liet_ke_so_chia_het_cho_3_va_5_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void in_ra_boi_cac_so_cua_7_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void liet_ke_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void liet_ke_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);

// II. KỸ THUẬT ĐẶT LÍNH CANH 
int tim_gia_tri_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_gia_tri_min_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_gia_tri_duong_dau_tien_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_shh_dau_tien_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_vi_tri_gia_tri_min_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_vi_tri_gia_tri_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_gia_tri_pt_chan_dau_tien_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_vi_tri_shh_cuoi_cung_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_snt_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int tim_vi_tri_pt_chan_min_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);

// III. KỸ THUẬT TÍNH TỔNG
void tong_pt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_pt_duong_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_pt_chia_het_cho_3_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_boi_2_va_7_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_tbc_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_tbc_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void tong_tbc_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);

// IV. KỸ THUẬT ĐẾM 
void dem_so_chan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_so_duong_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_boi_3_hoac_5_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_cac_uoc_cua_3_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_cac_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_cac_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_cac_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_so_luong_gt_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_snt_o_vi_tri_le_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
void dem_scp_o__vi_tri_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);

// V. KỸ THUẬT ĐẶT CỜ HIỆU 
int kiem_tra_so_0_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_so_chan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_toan_so_chan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_tang_dan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_giam_dan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
int kiem_tra_cac_pt_bang_nhau_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n);
 