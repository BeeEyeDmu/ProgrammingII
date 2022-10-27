#include <stdio.h>
#include <string.h>

typedef struct ProductInfo {
	int num;			// 상품번호
	char name[100];		// 상품이름
	int price;			// 가격
} Product;

int main()
{
	Product my = { 1001, "제주한라봉", 20000 };
	Product *p = &my;

	printf("상품번호 : %d\n", my.num);
	printf("상품이름 : %s\n", my.name);
	printf("상품가격 : %d\n", my.price);

	printf("상품번호 : %d\n", (*p).num);
	printf("상품이름 : %s\n", (*p).name);
	printf("상품가격 : %d\n", (*p).price);

	printf("상품번호 : %d\n", p->num);
	printf("상품이름 : %s\n", p->name);
	printf("상품가격 : %d\n", p->price);

}