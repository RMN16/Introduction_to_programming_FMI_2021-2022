#include <iostream>
using namespace std;

int charLenght(char* sentence) {
	if (*sentence == '\0') {
		return 0;
	}

	return 1 + charLenght(sentence + 1);
}

int main(){

char arr[100] = "I like apple juice";
charLenght(arr);

return 0;
}
