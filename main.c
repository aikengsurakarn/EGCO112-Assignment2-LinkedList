#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){

  int count=0,i;
  NODE *head,*temp ;
  
  head=(NodePtr) malloc(sizeof(NODE));
  temp=head;
  // int n=9;

  struct node NODE;

  for(i=0;;i++)
  {
    printf("ID : ");
    scanf("%d", &NODE.id[i]);

    if(NODE.id[i]==0) break;
    else
    {
      printf("Name : ");
      scanf("%s", &NODE.name[i][0]);
    }

    count++;

    // temp->value=c;   // 1 
    // c+=2;
    // //
        
    if(NODE.id==0) temp->next=NULL;
    else
    {
      temp=(NodePtr) malloc(sizeof(NODE)); // 2  & 3 
      temp->next=temp;
    }
  /* 
  head->value = c;
  head->next=(NodePtr) malloc(sizeof(NODE));

  head->next->value=head->value+3;

  head->next->next=(NodePtr) malloc(sizeof(NODE));
  head->next->next->value=7;
  head->next->next->next=NULL;*/
  }

  for(i=0;i<=count;i++)
  {
       printf("%10d %s\n",NODE.id[i],&NODE.name[i][0]);  //4
  }
     printf("NULL\n");    


    for(temp=head; temp!=NULL ;temp=temp->next)
    {
      free(temp);//5
    }

}