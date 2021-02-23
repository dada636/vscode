
#include<stdio.h>
#include<malloc.h>
typedef struct node{
	int data;
	struct node *next;
}LNode; 
LNode *L;
void push(LNode *L, int x){
	LNode *p = (LNode*)malloc(sizeof(LNode));
	p->next = NULL;
	p->data = x;
	p->next = L->next;
	L->next = p; 
}
 
//因为在主程序中需要输出x的值所以这里需要传入的是x的引用这样在函数中变化的时候主函数也是跟着一起变化的 
int pop(LNode *L){
	LNode *p;
  int x;
	if(L->next == NULL) return 0;
	p = L->next;
	x = p->data;
	L->next = p->next;
	free(p);
	return x;
}
 
int main(void){
	int n;
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	for(int i = 0; i < 5; ++i){
		scanf("%d", &n);
		push(L, n);
	}
	int x;
	x = pop(L);
	printf("%d\n", x);
	x = pop(L);
	printf("%d\n", x);
	return 0;
}


