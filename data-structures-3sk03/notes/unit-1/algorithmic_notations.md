# Algorithmic Notations - Easy Revision Notes

## 1. Algorithm kya hota hai?

Algorithm kisi problem ko solve karne ke **step-by-step instructions** hote hain.

Ek achhe algorithm ki qualities:

- **Input:** algorithm ko kya data milega?
- **Output:** algorithm kya result dega?
- **Definiteness:** har step clear hona chahiye.
- **Finiteness:** algorithm limited steps ke baad khatam hona chahiye.
- **Effectiveness:** har step practically perform kiya ja sake.

> Yaad rakhne ka shortcut: **I-O-D-F-E**  
> Input, Output, Definite, Finite, Effective.

---

## 2. Algorithm analysis kyon karte hain?

Do algorithms same problem solve kar sakte hain, lekin unka performance alag ho sakta hai.
Analysis se hum check karte hain:

1. Algorithm kitna **time** leta hai.
2. Algorithm kitni **memory** use karta hai.
3. Input size `n` badhne par performance kaise badlegi.

Isliye hum exact seconds nahi, balki **growth rate** compare karte hain.

---

## 3. Input size `n`

`n` ka matlab input ke elements ki sankhya hota hai.

Example:

```c
int array[] = {10, 20, 30, 40, 50};
```

Yahan `n = 5`.

Input double hone par algorithm ke steps kitne badhte hain, isi se complexity decide hoti hai.

---

## 4. Time complexity

Time complexity batati hai ki input size `n` ke according algorithm ke steps kitne badhenge.

Hum ise usually **Big O notation** me likhte hain.

### Common complexities

| Notation | Naam | Simple meaning |
| --- | --- | --- |
| `O(1)` | Constant | Input chahe jitna ho, steps lagbhag same |
| `O(log n)` | Logarithmic | Har step me problem chhoti hoti hai |
| `O(n)` | Linear | Input ke saath steps directly badhte hain |
| `O(n log n)` | Linear logarithmic | Efficient sorting me common |
| `O(n^2)` | Quadratic | Nested loops me common |
| `O(2^n)` | Exponential | Input badhne par bahut fast slow |

### Yaad rakhne ka order

`O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n)`

Left side generally faster hoti hai.

---

## 5. Space complexity

Space complexity batati hai ki algorithm ko extra memory kitni chahiye.

```c
int sum = 0;
```

Sirf kuch fixed variables hain, isliye extra space `O(1)` hai.

Agar input ke size `n` ka naya array banaya:

```c
int copy[n];
```

To extra space `O(n)` hogi.

> Time = kitna time laga  
> Space = kitni extra memory lagi

---

## 6. Asymptotic notations

### A. Big O - `O(f(n))`

Big O algorithm ki **upper bound** batata hai. Practical discussion me ise commonly
**worst-case complexity** ke liye use karte hain.

Example:

```c
for (int i = 0; i < n; i++) {
    printf("%d", array[i]);
}
```

Loop `n` times chalta hai, isliye complexity `O(n)` hai.

### B. Big Omega - `Ω(f(n))`

Omega algorithm ki **lower bound** batata hai. Yaani algorithm kam se kam kitna
work karega.

### C. Big Theta - `Θ(f(n))`

Theta algorithm ki **tight bound** batata hai. Jab upper aur lower growth same ho,
tab `Θ` use karte hain.

> Short memory trick:  
> **O = upper**, **Ω = lower**, **Θ = exact/tight growth**

---

## 7. Best, average aur worst case

### Linear search example

Array: `{10, 20, 30, 40, 50}`

- **Best case:** key first position par mil gayi -> `1` comparison -> `O(1)`
- **Average case:** key beech me milti hai -> lagbhag `n/2` comparisons -> `O(n)`
- **Worst case:** key last position par ho ya mile hi nahi -> `n` comparisons -> `O(n)`

Big O likhte samay usually worst case bataya jata hai.

---

## 8. Rules to calculate complexity

### Rule 1: Constants ignore karo

```c
for (int i = 0; i < 3 * n; i++) {
    printf("%d", i);
}
```

Steps `3n` hain, lekin complexity `O(n)` hogi. Constant `3` ignore karte hain.

### Rule 2: Sequential loops add hote hain

```c
for (int i = 0; i < n; i++) { } // O(n)
for (int j = 0; j < n; j++) { } // O(n)
```

Total `O(n + n) = O(2n) = O(n)`.

### Rule 3: Nested loops multiply hote hain

```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    }
}
```

Inner loop har outer iteration me chalta hai, isliye `n * n = O(n^2)`.

### Rule 4: Different inputs ko combine mat karo

```c
for (int i = 0; i < n; i++) { } // O(n)
for (int j = 0; j < m; j++) { } // O(m)
```

Complexity `O(n + m)` hogi, `O(n)` nahi.

---

## 9. Linear search - important example

Linear search me array ko **left se right**, ek-ek element check karte hain.

```c
int search_array_elements(int array[], int key, int size)
{
    for (int index = 0; index < size; index++)
    {
        if (array[index] == key)
        {
            return index;
        }
    }

    return -1;
}
```

### Dry run

Array: `{1, 2, 5, 6, 3}`, key: `6`

| Index | Value | Key se match? |
| ---: | ---: | --- |
| 0 | 1 | No |
| 1 | 2 | No |
| 2 | 5 | No |
| 3 | 6 | Yes - return `3` |

### Complexity

- Best case: `O(1)`
- Worst case: `O(n)`
- Average case: `O(n)`
- Extra space: `O(1)`

### Important points

- Linear search **sorted aur unsorted**, dono arrays par kaam karta hai.
- Key milte hi `return index` se function turant stop ho jata hai.
- Key na mile to `-1` return hota hai.
- C array ka index `0` se start hota hai.

---

## 10. Code ko padhkar complexity pehchano

### Single statement

```c
printf("%d", value);
```

Complexity: `O(1)`.

### Single loop

```c
for (int i = 0; i < n; i++) { }
```

Complexity: `O(n)`.

### Two nested loops

```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) { }
}
```

Complexity: `O(n^2)`.

### Loop that halves the value

```c
while (n > 1) {
    n = n / 2;
}
```

Har baar input half hota hai, isliye complexity: `O(log n)`.

---

## 11. Exam me answer likhne ka format

Kisi algorithm ki complexity poochhi jaye to:

1. Algorithm ka basic idea likho.
2. Loop/steps kitni baar chalte hain, batao.
3. Best, average aur worst case likho.
4. Time complexity likho.
5. Extra space complexity likho.

### One-line revision

**Algorithm = steps, `n` = input size, time = operations, space = extra memory,
Big O = growth ki upper limit.**