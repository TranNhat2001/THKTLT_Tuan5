#include <stdio.h>
#include <conio.h>

// Hàm đệ quy để giải bài toán Tháp Hà Nội
void tower_of_hanoi(int n, char source, char auxiliary, char target) {
	if (n == 1) {
		// Nếu chỉ có một đĩa, di chuyển nó từ chồng nguồn đến chồng đích
		printf("Di chuyen dia 1 tu %c den %c\n", source, target);
		return;
	}

	// Di chuyển n-1 đĩa từ chồng nguồn đến chồng trung gian
	tower_of_hanoi(n - 1, source, target, auxiliary);

	// Di chuyển đĩa lớn nhất từ chồng nguồn đến chồng đích
	printf("Di chuyen dia %d tu %c den %c\n", n, source, target);

	// Di chuyển n-1 đĩa từ chồng trung gian đến chồng đích
	tower_of_hanoi(n - 1, auxiliary, source, target);
}

int main() {
	int n;

	// Nhập số lượng đĩa
	printf("Nhap so luong dia: ");
	scanf_s("%d", &n);

	// Gọi hàm để thực hiện bài toán với chồng nguồn A, chồng trung gian B, và chồng đích C
	tower_of_hanoi(n, 'A', 'B', 'C');

	_getch();
}
