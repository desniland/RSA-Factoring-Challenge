#include <stdio.h>
#include "factorize_num.h"

int main(int argc, char *argv[]) {
if (argc != 2) {
fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
return 1;
}

FILE *fp = fopen(argv[1], "r");
if (fp == NULL) {
perror("fopen");
return 1;
}

long int num;
while (fscanf(fp, "%ld", &num) == 1) {
test_divisor(num);  // Call the function to factorize
}

fclose(fp);

return 0;
}
