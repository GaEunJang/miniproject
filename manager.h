#include <stdio.h>
#include "product.h"

int selectNumber(Product *s, int count); //등록된 제품 리스트를 선택하는 함수
void saveData(Product *s, int count); //File 저장 함수
int loadData(Product *s); //File에서 데이터 불러오는 함수
void searchName(Product *s,int count); //제품이름을 검색하는 함수
void listProduct(Product *s,int count); //전체 등록된 제품 리스트를 출력하는 함수
void searchExplain(Product *s,int count); //제품 설명을 검색하는 함수
void searchWeight(Product *s,int count);//제품 중량을 검색하는 함수
