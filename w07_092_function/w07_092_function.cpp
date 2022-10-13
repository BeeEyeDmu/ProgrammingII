// 함수의 사용(변수명 뒤에 괄호가 있다)
// 반복되는 부분을 함수로 만들어 사용
// 1. 함수의 정의
// 2. 함수의 호출
// 3. 매개변수를 사용
#include <stdio.h>

int itemCnt = 0; // 전역변수(global variable)
int money = 100; // 전역변수(global variable)

void buyItem()
{
	itemCnt++;
	money -= 10;
	printf("아이템 구매\n");
	printf("  아이템 갯수 = %d\n", itemCnt);
	printf("  잔액 = %d\n", money);
}
 
void buyItem2(int cost) 
{
	itemCnt++;
	money -= cost;
	printf("아이템 구매\n");
	printf("  아이템 갯수 = %d\n", itemCnt);
	printf("  잔액 = %d\n", money);
}

void buyItem3(int cost, int cnt)
{
	itemCnt += cnt;
	money -= cost;
	printf("아이템 구매\n");
	printf("  아이템 갯수 = %d\n", itemCnt);
	printf("  잔액 = %d\n", money);
}

int main()
{
	buyItem();	// 10원짜리 아이템 하나를 사는 것
	buyItem();
	buyItem2(30);
	buyItem3(30, 3);
}

