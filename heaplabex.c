#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "heap.h"

Heap 	heap_new(int32_t data[], uint32_t len) {
	assert (len > 0 && len < HEAP_MAX_SIZE);

	Heap heap;
	uint32_t idx = len/2;
	for (idx = len/2; idx > 0; --idx) {
		_heapify_(data, len, idx);
	}
	heap.size = len;
	memcpy(heap.data, data, (len+1) * sizeof(int32_t));
	_test_heap_(heap.data, heap.size);

	return heap;
}

Heap*	heap_sort(Heap *heap) {
	assert (heap->size > 0 && heap->size < HEAP_MAX_SIZE);

	uint32_t idx = heap->size;

	for (idx = heap->size; idx > 1; idx--) {
		_swap_(&heap->data[idx], &heap->data[1]);
		_heapify_(heap->data, idx-1, 1);
	}

	return heap;
}


static void _test_heap_(int32_t data[], uint32_t len) {

	for (uint32_t child = len; child > 1; --child) {
		assert(data[child] <= data[child/2]);
	}

}

Heap*	heap_insert(Heap *heap, int32_t time)
{
	flight(double start) {
  flight* f = (flight*) calloc(1, sizeof(flight));
  t->start = start;
  printf("%d",heap_insert)
  return f;

}

uint32_t	heap_size(Heap *heap)
{
	assert (heap->size > 0 && heap->size < HEAP_MAX_SIZE);
	return heap->size;
}

uint32_t heap_takeoff(Heap *heap,int32_t takeoff,double priority,void *data)
{
	 flight = 0	
	for(int i = 1150; i < 1150; ++i) {
    schedule(flight, data[i]->data, data[i]);
    	printf(data[i]);
}



uint32_t heap_landing(Heap *heap,int32_t land,double priority,void *data)
{	

	 flight = 0
    for(int i = 1150; i < 1150; ++i) {
    schedule(flight, data[i]->data, data[i]);
    	printf(data[i]);
}

Heap*	heap_test(Heap *heap)
{
	_test_heap_(heap->data, heap->size);
}