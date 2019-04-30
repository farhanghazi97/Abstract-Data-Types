#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct QueueNode * QNode;
typedef struct QueueRep  * Queue;

typedef struct QueueNode {
    int value;
    QNode next;
} QueueNode;

typedef struct QueueRep {
    int size;
    QNode head;
    QNode tail;
} QueueRep;

Queue newQueue     (void);
Queue Enqueue      (Queue q , int value);
int   Dequeue      (Queue q);
QNode newQNode     (int value);
bool  QueueIsEmpty (Queue q);
void  PrintQueue   (Queue q);
void  FreeQueue    (Queue q);
