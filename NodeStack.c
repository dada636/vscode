#include <stdio.h>
#include <stdlib.h>

typedef struct NodeStack
{
  int data;
  struct NodeStack *next;
} nodestack;

nodestack *AddStack();
nodestack *CheckStack(int size);
void OutStack();

nodestack *head = NULL;
int size = 0;
//进栈
nodestack *AddStack()
{
  int n;
  nodestack *pr = head;
  nodestack *p = NULL;
  p = (nodestack *)malloc(sizeof(nodestack));
  if (head == NULL)
  {
    head = p;
  }
  else
  {
    while (pr->next != NULL)
    {
      pr = pr->next;
    }
    pr->next = p;
  }

  printf("请输入进栈数据：");
  scanf("%d", &n);
  p->data = n;
  p->next = NULL;
  size++;
  return head;
}
//查看栈的数据
nodestack *GetStack()
{
  nodestack *temp = head;
  printf("功能2里size的值：%d\n",size);
  for (int i = 1; i < size-1; i++)
  {
    temp = temp->next;
  }
  return temp;
}
//出栈
void OutStack()
{
  printf("功能2里size的值：%d\n",size);
  nodestack *pr = GetStack();
  pr->next = NULL;
  size--;
}



void PrintNode()
{
  nodestack *pr = head;
  while (1)
  {
    if (pr->next != NULL)
    {
      printf("%d\n", pr->data);
      pr = pr->next;
    }
    else
    {
      printf("%d\n", pr->data);
      pr = pr->next;
      break;
    }
  }
}

int menu()
{
  int n;
  printf("1：创建结点\t");
  printf("2：删除结点\t");
  printf("3：打印结点\t");
  printf("0：结束\n");
  printf("请输入序号:");
  scanf("%d", &n);
  switch (n)
  {
  case 1:
    AddStack();
    menu();
  case 2:
    OutStack();
    menu();
  case 3:
    PrintNode();
    menu();
  case 0:
    return 0;
  default:
    printf("输入有误！请重新输入！\n");
    menu();
  }
}

int main()
{
  menu();
}