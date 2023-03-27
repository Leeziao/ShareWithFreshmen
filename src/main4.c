// #include <stdio.h>
int printf (const char *__restrict __format, ...);

int printf (const char *__restrict __format, ...) {}

int main() {
	printf("Hello World 1\n");
	printf("Hello World %d\n", 2);
	return 0;
}