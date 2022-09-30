#include <cstdio>
#include "my-string.hpp"

// TODO: Fill in these functions.

// Destructor.
MyString::~MyString() {

}

// Get the length of the string.
size_t MyString::GetLength() {
	// realloc(this->arr, this->length+1);
	
	// return strlen(this->arr); // ??????????????????????????????????????????????????????????????????????????????? 왜 안됨????????
	return this->length;
}

// Make the string into an empty string.
void MyString::Clear() {
	// realloc(this->arr, this->length+1);
	
	int k = strlen(this->arr);
        for(int i=0; i<k; i++) {
            this->arr[i] = '\0';
        }
}

// Append 's' at the end of this string.
void MyString::Append(MyString *s) {
	// realloc(this->arr, this->length+1);
	// realloc(s->arr, s->length+1);

	int i = this->length + s->length;
	realloc(this->arr, i);
	strcat(this->arr, s->arr);
	this->arr[i] = '\0';

	this->length = strlen(this->arr);
}

// Insert 's' at position 'idx' of this string. idx=0 means the start.
void MyString::Insert(MyString *s, int idx) {
	// realloc(this->arr, this->length+1);
	// realloc(s->arr, s->length+1);

	int i;
	i = this->length;

	if (idx > i)
		return;

	realloc(this->arr, this->length + s->length);

	for(int j=i; j>idx; j--) 
		this->arr[j+s->length-1] = this->arr[j-1];

	int k = s->length;
	for(int j=i; j>idx; j--) {
		this->arr[j-1] = s->arr[k-1];
		k--;
	}
	this->length = strlen(this->arr);
}

// Starting from the position 'idx', remove 'n' characters.
void MyString::Remove(int idx, int n) {
	// realloc(this->arr, this->length+1);	

	int i;
	i = strlen(this->arr);

	if (idx > i)
		return;
	printf("1 : %s\n", this->arr);
	for(int j=idx; j<idx+n; j++) 
		this->arr[j] = '\0';
	printf("1 : %s\n", this->arr);
	for(int j=0; j<i-idx-n; j++) {
		this->arr[idx+j] = arr[idx+n+j];
	}
	printf("1 : %s\n", this->arr);	
	if (i-idx-n >= n) {
		for (int j=0; j<n; j++) {
			this->arr[i-j-1] = '\0';
		}
	}
	printf("1 : %s\n", this->arr);

	this->length = strlen(this->arr);

}