#include <stdio.h> 

void main()
{
#pragma region 주소 연산자 
	// 변수의 주소 값을 변환하는 연산자 입니다.

	// int data = 10;
	// 
	// printf("data 변수의 주소 : %p\n", &data);

	// 데이터 주소 값은 해당 데이터가 저장된 메모리
	// 의 시작 주소를 의미하며, 메모리 공간은 1 byte
	// 의 크기로 나누어 표현홥니다.	

#pragma region 함수 
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다

	// int score = 0;

	// 표준 입력 함수는 입력을 수행할 떄까지 다음 
	// 작업으로 넘어갈 수 없습니다.

	// scanf_s(" % d", &score);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.

	// printf("score 변수의 값 : %\n", score);

	// 표준 입력 함수로 데이터를 입력하게 되면
	// 버퍼에 데이터를 보관하였다가 입력한는 순간 
	// 버퍼 안의 내용을 프로그램에 전송합니다.
#pragma endregion




#pragma endregion

#pragma region star

	// int input = 0;
	// 
	// scanf_s("%d", &input);
	// 
	// for (int i = 0; i < input; i ++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("★");
	// 	}
	// 	printf("\n");
	// }

#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수 입니다.

	// int x = 10;
	// 
	// int* pointer = &x;
	// 
	// *pointer = 99;
	// 
	// printf("x의 변수 값 : %d\n", x);
	// printf("x의 주소 값 : %d\n", &x);
	// printf("pointer 변수의 값 : %d\n", pointer);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 
	// 변수의 시작 주소를 가르키게 됩니다.

	// float health = 100.0f

	// pointer = &health;

	// *pointer = 15.5f

	// printf("health 변수의 값 : %f\n", health);

	// 포인터 변수를 저장하기 위해 주소 값을  저장할 변수의
	// 자료형과 포인터 변수의 자료형이 일치해야 합니다.

	// printf("포인터 변수의 크기 : %d\n", sizeof(pointer);

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 
	// 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는
	// 운영 체제에 따라 크기가 결정됩니다.


#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	void * p = NULL

	// 범용 포인터는 메모리 주소에 접근해서 값을 
	// 병경할 수 없습니다.

#pragma endregion

}