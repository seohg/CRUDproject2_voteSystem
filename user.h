#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USER 50 // 저장할 수 있는 회원 레코드 최대 갯수

typedef struct st_user
{
    char name[20]; // 회원이름
    int age;
    int gender; //1. man  2. woman
} T_user;

int available_user();              //유저를 추가할 공간이 남아 있는가?
T_user *u_search_by_name(char *n); // 이름이 일치하는 유저 레코드 포인터 찾기
T_user *u_search_by_name_index(char *n);   //이름이 일치하는 유저 레코드 인덱스 찾기

char *u_getname(T_user *p);
int *u_getage(T_user *p);
char *u_getgender(T_user *p);

int u_first_available();              // 추가할 수 있는 가장 빠른 포인터 배열의 인덱스 찾기
void u_create(char *n, int a, int g); //유저 정보 입력&저장
void u_editer(char *n, int a, int g);
void u_delete(T_user *p);
int U_count();

void u_get_all(T_user *a[]);
void u_file_save();
void u_add_file();


