#pragma once

template <class T>
class Queue {
private:
	T* _data;
	size_t _size;
	size_t _firstIndex;
	size_t _lastIndex;
	size_t _countElem;
public:
	Queue(const Queue&) = delete;
	Queue& operator=(const Queue&) = delete;

	Queue(size_t size = 10) : _size(size) {
		_data = new T[_size];
		_firstIndex = 0;
		_lastIndex = 0;
		_countElem = 0;
	}

	void Push(const T& elem) {
		if (_countElem < _size) {
			_data[_lastIndex] = elem;
			_lastIndex = (_lastIndex + 1) % _size;
			_countElem++;
		}
	}

	void PriorityPush(const T& elem)
	{
	//
	}

	bool IsEmpty() const {
		return _countElem == 0;
	}

	bool IsFull() const {
		return _countElem == _size;
	}

	T Pop() {
		const T& elem = _data[_firstIndex]; //???
		_firstIndex = (_firstIndex + 1) % _size;
		_countElem--;
		return elem;
	}


};
