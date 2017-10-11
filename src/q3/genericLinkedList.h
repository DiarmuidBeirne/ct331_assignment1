#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST




typedef struct listElementStruct {
	void* data;
	size_t size;
	void(*printFunction)(void* data);
	struct listElementStruct* next;
} listElement;


void printChar(void* data);
void printString(void* data);
void printInt(void* data);
void printFloat(void* data);
void printDouble(void* data);
void printLong(void* data);




listElement* createEl(void* data, size_t size, void* printFunction);

//Prints out each element 
void traverse(listElement* start);


listElement* insertAfter(listElement* after, void* data, size_t size, void* printFunction);

//Delete the element after the passed element
void deleteAfter(listElement* after);

int length(listElement* list);

void push(listElement** list, void* data, size_t size, void* printFunction);

listElement* pop(listElement** list);

void enqueue(listElement** list, void* data, size_t size, void* printFunction);

listElement* dequeue(listElement* list);

#endif