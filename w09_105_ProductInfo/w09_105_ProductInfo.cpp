#include <stdio.h>
#include <string.h>

typedef struct ProductInfo {
	int num;			// 상품번호
	char name[100];		// 상품이름
	int price;			// 가격
} ProductInfo;

int main()
{
	ProductInfo myProduct = {
		1234, 
		"제주 한라봉", 
		20000 
	};
	printf("상품 번호: %d\n", myProduct.num);
	printf("상품 이름: %s\n", myProduct.name);
	printf("상품 가격: %d원\n", myProduct.price);

	ProductInfo a;
	a.num = 1235;
	// a.name = "컴퓨터";	(에러)
	strcpy_s(a.name, "컴퓨터");
	a.price = 1000000;

	printf("상품 번호: %d\n", a.num);
	printf("상품 이름: %s\n", a.name);
	printf("상품 가격: %d원\n", a.price);

	ProductInfo b;
	b = a;
	printf("상품 번호: %d\n", b.num);
	printf("상품 이름: %s\n", b.name);
	printf("상품 가격: %d원\n", b.price);

}