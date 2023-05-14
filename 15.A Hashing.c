#include <stdio.h>
#define SIZE 10 

struct hash_table {
    int key;
    int value;
};

struct hash_table ht[SIZE] = {{-1, -1}};

int hash(int key) {
    return key % SIZE;
}

void insert(int key, int value) {
    int hash_index = hash(key);
    int i = hash_index;

    while (ht[i].key != -1) {

        i = (i + 1) % SIZE;

        if (i == hash_index) {
            printf("Hash table is full\n");
            return;
        }
    }

    ht[i].key = key;
    ht[i].value = value;
    printf("Inserted (%d, %d) at index %d\n", key, value, i);
}
int search(int key) {
    int hash_index = hash(key);
    int i = hash_index;

    while (ht[i].key != key) {

        i = (i + 1) % SIZE;
        if (i == hash_index) {
            printf("%d not found in hash table\n", key);
            return -1;
        }
    }

    return ht[i].value;
}


int main() {
    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    insert(12, 40);
    insert(22, 50);

    printf("Value for key 2: %d\n", search(2));
    printf("Value for key 12: %d\n", search(12));
    printf("Value for key 5: %d\n", search(5));

    return 0;
}
