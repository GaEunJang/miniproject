#include "product.h"

int addProduct(Product *s){
    printf("제품명은?: ");
    getchar();
    scanf("%[^\n]s", s->pdname);
    printf("제품 설명은?: ");
    getchar();
    scanf("%[^\n]s", s->explain);
    printf("중량은?: ");
    scanf("%s",s->weight);
    printf("판매 가격은?: ");
    scanf("%d",&s->price);
    printf("배송 방법은?(1:새벽배송/2:택배배송): ");
    scanf("%d",&s->method);
    printf("=>추가됨!\n");
    return 1;
}
void readProduct(Product s){
    if(s.price==-1 && s.method==-1) return;
    printf("%s %sg\n",s.pdname,s.weight);
    printf("%s\n",s.explain);
    printf("%d원\n",s.price);
    if(s.method==1){
        printf("새벽 배송\n");
    }
    else
        printf("택배 배송\n");
}

int updateProduct(Product *s){
    printf("제품명은?: ");
    getchar();
    scanf("%[^\n]s",s->pdname);
    printf("제품 설명은?: ");
    getchar();
    scanf("%[^\n]s", s->explain);
    printf("중량은?: ");
    scanf("%s",s->weight);
    printf("판매 가격은?: ");
    scanf("%d",&s->price);
    printf("배송 방법은?(1:새벽배송/2:택배배송): ");
    scanf("%d",&s->method);
    printf("=>수정됨!\n");
    return 1;
}

int deleteProduct(Product *s){
    s->price=-1;
    s->method=-1;
    printf("=>삭제됨!\n");
    return 1;
}

int selectMenu(){
    int menu;
    printf("\n***과일 관리 ***\n");
    printf("1.조회\n");
    printf("2.추가\n");
    printf("3.수정\n");
    printf("4.삭제\n");
    printf("0.종료\n\n");
    printf("=>원하는 메뉴는? ");
    scanf("%d",&menu);
    return menu;
}
