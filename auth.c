#include <stdio.h>
#include <string.h>

int main(void) {
  char password[20];
  char first_name[20];
  char user_input[20];

  printf("Enter your first name: \n");
  fgets(first_name, 20, stdin);
  first_name[strlen(first_name) - 1] = '\0';

  printf("Enter your password: \n");
  fgets(password, 20, stdin);
  password[strlen(password) - 1] = '\0';

  printf("checking your password \n");
  printf("%s, enter your password: \n", first_name);
  fgets(user_input, 20, stdin);
  user_input[strlen(user_input) - 1] = '\0';

  if (strcmp(user_input, password) == 0) {
    printf("Access granted \n");
    printf("you're welcome %s \n", first_name);
  }

  else {
    while (strcmp(user_input, password) != 0) {
      printf("Access denied \n");
      printf("%s, enter your password: \n", first_name);
      fgets(user_input, 20, stdin);
      user_input[strlen(user_input) - 1] = '\0';

    if (strcmp(user_input, password) == 0) {
      printf("Access granted \n");
      printf("%s, you're welcome \n", first_name);
      break;
    }
    }
  }

    return 0;
}