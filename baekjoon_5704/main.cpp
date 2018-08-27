#include <cstdio>

int n[26], c;
char i1[300];
int main() {
	while (gets_s(i1, 201)&&(i1[0] != '*')){
		for (int i = 0; i1[i]; i++) if(i1[i] != ' ') n[i1[i] - 'a']++;
		for (int i = 0; i < 26; i++) {
			if (n[i] != 0) c++;
			n[i] = 0;
		}
		if (c == 26) printf("Y\n");
		else printf("N\n");
		c = 0;
	}
	return 0;
}