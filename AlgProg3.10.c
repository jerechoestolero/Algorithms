
/*
 * Program 3.10 List reversal
 *
 * This function reverses the links in a list, returning a pointer to the final
 * node, which then points to the next-to-final node, and so forth, with the
 * link in the first node of the original list set to NULL. To accomplish this
 * task, we need to maintain links to three consecutive nodes in the list.
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N 9     /* Number of elements in the link lists. */
typedef struct node* link;
 struct node {
  int item;
  link next;
};

/*
 * Function to reverse the links.
 */
link reverse(link x)
{
  link t;
  link y=x;
  link r = NULL;
  
  while(y!=NULL)
  {
    t=y->next;
    y->next=r;
    r=y;
    y=t;
  }
  return r;
}

/*
 * Program entry point.
 */
int main(int argc, char *argv[])
{
 link head,x;
 int i;
 
 /*
  * Create a link list.
  */
 head = (link)malloc(sizeof(struct node));
 head->item = 1;
 head->next = NULL;
 
 /*
  * Insert elements to the link list.
  *
  * Inserting an element (Long procedure)
  * link temp = (link)malloc(sizeof(struct node));
  * head->next=temp;
  * head=head->next;
  *
  *********************************************************
  * Inserting an element (Shortcut procedure)
  * More readable code
  * head=(head->next=(link)malloc(sizeof(struct node)));
  */
 x=head;
 for(i=2;i<=N;i++)
 {
   x=(x->next=(link)malloc(sizeof(struct node)));
   x->item=i;
   if(i==N)
     x->next=NULL;
 }
 
 /*
  * Print the link lists.
  */
 x=head;
 do{
  printf("Address: 0x%x\n",(unsigned int)x);
  printf("Item: %d\n",x->item);
  printf("Next: 0x%x\n",(unsigned int)x->next);
  x=x->next;
 }while(x!=NULL);
 
 return 0;
}
