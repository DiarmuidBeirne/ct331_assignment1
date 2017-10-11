#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;



//Creates linked list element with given content of size
//Returns pointer 
listElement* createEl(char* data, size_t size);


//Prints each element in the list
void traverse(listElement* start);


//Inserts new element after given element
//Returns pointer to new element
listElement* insertAfter(listElement* after, char* data, size_t size);


//Delete element after the passed element
void deleteAfter(listElement* after);

// Q2 Part1-Returns the number of elements in a linked list
int length(listElement* list);

// Q2 Part2	  
void push(listElement** list, char* data, size_t size);


// Q2 Part3
listElement* pop(listElement** list);


// Q2 Part4
void enqueue(listElement** list, char* data, size_t size);


// Q2 Part5
listElement* dequeue(listElement* list);



#endif
