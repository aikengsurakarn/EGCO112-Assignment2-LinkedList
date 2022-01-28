struct node
{
  int id[1000];
  char name[1000][1000];
  struct node *next;
};
typedef struct node NODE;
typedef NODE* NodePtr;