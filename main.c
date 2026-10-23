#include <stdio.h>

int main() {
    float dtb, drl;
    char *hocLuc, *renLuyen, *hocBong;

    
    scanf("%f %f", &dtb, &drl);

   
    if (dtb >= 9.0)
        hocLuc = "XUAT_SAC";
    else if (dtb >= 8.0)
        hocLuc = "GIOI";
    else if (dtb >= 7.0)
        hocLuc = "KHA";
    else
        hocLuc = "KHONG_DAT";

    
    if (drl >= 90)
        renLuyen = "XUAT_SAC";
    else if (drl >= 80)
        renLuyen = "TOT";
    else if (drl >= 70)
        renLuyen = "KHA";
    else
        renLuyen = "KHONG_DAT";

    // 3. Xep loai hoc bong
    if (dtb >= 9.0 && drl >= 90) {
        hocBong = "HOC_BONG_XUAT_SAC";
    }
    else if ((dtb >= 8.0 && dtb < 9.0 &&
              drl >= 80) ||
             (dtb >= 9.0 && drl >= 80 && drl < 90)) {
        hocBong = "HOC_BONG_GIOI";
    }
    else if ((dtb >= 7.0 && dtb < 8.0 &&
              drl >= 70) ||
             (dtb >= 8.0 && dtb < 9.0 &&
              drl >= 70 && drl < 80) ||
             (dtb >= 9.0 && drl >= 70 && drl < 80)) {
        hocBong = "HOC_BONG_KHA";
    }
    else {
        hocBong = "KHONG_DAT";
    }

    
    printf("%s\n", hocBong);

    return 0;
}

    