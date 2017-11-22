#ifndef VM_FRAME_H
#define VM_FRAME_H

#include "threads/palloc.h"
#include <list.h>

#define TABLE_LENGTH 64

struct frame
{
  void* memory;
  int tid;
  struct list_elem elem;
};

struct list frame_table;

void init_table(void);  // initialize frame table
void* get_free_frame(enum palloc_flags); // find a free frame
void free_frame(void*);  // free an existing frame

#endif /* vm/frame.h */