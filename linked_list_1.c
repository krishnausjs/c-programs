#include <stdio.h>
#include <linux/list.h>

struct mystruct
{
    int data;
    struct list_head mylist;
};

struct mystruct first={
    .data=10;
    .mylist=LIST_HEAD_INIT(first.mylist);
};

struct mystruct second;
second.data=20;
INIT_LIST_HEAD(&second.mylist);

LIST_HEAD(mylinkedlist);

