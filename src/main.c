#include <stdio.h>
#include <stdlib.h>

void loop(void);
char *read_line(void);
char **split_line(char *line);
int execute(char **args);

void loop(void) {

  int status = 1;

  do {
    printf("🍺 > ");
  } while (status);

}


int main(void) {
  return EXIT_SUCCESS;
}
