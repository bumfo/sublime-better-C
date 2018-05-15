#include <stdio.h>
#include <stdbool.h>

int f(int i) {
  if (i == 0) {
    return 1;
  } else {
    int j = 0;

    switch (i) {
      case 1:
        return f(3);
      case 2:
        break;
      default:
        goto done;
    }

    for (int k = 0; k < i; ++k) {
      if (i == 0) {
        continue;
      }

      do {
        while (true) {
          ++j;
          goto done;
        }
      } while (true);
    }

done:
    return f(j);
  }
}

int main() {
  printf("%d\n", f(2));
}
