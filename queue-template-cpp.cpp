#include "queue-template-cpp.h"

template<typename T, class Container>
T Queue<T, Container>::front() const {
	return *data.begin();
}

template<typename T, class Container>
T& Queue<T, Container>::front() {
	return *data.begin();
}

template<typename T, class Container>
void Queue<T, Container>::pop() {
	data.pop_front();
}

template<typename T, class Container>
void Queue<T, Container>::push(const T& add) {
	data.push_back(add);
}

template<typename T, class Container>
size_t Queue<T, Container>::size() const {
	return data.size();
}

template<typename T, class Container>
bool Queue<T, Container>::empty() const {
	return data.empty();
}

template<typename T, class Container>
bool Queue<T, Container>::operator==(const Queue& rhs) const {
	return data == rhs.data;
}

template<typename T, class Container> 
bool Queue<T, Container>::operator!=(const Queue& rhs) const {
	return !(*this == rhs);
}