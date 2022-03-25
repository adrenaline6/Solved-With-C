#include<stdio.h>
#include<string.h>



typedef struct {
	char ho [10];
	char ten [10];
	char tendem [10];	
} ten;
typedef struct {
	char xa[20];
	char huyen [20];
	char tinh[20];	
} que;
typedef struct {
	float toan;
	float ly;
	float hoa;
} diem;

typedef struct  {
	char truong[20];
	int tuoi;
	int sobaodanh;
	ten hoten;
	que quequan;
	diem diemthi;
} phieudiem;


void nhap(phieudiem &phieudiem) {
	printf("nhap ten truong: ");
	gets(phieudiem.truong);
	printf("Nhap ho: ");
	gets(phieudiem.hoten.ho);
	printf("Nhap ten dem: ");
	gets(phieudiem.hoten.tendem);
	printf("Nhap ten: ");
	gets(phieudiem.hoten.ten);
	printf("nhap tuoi: ");
	scanf("%d", &phieudiem.tuoi);
	printf("nhap so bao danh: ");
	scanf("%d", &phieudiem.sobaodanh);
	fflush(stdin);
	printf("Nhap xa: ");
	gets(phieudiem.quequan.xa);
	printf("Nhap huyen: ");
	gets(phieudiem.quequan.huyen);
	printf("Nhap tinh: ");
	gets(phieudiem.quequan.tinh);
	printf("Nhap diem toan: ");
	scanf("%f", &phieudiem.diemthi.toan);
	printf("Nhap diem ly: ");
	scanf("%f", &phieudiem.diemthi.ly);
	printf("Nhap diem hoa: ");
	scanf("%f", &phieudiem.diemthi.hoa);
}
void in(phieudiem &phieudiem) {
	printf("----------KET QUA----------\n");
	char hovaten[50];
	sprintf(hovaten, "%s %s %s", phieudiem.hoten.ho, phieudiem.hoten.tendem, phieudiem.hoten.ten);
	printf("Ho va ten: %s\n", hovaten);
	char noisinh[100];
	sprintf(noisinh, "%s - %s - %s", phieudiem.quequan.xa, phieudiem.quequan.huyen, phieudiem.quequan.tinh);
	printf("Que quan: %s\n", noisinh);
	printf("Ten truong: %s\n", phieudiem.truong);
	printf("Tuoi: %d\n", phieudiem.tuoi);
	printf("So bao danh: %d\n", phieudiem.sobaodanh);
//	float diem;
//	sprintf(diem, "diem toan: %f - diem ly: %f - diem hoa: %f", phieudiem.diemthi.toan, phieudiem.diemthi.ly, phieudiem.diemthi.hoa);
	printf("diem toan: %.2f - diem ly: %.2f - diem hoa: %.2f", phieudiem.diemthi.toan, phieudiem.diemthi.ly, phieudiem.diemthi.hoa);
}
int main() {
	phieudiem phieudiem;
	nhap(phieudiem);
//	char hovaten[50];
//	sprintf(hovaten, "%s %s %s", phieudiem.hoten.ho, phieudiem.hoten.tendem, phieudiem.hoten.ten);
//	printf("%s", hovaten);
//	strcpy(hovaten, phieudiem.hoten.ho);
//	strcat(hovaten, phieudiem.hoten.tendem);
//	strcat(hovaten, phieudiem.hoten.ten);
//	printf("%s", phieudiem.hoten);
//	printf("%s", pd.hoten.ten);
	in(phieudiem);
	return 0;
}
