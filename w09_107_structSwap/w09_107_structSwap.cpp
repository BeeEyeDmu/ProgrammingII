#include <stdio.h>
#include <string.h>

typedef struct ProductInfo {
	int num;			// 상품번호
	char name[100];		// 상품이름
	int price;			// 가격
} Product;

void swap(Product *a, Product *b) 
{
	Product tmp = *a;
	*a = *b;
	*b = tmp;
}

//void printProduct(Product a)
//{
//	printf("상품번호 : %d\n", a.num);
//	printf("상품이름 : %s\n", a.name);
//	printf("상품가격 : %d\n", a.price);
//}

void printProduct(Product *a)
{
	printf("상품번호 : %d\n", a->num);
	printf("상품이름 : %s\n", a->name);
	printf("상품가격 : %d\n", a->price);
}

int main()
{
	Product my = { 1001, "한라봉", 20000 };
	Product your = { 1002, "꿀참외", 10000 };

	swap(&my, &your);

	printProduct(&my);
	printProduct(&your);
	//printf("상품번호 : %d\n", my.num);
	//printf("상품이름 : %s\n", my.name);
	//printf("상품가격 : %d\n", my.price);
}