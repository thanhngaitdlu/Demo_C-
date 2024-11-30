#define MAX 100
typedef char Chuoi[MAX];

int LayChieuDaiChuoi(Chuoi s);
int DemKtXTrongChuoi(Chuoi s, char kt);
void DoiThanhChuoiInHoa(Chuoi s);

int LayChieuDaiChuoi(Chuoi s) {
	int dem = 0;
	int i = 0;
	while (s[i] != NULL) {
		dem++;
		i++;
	}

	return dem;
}

int DemKtXTrongChuoi(Chuoi s, char kt)
{
	int dem = 0, i = 0;
	while (s[i] != NULL) {
		if (s[i] == kt)
			dem++;
		i++;
	}
	return dem;
}

void ChenXTaiViTri(Chuoi s, char kt, int vt) {
	int cd = LayChieuDaiChuoi(s);
	int i = cd;
	while (i >= vt) {
		s[i + 1] = s[i];
		i--;
	}
	s[vt] = kt;
}

void DoiThanhChuoiInHoa(Chuoi s) {
	int i = 0;
	while (s[i] != NULL) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}

}
