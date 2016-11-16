
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
 link x;
 int i;
 
 /*
  * Create a link list.
  */
 x = (link)malloc(sizeof(struct node));
 x->item = 1;
 x->next = NULL;
 
 for(i=2;i<=N;i++)
 {
   
 }
 return 0;
}
