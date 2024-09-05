### Patterns Code

#### Square Patterns

```c++
// Square with Numbers

#include <iostream>
using namespace std;


int main() {

    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

}

// Output
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
```

```c++
// Square with Alphabets

#include <iostream>
using namespace std;

int main() {

    int n = 5;
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
};

// Output
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
```

```c++
// Square with numbers continously increasing

int main() {

    int n = 3;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum++;
            cout << sum << " ";
        }
        cout << endl;
    }
};

// Output
1 2 3
4 5 6
7 8 9
```

```c++
// Square Pattern with Alphabets continously increasing

int main() {

    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
};

// Output
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
```

#### Triangle Patterns

```c++
int main() {
    // Left Triangle Pattern
    int n = 5;

    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j <= i; j++ ) {
            cout << "* ";
        }
        cout << endl;
    }
};

// Output
*
* *
* * *
* * * *
* * * * *
```
