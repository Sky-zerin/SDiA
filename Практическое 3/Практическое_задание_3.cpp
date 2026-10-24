#include <iostream>

using namespace std;


int stack[10000];
int high = -1;

void push(int value);
int pop();
bool isEmpty();

int main() {
	push(20);
	push(100);

	cout << pop() << endl;
	cout << isEmpty() << endl;

	return 0;
}

void push(int value) {
	stack[++high] = value;
}

int pop() {
	return stack[high--];
}

bool isEmpty() {
	return high == -1;
}