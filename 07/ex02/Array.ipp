#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->length = 0;
    this->array = nullptr;
}

template <typename T>
Array<T>::Array(size_t length)
{
    this->length = length;
    this->array = new T[length]();
}

template <typename T>
Array<T>::Array(const Array <T> &array)
{
    copy(array);
}

template <typename T>
Array<T>::~Array()
{
    if (this->array)
        delete [] this->array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &array)
{
    if (this->array)
        delete [] this->array;
    copy(array);
    return (*this);
}

template <typename T>
T       &Array<T>::operator[](int index)
{
    if (index < 0 || index >= this->length)
        throw Array<T>::IndexError();
    return (this->array[index]);
}

template <typename T>
void    Array<T>::copy(const Array <T> &array)
{
    this->length = array.length;
    if (!this->length)
        this->array = nullptr;
    else
        this->array = new T[this->length];
    for (int i = 0; i < this->length; i++)
        this->array[i] = array.array[i];
}

template <typename T>
size_t  Array<T>::size() const
{
    return (this->length);
}

template <typename T>
const char *Array<T>::IndexError::what() const throw()
{
    return ("Error index!");
}
