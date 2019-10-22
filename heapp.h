#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32

#define TAKEOFF 0
#define LANDING 1

typedef struct _event_ Event;
struct _event_{
uint32_t timestamp;
uint32_t plane_no;
uint32_t t_or_t;
};

typedef struct _heap_ Heap;
struct  _heap_
{
uint32_t size;
Event data[HEAP_MAX_SIZE] ;
};

Heap heap_new(int32_t data[], uint32_t len);
Heap* heap_sort(Heap *heap);
Heap* heap_insert(Heap *heap, int32_t key);
Heap* heap_test(Heap *heap);
int32_t heap_get_max(Heap *heap);
int32_t heap_extract_max(Heap *heap);
uint32_t heap_size(Heap *heap);
uint32_t heap_takeoff(Heap *heap,int32_t takeoff);
uint32_t heap_landing(Heap *heap,int32_t land);

#endif