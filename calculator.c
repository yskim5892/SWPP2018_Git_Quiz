#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main(){

  int n, m;
  char op;

  while(1){
    scanf("%d %c %d", &n, &op, &m);
    switch(op) {
    case '+' : printf("%d %c %d = %d\n", n, op, m, add(n, m)); return 0;
    case '-' : printf("%d %c %d = %d\n", n, op, m, sub(n, m)); return 0;
    case '*' : printf("%d %c %d = %d\n", n, op, m, mul(n, m)); return 0;
    default : printf("invalid input\n"); break;
    }
  }

  return 0;
}

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return 0; // TODO : FIX IT
}
