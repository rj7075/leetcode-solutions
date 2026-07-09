```cpp
class Solution {
public:
    string reverseString(string& s) {

        // Step 1: Find the length of the string.
        int n = s.size();

        // Step 2: We only need to iterate through the first half.
        // Every swap places one character in its correct position.
        // Example:
        // "abcd"
        // i = 0 -> swap(a, d)
        // i = 1 -> swap(b, c)
        // Result = "dcba"
        for (int i = 0; i < n / 2; i++) {

            // Current character from the front -> s[i]
            // Matching character from the back -> s[n - i - 1]
            swap(s[i], s[n - i - 1]);
        }

        // Step 3: Return the reversed string.
        return s;
    }
};
```

### Dry Run

Input:

```
s = "hello"
```

| i | Front Index (i) | Back Index (n-i-1) | Swap  | String  |
| - | --------------- | ------------------ | ----- | ------- |
| 0 | 0 ('h')         | 4 ('o')            | h ↔ o | "oellh" |
| 1 | 1 ('e')         | 3 ('l')            | e ↔ l | "olleh" |

Loop stops because `i < n/2`.

### Formula to Remember

```
Front Index = i
Back Index  = n - i - 1
```

### Why `i < n/2`?

Every swap fixes **two characters**:

* One from the front.
* One from the back.

So after reaching the middle, everything is already in the correct place. Going beyond the middle would start swapping characters back to their original positions.
