#include <stdio.h>
#include <string.h>
#include "product.h"
#include "manager.h"

int selectNumber(Product *s, int count){
    int number;
    listProduct(s,count);
    printf("번호는?(취소 :0)");
    scanf("%d",&number);
    return number;
}

void saveData(Product *s, int count){
    FILE *fp;
    fp=fopen("product.txt","wt");
    for(int i=0;i<count-1;i++){
        if(s[i].price==-1) continue;
        fprintf(fp,"%s, %s, %s, %d %d\n",s[i].pdname,s[i].weight,s[i].explain,s[i].price,s[i].method);
    }
    fprintf(fp,"%s, %s, %s, %d %d",s[count-1].pdname,s[count-1].weight,s[count-1].explain,s[count-1].price,s[count-1].method);
    fclose(fp);
    printf("저장됨!\n");
}

int loadData(Product *s){
    FILE *fp;
    fp=fopen("product.txt","rt");
    if(fp==NULL){
        printf("=>파일이 없음\n");
        return 0;
    }
    int count=0;
    for(;;count++){
        const int max=100;
        char line[max];
        if(feof(fp)) break;
        fgets(line,max,fp);
        sscanf(line,"%[^,], %[^,], %[^,], %d %d ",s[count].pdname,s[count].weight,s[count].explain,&s[count].price,&s[count].method);
    }
    fclose(fp);
    printf("=>로딩 성공\n");
    return count;
}

void searchName(Product *s,int count){
    int scnt=0;
    char search[20];
    
    printf("원하는 과일은? ");
    getchar();
    scanf("%[^\n]s",search);
    
    for(int i=0;i<count;i++){
        if(s[i].price==-1) continue;
        if(strstr(s[i].pdname,search)){
            printf("%d번\n",i+1);
            readProduct(s[i]);
            scnt++;
        }
    }
    if(scnt==0) printf("=> 검색 결과 없음\n"); 
}

void searchExplain(Product *s,int count){
    int scnt=0;
    char search[20];

    printf("원하는 설명은? ");
    getchar();
    scanf("%[^\n]s",search);

    for(int i=0;i<count;i++){
        if(s[i].price==-1) continue;
        if(strstr(s[i].explain,search)){
            printf("%d번\n",i+1);
            readProduct(s[i]);
            scnt++;
        }
    }
    if(scnt==0) printf("=> 검색 결과 없음\n");
}

void listProduct(Product *s,int count){
    for(int i=0;i<count;i++){
        if(s[i].price==-1 && s[i].method==-1) continue;
        printf("==============================================\n");
        printf("%d번\n",i+1);
        readProduct(s[i]);
    }
    printf("\n");
}


