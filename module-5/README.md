### [Topic: ASCII Value] **Remove last n digit from a number (get first one digit)**

```c
#include <stdio.h>

int main()
{
    // take a 4 digit example number
    int number = 4580;

    // now we have to decide how many digits will removed
    // - we decide to remove last 3 digits
    // - in this case n = 3
    // - so we need to divide (/) number by 1000 means 'three zero' after '1'

    int first_digit = number / 1000;
    printf("First digit of number %d is %d", number, first_digit);

    return 0;
}
```

### [Topic: ASCII Value] **Remove first n digit from a number (get last one digit)**

```c
#include <stdio.h>

int main()
{
    // take a 4 digit example number
    int number = 4580;

    // now we have to decide how many digits will removed
    // - we decide to remove first 3 digits. that means we want the get last 1 digit
    // - in this case n = 1
    // - so we need to mod (%) number by 10 means 'one zero' after '1'

    int last_digit = number % 10;
    printf("Last digit of number %d is %d", number, last_digit);

    return 0;
}

```

### **Codeforces Problem Links**

- **I. Welcome for you with Conditions - [Visit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I)**

- **J. Multiples - [Visit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J)**

- **P. First digit ! - [Visit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P)**

- **N. Char - [Visit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N)**

- **M. Capital or Small or Digit - [Visit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M)**

- **K. Max and Min - [Visit](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K)**
