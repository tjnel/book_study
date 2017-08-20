## C Programming Language 2nd Ed. 
### Chapter 5 Exercises by Tnel

#### 5.1
```c
5.1 (a): 1 
5.1 (b): 1 
5.1 (c): 1 
5.1 (d): 0 
```
#### 5.2
```c
5.2 (a): 1 
5.2 (b): 1 
5.2 (c): 1 
5.2 (d): 1 
```

#### 5.3
```c
5.2 (a): 1 --- 3 4 5 
5.2 (b): 0 --- 7 8 9 
5.2 (c): 1 --- 8 8 9 
5.2 (d): 1 --- 2 1 1
```
#### 5.4
```c
(i > j) - (i < j)
```

#### 5.5
Yes, it is a legal statement however it will not work like it would in other languages as (n >= 1) && (1 <= 10). Instead it is actually interpreted as (n >= 1) <= 10 which would result in 1 (True) because 
`(n >= 1) resolves to 0`
and 
`(0 <= 10) resolves to 1`
so it will print the message falsely.
#### 5.6
Yes, it is legal and it will not print the message because -9 is not equal to 5.

#### 5.7
it will print out 17 in both cases, like a absolute value of the int.

#### 5.8
```c
if (age >= 13 && age <= 19)
    teenager = true;
else
    teenager = false;
```

#### 5.9
yes they are equivalent

#### 5.10
`onetwo`

#### 5.11
```c
switch (area_code) {
       case 229: printf("Albany\n"); break;
       case 404: case 470: case 678: case 770: printf("Atlanta\n"); break;
       case 478: printf("Macon\n"); break;
       case 706: case 762: printf("Columbus\n"); break;
       case 912: printf("Savannah\n"); break;
       default: printf("Area code not recognized\n"); break;
   }
```