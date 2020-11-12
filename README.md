# matricx
A C++ matrix library.

## Matrix definition
A matrix is a collection of numbers arranged into a fixed number of rows and columns. Usually the numbers are real numbers, but our class supports float numbers too.

## Matrix mathematical operations
A flexible matrix class should support a wide variety of mathematical operations in order to reduce the need for the client to write excess code. In particular, the basic binary operators should be supported for various matrix interactions. We would like to be able to add, subtract and multiply matrices, take their transpose, multiply a matrix and vector as well as add, subtract, multiply or divide all elements by a scalar value. We will need to access elements individually by their row and column index.

We will also support an additional operation, which creates a vector of the diagonal elements of the matrix. This last method is useful within numerical linear algebra. We could also add the ability to calculate a determinant or an inverse (although there are good performance-based reasons not to do this directly). However, at this stage we won't support the latter two operations.

Here is a partial listing for the declaration of the matrix operations we will support:

```cpp
Matrix &operator+=(const Matrix &);
Matrix &operator-=(const Matrix &);
Matrix &operator*=(const Matrix &);
Matrix &operator*=(double);
Matrix &operator/=(double);
Matrix operator^(int);
```

## License

This project is released under the [MIT License][].

[MIT License]: https://github.com/akalicki/matrix/blob/master/LICENSE
