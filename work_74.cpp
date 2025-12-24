
#include <stdio.h>
#include <string.h>

int match(char open, char close) {
	if (open == '(' && close == ')') return 1;
	if (open == '[' && close == ']') return 1;
	if (open == '{' && close == '}') return 1;
	return 0;
}

int main(void) {
	char s[64];
	if (!fgets(s, sizeof(s), stdin)) return 0;
	int len = (int)strcspn(s, "\n");

	char stack[64];
	int top = 0;

	for (int i = 0; i < len; ++i) {
		char c = s[i];
		if (c == '(' || c == '[' || c == '{') {
			stack[top++] = c;
			if (top >= (int)sizeof(stack)) { printf("no\n"); return 0; }
		} else if (c == ')' || c == ']' || c == '}') {
			if (top == 0) { printf("no\n"); return 0; }
			char open = stack[--top];
			if (!match(open, c)) { printf("no\n"); return 0; }
		}
	}

	if (top == 0) printf("yes\n"); else printf("no\n");
	return 0;
}

