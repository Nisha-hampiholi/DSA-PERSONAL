#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct playlist
{
    char name[20];
    char singer[20];
    int mm;
    int ss;
    struct playlist *prev;
    struct playlist *next;
}NODE;

NODE *create_node(void)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("insufficient memory\n");
        return 0;
    }
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

NODE *read(NODE *temp)
{
    printf("Enter the details of song:\n");
    printf("Enter the song name: ");
    scanf("%s",temp->name);
    printf("Enter the songer name: ");
    scanf("%s",temp->singer);
    printf("Enter the song time (in mm ss): ");
    scanf("%d %d",&temp->mm,&temp->ss);
    return temp;
}

NODE *insert_front(NODE *head,NODE *temp)
{
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    return head;
}

void f_display(NODE *head)
{
    if(head==NULL)
        printf("Play list is empty");
    else
    {
        NODE *cur=head;
        printf("Song\tSinger\tTime\n");
        while(cur!=NULL)
        {
            printf("%s   \t%s  \t%d:%d\n",cur->name,cur->singer,cur->mm,cur->ss);
            cur=cur->next;
        }
    }
    return;
}
