#include <cstdio>
#include "my-string.hpp"

// TODO: Fill in these functions.

// Destructor.
MyString::~MyString() {

}

// Get the length of the string.
size_t MyString::GetLength() {
	// return strlen(this->arr); // ??????????????????????????????????????????????????????????????????????????????? 왜 안됨????????
	return this->length;
}

// Make the string into an empty string.
void MyString::Clear() {
	int k = strlen(this->arr);
        for(int i=0; i<k; i++) {
            this->arr[i] = '\0';
        }
}

// Append 's' at the end of this string.
void MyString::Append(MyString *s) {
	realloc(this->arr, this->length + s->length);
	strcat(this->arr, s->arr);
}

// Insert 's' at position 'idx' of this string. idx=0 means the start.
void MyString::Insert(MyString *s, int idx) {
	int i;
	i = GetLength();

	if (idx > i)
		return;

	for(int j = i; j>idx; j--) {
		arr[j] = arr[j-1];
	}

	arr[idx] = 's';
}

// Starting from the position 'idx', remove 'n' characters.
void MyString::Remove(int idx, int n) {
	int i;
	i = GetLength();

	if (idx > i)
		return;

		
	for(int i=idx; i<idx+n; i++) 
		arr[i] = '\0';

	for(int i=idx; i<idx+n; i++) {
		if (arr[i+n] != '\0')
			arr[i] = arr[i+n];
	}

}
