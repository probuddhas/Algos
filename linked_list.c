//Program to perform the basic Linked-list operations

#include<stdio.h>
#include<conio.h>

void addbeg();
void display();
void menu();
void create();
void addend();
void delbeg();
void delend();
void addany();
void delany();
void reverse();

struct link
{
       int info;
       struct link *next;
};
typedef struct link node;
node *head=NULL;

int main()
{
    int ch;
    while(1)
    {
            menu();
            scanf("%d",&ch);
            switch(ch)
            {
                      case 1: create();
                              break;
                      case 2: addbeg();
                              break;
                      case 3: addend();
                              break;
                      case 4: addany();
                              break;
                      case 5: delbeg();
                              break;
                      case 6: delend();
                              break;
                      case 7: delany();
                              break;
                      case 8: reverse();
                              break;
                      case 9: display();
                              break;
                      case 10: exit(0);
                              break;
                      default: printf("Wrong choice ");
            }
    }
}

void menu()
{
     printf("\n1. Create");
     printf("\n2. Add at beginning ");
     printf("\n3. Add at end ");
     printf("\n4. Add at any position ");
     printf("\n5. Delete at beginning");
     printf("\n6. Delete at end ");
     printf("\n7. Delete at any position ");
     printf("\n8. Reverse");
     printf("\n9. Display");
     printf("\n10. Exit");
     printf("\nEnter your choice ");
}

void addbeg()
{
     int val;
     node *tmp,*p;
     tmp=(node *)malloc(sizeof(node));
     printf("Enter data ");
     scanf("%d",&val);
     tmp->info=val;
     p=head;
     head=tmp;
     tmp->next=p;
}

void display()
{
     node *p=head;
     if(head==NULL)
     {
                   printf("List is empty");
                   return;
     }
     printf("List is ");
     while(p!=NULL)
     {
                   printf("%d ",p->info);
                   p=p->next;
     }
}

void create()
{
     node *tmp,*p;
     int i,no,val;
     printf("Enter no. of nodes ");
     scanf("%d",&no);
     for(i=1;i<=no;i++)
     {
                       p=head;
                       tmp=(node *)malloc(sizeof(node));
                       printf("Enter data ");
                       scanf("%d",&val);
                       tmp->info=val;
                       if(head==NULL)
                       {
                                     head=tmp;
                                     tmp->next=p;
                       }
                       else
                       {
                           while(p->next!=NULL)
                           {
                                   p=p->next;
                           }
                       p->next=tmp;
                       tmp->next=NULL;
                       }
     }
}

void addend()
{
     node *tmp,*p=head;
     int val;
     tmp=(node *)malloc(sizeof(node));
     printf("Enter data ");
     scanf("%d",&val);
     tmp->info=val;
     while(p->next!=NULL)
     {
                         p=p->next;
     }
     p->next=tmp;
     tmp->next=NULL;
}

void delbeg()
{
     node *p=head,*q;
     if(head==NULL)
     {
                   printf("List is empty");
                   return;
     }
     q=p->next;
     head=q;
     printf("Deleted is %d",p->info);
     free(p);
}

void delend()
{
     node *p=head,*q;
     q=p;
     if(head==NULL)
     {
                   printf("List is empty");
                   return;
     }              
     while(p->next!=NULL)
     {
                 q=p;        
                 p=p->next;
     }   
     if(p==head)
     {
                head=NULL;
     }     
     q->next=NULL;
     printf("Deleted is %d",p->info);
     free(p);
}

void addany()
{
     node *tmp,*p;
     int pos,val,c=0,i;
     p=head;
     printf("Enter position ");
     scanf("%d",&pos);
     while(p!=NULL)
     {
                   c=c+1;
                   p=p->next;
     }
     p=head;
     if(pos>0 && pos<=c+1)
     {
              printf("Enter data ");
              scanf("%d",&val);
              tmp=(node *)malloc(sizeof(node));
              tmp->info=val;
              if(pos==1)
              {
                        tmp->next=head;
                        head=tmp;
              }
              else
              {
                  for(i=1;i<pos-1;i++)
                  {
                                       p=p->next;
                  }
                  tmp->next=p->next;
                  p->next=tmp;
              }
     }
     else
     {
         printf("Wrong choice ");
     }
}

void delany()
{
     node *p=head,*q;
     int pos,c=0,i;
     if(head==NULL)
     {
                   printf("List is empty ");
                   return;
     }
     printf("Enter position  ");
     scanf("%d",&pos);
     while(p!=NULL)
     {
                   c=c+1;
                   p=p->next;
     }
     p=head;
     if(pos>0 && pos<=c)
     {
              if(pos==1)
              {
                        head=p->next;
                        p->next=NULL;
                        printf("Deleted is %d ",p->info);
                        free(p);
              }
              else
              {
                  for(i=1;i<pos-1;i++)
                  {
                                      p=p->next;
                  }
                  q=p->next;
                  printf("Deleted is %d",p->next->info);
                  p->next=p->next->next;
                  q->next=NULL;
                  free(q);
              }
     }
     else
     {
         printf("Wrong Choice ");
     }
}

void reverse()
{
     node *p=head,*q,*r;
     while(p!=NULL)
     {
                   if(p==head)
                   {
                              r=p->next;
                              p->next=NULL;
                              q=p;
                   }
                   else
                   {
                       r=p->next;
                       p->next=q;
                       q=p;
                   }
                   p=r;
     }
     head=q;
     printf("List reversed ");
}
