Method 1 by reversing the given number and then compare them;
```cpp
class Solution {
public:
    bool isPalindrome(int n) {

        // Step 1: Store the absolute value of the number.
        // We use 'temp' because we'll modify it while reversing.
        int temp = abs(n);

        // Step 2: Variable to store the reversed number.
        int rev = 0;

        // Step 3: Reverse the number digit by digit.
        while (temp != 0) {

            // Take the last digit of temp.
            // Example:
            // temp = 1234
            // last digit = 4
            int lastDigit = temp % 10;

            // Add the last digit to the reversed number.
            // Example:
            // rev = 12
            // lastDigit = 3
            // rev = 12 * 10 + 3 = 123
            rev = rev * 10 + lastDigit;

            // Remove the last digit from temp.
            // Example:
            // 1234 -> 123
            temp = temp / 10;
        }

        // Step 4: Compare the original number with the reversed number.
        // If both are equal, it is a palindrome.
        if (rev == abs(n)) {
            return true;
        }

        return false;
    }
};
```

## Dry Run

### Example 1

```
n = 121
```

Initial values:

```
temp = 121
rev = 0
```

| temp | lastDigit (`temp % 10`) | rev = rev * 10 + lastDigit |
| ---: | ----------------------: | -------------------------: |
|  121 |                       1 |                          1 |
|   12 |                       2 |                         12 |
|    1 |                       1 |                        121 |
|    0 |                       - |                       Stop |

Now,

```
rev = 121
original = 121
```

Since

```
rev == original
```

Return

```
true
```

---

### Example 2

```
n = 123
```

```
temp = 123
rev = 321
```

Compare:

```
321 != 123
```

Return

```
false
```

---

## Formula to Remember

### Get the last digit

```cpp
lastDigit = temp % 10;
```

### Add it to the reversed number

```cpp
rev = rev * 10 + lastDigit;
```

### Remove the last digit

```cpp
temp = temp / 10;
```

These **three lines** are the standard pattern for reversing an integer and appear in many DSA problems.

---

## Visualization

```
Number = 1234

Iteration 1
temp = 1234
lastDigit = 4
rev = 4

Iteration 2
temp = 123
lastDigit = 3
rev = 43

Iteration 3
temp = 12
lastDigit = 2
rev = 432

Iteration 4
temp = 1
lastDigit = 1
rev = 4321
```

---

## Time Complexity

```
O(d)
```

where **d** is the number of digits in the number.

---

## Space Complexity

```
O(1)
```

No extra data structure is used—only a few integer variables.

// Method 2 first convert the given number in string then check to_string(Number)

```cpp
class Solution {
public:
    bool isPalindrome(int n) {

        // Step 1: Convert the number into a string.
        // abs(n) converts negative numbers to positive.
        // Example:
        // n = 121   -> "121"
        // n = -121  -> "121"
        string s = to_string(abs(n));

        // Step 2: Store the length of the string.
        int k = s.length();

        // Step 3: Compare characters from both ends.
        // We only need to check the first half because
        // every comparison checks two characters.
        for (int i = 0; i < k / 2; i++) {

            // Front character  -> s[i]
            // Back character   -> s[k - i - 1]
            if (s[i] != s[k - i - 1]) {
                return false;   // Characters don't match
            }
        }

        // If all character pairs matched,
        // the number is a palindrome.
        return true;
    }
};
```

## Dry Run

### Example 1

```
n = 12321
```

```
s = "12321"
k = 5
```

| i | Front Index | Back Index | Compare |
| - | ----------- | ---------- | ------- |
| 0 | s[0] = '1'  | s[4] = '1' | ✅       |
| 1 | s[1] = '2'  | s[3] = '2' | ✅       |

Loop ends because `i < k / 2`.

Return:

```
true
```

---

### Example 2

```
n = 12345
```

```
s = "12345"
```

| i | Compare      |
| - | ------------ |
| 0 | '1' != '5' ❌ |

Immediately return:

```
false
```

---

## Formula to Remember

```
Front Index = i
Back Index  = k - i - 1
```

where:

```
k = s.length()
```

---

## Why only `i < k / 2`?

Each comparison checks **two characters**:

* One from the front.
* One from the back.

So after reaching the middle, every character has already been compared.

Example:

```
"madam"

m a d a m
↑       ↑
  ↑   ↑
    ↑ (middle)
```

The middle character doesn't need to be compared because it is always equal to itself.

---

## Time Complexity

```
O(n)
```

where `n` is the number of digits (or string length).

## Space Complexity

```
O(n)
```

because we create a string from the number.
