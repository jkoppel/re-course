#include<stdio.h>

int isRegistered() {
  return 0;
}

int main() {
  if (isRegistered()) {
    printf("I won't let you in\n");
  } else {
    printf("Curses! Foiled again.\n");
  }
  return 0;
}
