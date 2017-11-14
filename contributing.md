
# Contributing Guidelines

## Code

### Documentation

The guidelines for documentation are the following. Please, follow this at all costs. It helps to make the code readable. 

1. For each function and class defined, state their purpose.
2. Whenever a variable is declared inside a function, state how it will be used. 
3. Either document every block of code, or document each line. 

For rule 2, the only exception is the toReturn variable, which is meant to be used universally for a variable which is to return the output of a function.

**Example 1:**

```c++
template <class T>
class group { // A class which groups objects of type T to make collective computations.
  
  private:
    vector<T> contents; // The objects in the group.
    int _size; // The size of the contents.
    
  public:
    group();  // Constructor
.    ~group(); // Destructor.
    
    int size(); // Returns the size of the group.
    void insert(T x); // Inserts x at the i'th index. 
    int get(int i); // Returns object at i'th index.
    
    group<T> add(group G) {
      group<T> toReturn = G; 
    
      // Cannot add groups if their sizes are not the same.
      if (G.size != size) {
        throw "Groups must be same size for this method to be implemented."
      }
      
      // Sum each item of this group and group G. 
      for (int i=0; i<size; i++) {
        T sum = contents[i] + G.get(i);
        toReturn.insert(sum);
      }
      
      return toReturn;
    }
}
```

### Class Structure

## Git

### Branches

### Commit Messages

### 
