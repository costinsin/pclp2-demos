#include <stdio.h>
 
void increment(void *data, int element_size) {
        /* Se verifică dacă data introdusă este un char */
	if (element_size == sizeof(char)) {
                /* După cum am precizat, pentru a putea fi dereferențiat,
                 * un pointer la void trebuie castat
                 */
		char *char_ptr = data;
 		++(*char_ptr);
	}
 
	if (element_size == sizeof(int)) {
		int *int_ptr = data;
		++(*int_ptr);
	}
}
 
int main() {
	char c = 'a';
	int x = 10;
 
	increment(&c, sizeof(c));
	increment(&x, sizeof(x));
 
	printf("%c, %d\n", c, x); /* Va avea ca rezultat: b, 11 */
	return 0;
}