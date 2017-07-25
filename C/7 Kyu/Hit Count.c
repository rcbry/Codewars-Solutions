#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int value;
    struct Node *next;
};

struct Node * New_node(int qq) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->value = qq;
  temp->next = NULL;
  return temp;
}

struct Node * counter_effect(const char *hit_count, size_t *p_result_count)
{
  *p_result_count = strlen(hit_count);
  struct Node *node = (struct Node *)malloc(*p_result_count * sizeof(struct Node));
  (struct Node *)calloc(*p_result_count, sizeof(struct Node));
  
  for(int i = 0;i < *p_result_count;++i) {
    struct Node *digit = &node[i];
    digit -> value = 0;
    digit -> next = NULL;
    for(int j = 1;j <= hit_count[i] - '0';++j) {
      digit -> next = New_node(j); /*j;
      digit -> next = NULL;*/
      digit = digit -> next;
    }
  }
    return node;
}
