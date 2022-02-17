#include <unistd.h>

int main (void)
{
  char c;
  while(read(0, &c, 1) > 0)
    write(1, &c, 1);
  return (0);
}
