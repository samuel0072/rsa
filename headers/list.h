typedef struct node node;

//cria uma lista vazia
node* create_empty_list();

//adiciona um nó a lista
void add_to_list(node* head, int info);

//transnforma uma lista em um array
LONG* list_to_array(node* head);

//retorna o tamanho de uma lista
int list_size(node* head);

//desaloca a lista da memoria
void clear_list(node* head);