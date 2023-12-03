
# Vector

Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.


## Iterators

begin() – Returns an iterator pointing to the first element in the vector

end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector

rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

cbegin() – Returns a constant iterator pointing to the first element in the vector.

cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.

crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element

crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
## Most used functions in Vector


begin() – it returns an iterator pointing to the first element of the vector.

auto iterator = itr;

itr = v1.begin();

end() – it returns an iterator pointing to the element theoretically after the last element of the vector.

auto iterator = itr;

itr = v1.end();

push_back() – it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.

vector<int> v1;

v1.push_back(1);
v1.push_back(2);

insert() – it is used to insert an element at a specified position.

auto it= v1.begin();

v1.insert(it,5); //inserting 5 at the beginning

erase() – it is used to delete a specific element

vector<int> v1;

auto it= v1.begin();

v1.erase(it);// erasing the first element

pop_back() – it deletes the last element and returns it to the calling function.

v1.pop_back();

front() – it returns a reference to the first element of the vector.

v1.front();

back() – it returns a reference to the last element of the vector.

clear() – deletes all the elements from the vector.
v1.clear();

empty() – to check if the vector is empty or not.
v1.empty();

size() – returns the size of the vector
v1.size();



## Other Functions:

cbegin() – it refers to the first element of the vector.

cend() – it refers to the theoretical element after the last element of the vector.

rbegin() – it points to the last element of the vector.

rend() – it points to the theoretical element before the first element of the vector.

crbegin() – it refers to the last element of the vector.

crend() – it refers to the theoretical element before the first element of the vector.

max_size() – returns the maximum size the vector can hold.

capacity() – it returns the current capacity of the vector.