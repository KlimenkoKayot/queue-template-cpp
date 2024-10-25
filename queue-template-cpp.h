#pragma once

#include <deque>

template <typename T, class Container = std::deque<T>>
class Queue {
private:
	Container data = Container();

public:
	Queue() = default;

	T front() const;
	T& front();
	void pop();
	void push(const T& add);
	size_t size() const;
	bool empty() const;
	bool operator ==(const Queue& rhs) const;
	bool operator !=(const Queue& rhs) const;
};
