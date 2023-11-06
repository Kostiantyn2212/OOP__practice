#include "Vector.h"

template <typename T>
Vector<T>::Vector() : size(0), capacity(10) {
    array = new T[capacity];
}

template <typename T>
Vector<T>::~Vector() {
    delete[] array;
}

template <typename T>
int Vector<T>::getSize() {
    return size;
}

template <typename T>
int Vector<T>::getCapacity() {
    return capacity;
}

template <typename T>
void Vector<T>::push_back(const T element) {
    if (size < capacity) {
        array[size] = element;
    }
    else if (size >= capacity) {
        capacity *= 2;
        T* new_array = new T[capacity];
        for (int i = 0; i < size; i++) {
            new_array[i] = array[i];
        }
        delete[] array;
        array = new_array;
        array[size] = element;
    }
    size++;
}

template <typename T>
void Vector<T>::pop_back() {
    if (size > 0) {
        size--;
    }
}

template <typename T>
T Vector<T>::at(int index) {
    if (index >= 0 && index < size) {
        return array[index];
    }
    else {
        return T();
    }
}

template <typename T>
T Vector<T>::operator[](int index) {
    return at(index);
}