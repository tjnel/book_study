## C Programming Language 2nd Ed. 
### Chapter 6 Exercises by Tnel

#### 6.1
```
6.1: 1 2 4 8 16 32 64 128
```

#### 6.2
```
6.2: 9384 938 93 9
```

#### 6.3
```
6.3: 5 4 3 2
```

#### 6.4
(C) is not equal to the other 2.

#### 6.5
(b) is not equal to the other 2.

#### 6.6
```c
for (i = 1; i <= 128; i *= 2)
    printf("%d ", i);
```

#### 6.7
```c
for (i = 9384; i > 0; i /= 10)
    printf("%d ", i);
```

#### 6.8
```
6.8: 10 5 3 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 [repeating]
```

#### 6.9
```c
i = 10;
while (i >= 1){
    i /= 2;
    printf("%d ", i++);
}
```

#### 6.10
```c
for (i=0;i<10;i++){
    ...
    goto continue_replacement; // continue would normally go here
    ...
    continue_replacement: ;
}
```

#### 6.11
```
6.11: 5
```

#### 6.12
```c
for (d = 2; d * d <= n; d++)
  if (n % d == 0)
    break;
```

#### 6.13
```c
for (n = 0; m > 0; n++, m /= 2);
```

#### 6.14
the if statement has a null statement (*;*) at the end of the if conditional it should look like this.
```c
if (n % 2 == 0)
    printf("n is even\n");
```