#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void phase1();
void phase2();
void boom();

int main() {
  phase1();

  printf("You've passed phase 1\n");

  phase2();
  
  return 0;
}

void boom() {
  printf("BOOM! The bomb went off\n");
  printf("\n\n If this was an actual graded class, then a server call would be going to your instructors right now, and you'd be losing points.\n");
  exit(1);
}


void phase1() {
  printf("Gimme the password: ");

  char *buf;
  scanf("%ms", &buf);

  if (strcmp(buf, "god") == 0) {
    printf("Phase 1 passed\n");
    free(buf);
  } else {
    free(buf);
    boom();
  }
}

int mystery(int x) {
  while (x > 0) x -= 11;
  return x == 0;
}

void phase2() {
  printf("Password #2? ");

  char *buf;
  scanf("%ms", &buf);

  bool passed = false;

  if (strlen(buf) == 11) {
    int sum = 0;
    for (int i = 0; i < strlen(buf); i++) {
      sum += buf[i];
    }

    if (mystery(sum)) {
      passed = true;
    }
  }

  free(buf);
  
  if (passed) {
    printf("Winner, winner, chicken dinner \n");
  } else {
    boom();
  }
}
