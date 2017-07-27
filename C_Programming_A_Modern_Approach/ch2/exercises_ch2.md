## C Programming Language 2nd Ed. 
### Chapter 2 Exercises by Tnel

#### 2.1
You get this error:
```
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```
this is from the main function stating it is returning an **int** type but it doesnt return anything with the original code. To solve this add a return statement like this: 
```c
return 0;
```

#### 2.2
##### (a) 
###### Directives
The include command string for standard i/o library is a directive.
``` c
#include <stdio.h>
```
###### Statements
The printf and return command strings are statements.
```c
printf(...);

return 0;
```
##### (b) Output
The output would look like this:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```
#### 2.3
##### condensed dweight.c
```c 
#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;
 
    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
```
#### 2.4
##### noninitialzed_values.c
```c
#include <stdio.h>
// 2.4 - creating a program that declares several int and float variable without initalizing them then printing the values
int main(void) {
    int a,b,c;
    float d,e,f;

    printf("int a is: %d\n", a);
    printf("int b is: %d\n", b);
    printf("int c is: %d\n", c);

    printf("float d is: %.3f\n", d);
    printf("float e is: %.3f\n", e);
    printf("float f is: %.3f\n", f);

    return 0;
}
```
###### output
```
int a is: 18341942
int b is: 32767
int c is: 1588835288
float d is: 0.000
float e is: 0.000
float f is: 0.000
```
I actually do see a pattern but mainly because the float is empty  when it is not initialized. The **INT** values are random.
#### 2.5
| Identifier | Legal | Not Legal |
|:---:|:---:|:---:|
|100_bottles| |X |
|_100_bottles |X | |
|one_hundred_bottles |X | |
| bottles_by_the_hundred| X| |

#### 2.6
An identifer with more than one adjacent underscore such as  `current__balance` is a bad idea because it is hard to read and determine how many underscores are used.

#### 2.7
| Terms | C Keyword? |
|:---:|:---:|
|for|X|
|if|X|
|main||
|printf||
|while|X|

#### 2.8
There are 14 tokens in the following statement
`answer=(3*q-p*p)/3;`
answer, =, (, 3, *, q, -, p, *, p, ), /, 3, ;

#### 2.9
An easier read statement (with spaces) from 2.8 would be:
`answer = (3*q - p*p) / 3;` 


#### 2.10
The following are essential spaces in **dweight.c**:
`int main(void)`
`int height`
`return 0`


