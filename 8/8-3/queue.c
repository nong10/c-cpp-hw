/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if(queue_is_full(pq)) {
		return -1;
	}
	Node* newNode = malloc(sizeof(Node));
	if(pq -> items == 0) {
		pq -> front = newNode;
		pq -> rear = newNode;
		pq -> items ++;
		newNode -> item = item;
		newNode -> next = NULL;
		return 0;
	}
	pq -> rear -> next = newNode;
	pq -> rear = newNode;
	pq -> items ++;
	newNode -> next = NULL; // set new Node
	newNode -> item = item;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	if(queue_is_empty(pq)) {
		return -1;
	}
	if(queue_item_count(pq) == 1) {
		*pitem = pq -> front -> item;
		free(pq -> front);
		 pq -> items --;
		initialize_queue(pq);
		return 0;
	}
	Node* temp;
	*pitem = pq -> front -> item;
	temp = pq -> front;
	pq -> front = pq -> front -> next;
	pq -> items --;
	free(temp);
	return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void print_queue(Queue *pq)
{
	Node* cursor = pq -> front;
	printf("content of the queue: ");
	while(cursor != NULL) {
		printf("%d ", cursor -> item);
		cursor = cursor -> next;
	}
	printf("\n");
}
