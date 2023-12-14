#include <stdio.h>
#include <stdlib.h>

#define RN_BUFFER_SIZE 1024

void loop(void);
char *read_line(void);
char **split_line(char *line);
int execute(char **args);

char *read_line(void) {
  int buffer_size = RN_BUFFER_SIZE;
  char *buffer = malloc(sizeof(char) * RN_BUFFER_SIZE);

  if (!buffer) {
    fprintf(stderr, "error allocating the buffer size");
    exit(EXIT_FAILURE);
  }

  int position = 0;
  char current_char;

  while (1) {
    current_char = getchar();

    if (current_char == EOF || current_char == '\n') {
      buffer[position] = '\0';
      return buffer;
    } else {
      buffer[position] = current_char;
    }

    position++;

    if (position > RN_BUFFER_SIZE) {
      buffer_size += RN_BUFFER_SIZE;

      buffer = realloc(buffer, buffer_size);

      if (!buffer) {
        fprintf(stderr, "error reallocating the buffer size");
        exit(EXIT_FAILURE);
      }
    }
  }
}

void loop(void) {

  int status = 1;
  char *line;

  do {
    printf("🍺 > ");
    line = read_line();

  } while (status);
}

int main(void) {

  loop();
  return EXIT_SUCCESS;
}
