#ifndef PRODUCT_H
#define PRODUCT_H
#include <stdio.h>

typedef struct{
    char pdname[100]; //제품명
    char explain[200]; //설명
    char weight[20]; //중량
    int price; //판매 가격
    int method; //배송 방법
}Product;

int addProduct(Product *s); //제품을 추가하는 함수
void readProduct(Product s); //제품 하나를 출력하는 함수
int selectMenu(); //원하는 메뉴를 선택하는 함수
int selectNumber(Product *s, int count); //등록된 제품 리스트를 선택하는 함수
int updateProduct(Product *s); //수정한 제품을 불러오는 함수
void saveData(Product *s, int count); //File 저장 함수
int loadData(Product *s); //File에서 데이터 불러오는 함수
void searchName(Product *s,int count); //제품을 검색하는 함수
void listProduct(Product *s,int count); //전체 등록된 제품 리스트를 출력하는 함수
int deleteProduct(Product *s); //제품을  삭제하는 함수

#endif
