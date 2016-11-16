/*
 * Progam 3.9 Circular list example (Josephus problem)
 * To represent people arranged in a circle, we build a circular linked list,
 * with a link from each person to the person on the left in the circle. The
 * integer i represents the ith person in the circle. After building a one
 * node circular list for 1, we insert 2 through N after that node, resulting
 * in a circule with 1 through N, leaving x point to N. Then, we skip
 * M-1 nodes, beginning with 1, and set the link of the (M-1)st to skip
 * the Mth, continuing until only one node is left.
 */
 
 /**************************************************************************
  *                             Wikipedia
  * People are standing in a circle waiting to be executed. Counting
  * begins at a specified point in the circle and proceeds around the
  * circle in a specified direction. After a specified number of
  * people are skipped, the next person is executed. The procedure is
  * repeated with the remaining people, starting with the next person,
  * going in the same direction and skipping the same number of people,
  * until only one person remains, and freed.
  **************************************************************************/
  
#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node {
  int item;
  link next;
  };

/*
 * Excercise 3.24
 * Write a function that returns the number of nodes on a circular list,
 * given a pointer to one of the nodes on the list.
 */
int Cound(const link node)
{
  int i=0;
  link Location=node;
  
  do
  {
    i+=1;
    Location=Location->next;
  }while(Location->next!=node);
  
  return i;
  }
  
/*
 * Excersice 3.25
 * Write a code fragment that determines the number of nodes that are
 * between the nodes referenced by two given pointer x and t to nodes on
 * a circular list.
 */
 int NumberOfInBetweenNodes(const link node)
 {
  link Location=node;
  int i=0;
  
  while(Location!=node)
  {
  }
  return i;
}

/*
 * Program entry point
 */
int main(int argc, char *argv[])
{
  int i;
  int N;
  int M;
  link t;
  link x;
  
  /*
   * Argument check
   */
   if(argc!=3)
   {
    printf("Usage: link <Num> <Num>\n");
    return 1;
   }
   
   N=atoi(argv[1]);
   M=atoi(argv[2]);
   t=(link)malloc(sizeof(struct node));
   x=t;
   
   /*
    * Circular list point to itself.
    */
   t->item=1;
   t->next=t;
   
   /*
    * Insert next elements into the circular list.
    */
   for(i=2;i<=N;i++
   {
    x=(x->next=(link)malloc(struct node)));
    x->item=i;
    x->next=t;
   }
   
   /*
    * Print the number of nodes in the circular linked list.
    */
   printf("\nNumber of nodes in the circular linked list: %d\n\n",Count(x));
   
   /*
    * Print the circular linked list.
    */
   x=t;
   do
   {
    printf("Pointer Address: \t0x%x\n",(unsigned int)x);
    printf("Item inside current address: %d\n",x->item);
    printf("Link Address: \t\t0x%x\n\n",(unsigned int)x->next);
    x=x->next;
   }while(x!->t);
   
   /*
    * Solution to the Josepush Problem.
    */
   printf("Initial address of the link list: 0x%x\n",(unsigned int)t);
   while(x!=x->next)
   {
    for(i=1;i<M;i++)
    {
      x=x->next;
    }
    
    /*
     * Free unused memory.
     */
    free(x->next);
    x->net=x->next->next;
    N--;
   }
   printf("%d\n",x->item);
   return 0;
}
