#define CAPACITY 50000 // Size of the HashTable.
// Defines the HashTable item.

typedef struct Ht_item
{
    char* key;
    char* value;
} Ht_item;
// Defines the HashTable.
typedef struct HashTable
{
    // Contains an array of pointers to items.
    Ht_item** items;
    int size;
    int count;
} HashTable;
HashTable* create_table(int size)
{
    // Creates a new HashTable.
    HashTable* table = (HashTable*) malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}
Ht_item* create_item(char* key, char* value)
{
    // Creates a pointer to a new HashTable item.
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}
void free_item(Ht_item* item)
{
    // Frees an item.
    free(item->key);
    free(item->value);
    free(item);
}

void free_table(HashTable* table)
{
    // Frees the table.
    for (int i = 0; i < table->size; i++)
    {
        Ht_item* item = table->items[i];

        if (item != NULL)
            free_item(item);
    }

    free(table->items);
    free(table);
}
void print_table(HashTable* table)
{
    printf("\nHash Table\n-------------------\n");

    for (int i = 0; i < table->size; i++)
    {
        if (table->items[i])
        {
            printf("Index:%d, Key:%s, Value:%s\n", i, table->items[i] -> key, table->items[i]->value);
        }
    }

    printf("-------------------\n\n");
}

void ht_insert(HashTable* table, char* key, char* value)
{
    // Creates the item.
Ht_item* item = create_item(key, value);

// Computes the index.
int index = hash_function(key);

Ht_item* current_item = table->items[index];

if (current_item == NULL)
{
    // Key does not exist.
    if (table->count == table->size)
    {
        // HashTable is full.
        printf("Insert Error: Hash Table is full\n");
        free_item(item);
        return;
    }

    // Insert directly.
    table->items[index] = item;
    table->count++;
}
else {
    // Scenario 1: Update the value.
    if (strcmp(current_item->key, key) == 0)
    {
        strcpy(table->items[index] -> value, value);
        return;
    }
    else {
            // Scenario 2: Handle the collision.
            handle_collision(table, item);
            return;
        }

}
}
void handle_collision(HashTable* table, unsigned long index, Ht_item* item)
{
    LinkedList* head = table->overflow_buckets[index];

    if (head == NULL)
    {
        // Creates the list.
        head = allocate_list();
        head->item = item;
        table->overflow_buckets[index] = head;
        return;
    }
    else {
        // Insert to the list.
        table->overflow_buckets[index] = linkedlist_insert(head, item);
        return;
    }
}
char* ht_search(HashTable* table, char* key)
{
    // Searches for the key in the HashTable.
    // Returns NULL if it doesn't exist.
    int index = hash_function(key);
    Ht_item* item = table->items[index];

    // Provide only non-NULL values.
    if (item != NULL)
    {
        if (strcmp(item->key, key) == 0)
            return item->value;
    }

    return NULL;
}
void print_search(HashTable* table, char* key)
{
    char* val;

    if ((val = ht_search(table, key)) == NULL)
    {
        printf("Key:%s does not exist\n", key);
        return;
    }
    else {
        printf("Key:%s, Value:%s\n", key, val);
    }
}
unsigned long hash_function(char* str)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}