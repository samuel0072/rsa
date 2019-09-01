#include "\..\headers\list.h"


struct node{
  LONG info;
  struct node* next;
};

node* create_empty_list()
{
  return NULL;
}

node* add_to_list(node* head, LONG info)
{
  if(head == NULL)
  {
    head = (node*)malloc(sizeof(node));
    head->info = info;
    head->next = NULL;
  }
  node* aux = head->next;
  while(aux != NULL)
  {
    aux = aux->next;
  }
  node* new_node = (node*)malloc(sizeof(node));
  new_node->info = info;
  new_node->next = NULL;
  aux->next = new_node;

  return head;
}

LONG* list_to_array(node* head)
{
  int size = list_size(head);
  LONG* array = (LONG*)malloc(size*sizeof(LONG));
  node* aux = head;
  int i = 0;

  while(aux != NULL) {
    array[i] = aux->info;
    aux = aux->next;
    i++;
  }
  return array;
}

int list_size(node* head) 
{
  int size = 0;
  node* aux = head;
  while(aux != NULL) {
    size++;
    aux = aux->next;
  }
  return size;
}

void clear_list(node* head) {
  node* aux = head;

  while( aux != NULL) {
    node* aux2 = aux->next;
    free(aux);
    aux = aux2;
  }
}
