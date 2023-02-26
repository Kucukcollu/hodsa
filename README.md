# hodsa
Hands On Data Structures and Algorithms

## What is that?
In Computer Science, Data Structures and Algorithms is core concepts to write effective programs.
This repository includes most common known Data Structures and Algorithms with hands on experience with C and C++.
Also, this repo is Docker supported!

## What is included?
- **doc**: Basically includes documentations such as slides, lecture notes,etc.
- **examples**: Coding examples to understand how and where data structures and algortihms are used.
- **hodsa**: Data Structures and Algorithms codes that created from scratch.
- **test**: Unit tests to prove test developed codes.

## Usage without Docker
```bash
$ cd ~
$ git clone https://github.com/Kucukcollu/hodsa
$ cd hodsa
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## Usage with Docker
```bash
$ cd ~
$ git clone https://github.com/Kucukcollu/hodsa
$ cd hodsa
$ bash build.sh # will generate Docker image which name is hodsa with tag latest
$ bash run.sh   # will generate Docker container which name is hodsa from hodsa:latest image

# then build project
$ mkdir build
$ cd build
$ cmake ..
$ make
```

### Asymptotic Notations
- O-notation (Big-O Notation)
- Ω-notation (Omega Notation)
- Θ-notation (Theta Notation)

### Data Structures

- Primitive Data Structures
    - int, char, etc.
- Non-Primitive Data Structures
    - Linear Data Structures
        - Static Data Structure
            - Array
        - Dynamic Data Structure
            - Stack
            - Queue
                - Simple Queue
                - Circular Queue
                - Priority Queue
                - Double Ended Queue
            - Linked List
                - Singly Linked List
                - Doubly Linked List
                - Circular Linked List
    - Non-Linear Data Structures
        - Tree
            - ...
        - Graph
            - ...

###  Algorithms
- Sorting Algorithms
    - ...
- Searching Algorithms
    - ...

## Contributing
All kinds of contributions are welcome. Please care about adding references if you use any kind of source!
## References
- [programiz](https://www.programiz.com/)
- [geeksforgeeks](https://www.geeksforgeeks.org/)
- [leetcode](https://leetcode.com/)