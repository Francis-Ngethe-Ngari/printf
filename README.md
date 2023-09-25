# **Introduction to prinf**

## **Overview of printf**


## **NGARI-FRANCIS(author)
## **JUSTIN UCHECHUKWU(as a collaborator)

- In C Programming, `printf()` is one of the main output funtion.The function
sends formated output to the screen.

### **Example of a C Output**

```
	#include <stdio.h>

	/*Displays String inside double qoutes*/
	int main()
	{
		printf("Creating a custorm printf function");
		return (0);
	}
```

### **Output**

```
	Creating a custorm printf function
```

- How does the program work?

- All valid C programs must contain the `main()` function. The code execution
begins from the start of the main() function.

- `printf()` is a library function to send formatted output to the screen.
The function prints the string inside quotations.

- To use `printf()` in our program, we need to include stdio.h header file
using the `#include <stdio.h>` statement.

- The `return (0);` statement inside the `main()` function is the "Exit status"
of the program. It's optional.

#### **Syntax**

```
	printf("format_string", Arguments);
```

#### **Parameters**

- format_string: Can be a single string or a string containing a format specify.

- Arguements: It is the variable names whose value is to be printed.

 
