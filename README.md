# Operators  
## Aim:  
To study and implement operators in C++

## Theory:  
Operators in C++ are symbols or keywords used to perform operations on data, enabling tasks like arithmetic, comparisons, and logical evaluations. These operators are essential for manipulating data and variables, allowing programmers to perform calculations, make decisions, and control program flow. Operators are categorized into several types:

### 1. Arithmetic Operators  
Used for basic math operations, they manipulate numeric data types such as `int`, `float`, and `double`.  
- **Addition (`+`):** Adds two operands.  
  - Example: `int sum = a + b;`  
- **Subtraction (`-`):** Subtracts the second operand from the first.  
  - Example: `int difference = a - b;`  
- **Multiplication (`*`):** Multiplies two operands.  
  - Example: `int product = a * b;`  
- **Division (`/`):** Divides the numerator by the denominator. The result is a quotient.  
  - Example: `float quotient = a / b;`  
- **Modulus (`%`):** Returns the remainder of a division operation (only for integer types).  
  - Example: `int remainder = a % b;`  

### 2. Relational Operators  
Used to compare two values. The result of a relational expression is either `true` or `false`.  
- **Equal to (`==`)**: Checks if two operands are equal.  
  - Example: `if (a == b)`  
- **Not equal to (`!=`)**: Checks if two operands are not equal.  
  - Example: `if (a != b)`  
- **Greater than (`>`)**: Checks if the left operand is greater than the right.  
  - Example: `if (a > b)`  
- **Less than (`<`)**: Checks if the left operand is less than the right.  
  - Example: `if (a < b)`  
- **Greater than or equal to (`>=`)**: Checks if the left operand is greater than or equal to the right.  
  - Example: `if (a >= b)`  
- **Less than or equal to (`<=`)**: Checks if the left operand is less than or equal to the right.  
  - Example: `if (a <= b)`  

### 3. Logical Operators  
Used to perform logical operations, allowing for combining multiple conditions.  
- **Logical AND (`&&`)**: Returns `true` if both operands are `true`.  
  - Example: `if (a > 0 && b > 0)`  
- **Logical OR (`||`)**: Returns `true` if at least one operand is `true`.  
  - Example: `if (a > 0 || b > 0)`  
- **Logical NOT (`!`)**: Reverses the logical state of its operand; turns `true` to `false` and vice versa.  
  - Example: `if (!a)`  

### 4. Bitwise Operators  
Perform operations on individual bits of integer data types. They are often used in low-level programming and optimizing code.  
- **AND (`&`)**: Performs a bitwise AND operation. Each bit in the result is 1 if both corresponding bits of the operands are 1.  
  - Example: `int result = a & b;`  
- **OR (`|`)**: Performs a bitwise OR operation. Each bit in the result is 1 if at least one of the corresponding bits of the operands is 1.  
  - Example: `int result = a | b;`  
- **XOR (`^`)**: Performs a bitwise exclusive OR. Each bit in the result is 1 if the corresponding bits of the operands are different.  
  - Example: `int result = a ^ b;`  
- **NOT (`~`)**: Inverts all the bits of the operand.  
  - Example: `int result = ~a;`  
- **Left Shift (`<<`)**: Shifts the bits of the left operand to the left by the number of positions specified by the right operand.  
  - Example: `int result = a << 2;`  
- **Right Shift (`>>`)**: Shifts the bits of the left operand to the right by the number of positions specified by the right operand.  
  - Example: `int result = a >> 2;`  

### 5. Assignment Operators  
Used to assign values to variables. These operators can also perform operations before assigning the value.  
- **Simple Assignment (`=`)**: Assigns the right operand to the left operand.  
  - Example: `a = b;`  
- **Add and Assign (`+=`)**: Adds the right operand to the left operand and assigns the result to the left operand.  
  - Example: `a += b;`  
- **Subtract and Assign (`-=`)**: Subtracts the right operand from the left operand and assigns the result to the left operand.  
  - Example: `a -= b;`  
- **Multiply and Assign (`*=`)**: Multiplies the right operand with the left operand and assigns the result to the left operand.  
  - Example: `a *= b;`  
- **Divide and Assign (`/=`)**: Divides the left operand by the right operand and assigns the result to the left operand.  
  - Example: `a /= b;`  
- **Modulus and Assign (`%=`)**: Applies modulus operation and assigns the result to the left operand.  
  - Example: `a %= b;`  

### 6. Increment/Decrement Operators  
Used to increase or decrease a variable's value by one. These operators can be used in both prefix and postfix forms.  
- **Increment (`++`)**: Increases the value of the variable by 1.  
  - Prefix: `++a` (increments before use)  
  - Postfix: `a++` (increments after use)  
- **Decrement (`--`)**: Decreases the value of the variable by 1.  
  - Prefix: `--a` (decrements before use)  
  - Postfix: `a--` (decrements after use)  

### 7. Conditional (Ternary) Operator  
The conditional operator (`? :`) is used as a shorthand for an `if-else` statement.  
- **Syntax**: `condition ? expression1 : expression2`  
  - If the condition is `true`, `expression1` is executed; otherwise, `expression2` is executed.  
  - Example: `int result = (a > b) ? a : b;`  

### 8. Special Operators  
These include various operators like the sizeof operator and comma operator.  
- **Sizeof**: Returns the size, in bytes, of a data type or variable.  
  - Example: `sizeof(int)` returns the size of an `int`.  
- **Comma (``,`)**: Used to separate multiple expressions where only the right-most expression is evaluated.  
  - Example: `a = (b++, c+2);`  

### Conclusion  
Operators in C++ are essential for performing various computations, comparisons, and data manipulations. Understanding these operators and their usage is fundamental to writing efficient and functional C++ programs.
