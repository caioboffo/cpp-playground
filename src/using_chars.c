
#include <stdio.h>

typedef char *string;
string String(char*);

int main() {
  string text = "some strings in here";
  printf("%s\n", text);
  return 0;
}
