#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VOTE 5 // 저장할 수 있는 투표 레코드 최대 갯수
#define MAX_VOTE_CHOISE 5 //저장할 수 있는 선택지 최대 갯수
typedef struct st_vote
{
    char name[20]; // 투표 이름
    int amount; //선택지 갯수 
    char choice[MAX_VOTE_CHOISE][30];   // 선택지 저장
    int vote_box[MAX_VOTE_CHOISE];   //투표함(유저가 투표한것 저장하는 공간)
    char vote_box_user[5][80];       //각 선택지에 투표한 유저 이름 저장
} T_vote;

int available_vote();              //투표를 추가할 공간이 남아 있는가?
T_vote *v_search_by_name(char *n); // 이름이 일치하는 유저 레코드 포인터 찾기

char *v_getname(T_vote *p);
int *v_getamount(T_vote *p);
char *v_getchoice(T_vote *p,int i);

int v_first_available();       // 추가할 수 있는 가장 빠른 포인터 배열의 인덱스 찾기
void v_create(char *n, int a); //투표 정보 입력&저장
void v_editer(T_vote *p, int a);
void v_create_choice(T_vote *p );
void v_delete(T_vote *p);
int V_count();
void v_get_all(T_vote *a[]);


void v_start(T_vote *p,char name);