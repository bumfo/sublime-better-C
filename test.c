int a = 0, *foo(int* (*)(int** (**)(int**), int**), int** (*)(int**), int**);

int** fn(int**);

int main() {
  int *b = &a, *bar(void** fn, int** val);

  return *(*foo)((int* (*)(int** (**)(int**), int**))&bar, &fn, &b);
}

int* foo(int* (*bar)(int** (**fn)(int** val), int** val), int** (*fn)(int** val), int** val) {
  return (*bar)(&fn, val);
}

int* bar(void** fn, int** val) {
  return *(*(int** (**)(int**))fn)(val);
}

int** fn(int** val) {
  return val;
}
