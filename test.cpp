int a = 0, *foo(int* (*)(), int*);

int main() {
  int *b = &a, *(*bar)(int**);

  return *(*foo)(bar, b);
}

int* foo(int* (*bar)(int**), int* var) {
  return (*bar)(&var);
}

int* bar(int** var) {
  return *var;
}
