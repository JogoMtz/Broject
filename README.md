# Broject Phase I - Bitwise Encryption in C

This project is a learning exercise and capstone for **Chapter 2 of *The C Programming Language (K&R)***. It focuses on mastering **bitwise operations**, particularly XOR encryption, character arrays, and binary representation.

## 📘 About

**Broject Phase I** is a simple encryption program that takes a user-defined password (up to 20 characters) and a numerical PIN, then encrypts each character in the password using the XOR (`^`) bitwise operator. It also displays binary representations of the inputs and results, helping to visualize how bitwise operations work under the hood.

This program was written entirely from memory as part of deliberate practice in mastering low-level C fundamentals. However, with some help from chatGPT to identify errors and combat them.

---

## 🧠 Concepts Practiced

- Bitwise operators: `^`, `>>`, `<<`, `&`
- Character encoding and ASCII
- Working with arrays and strings
- Binary representation and visualization
- Looping through strings
- Type casting
- Input/output handling

---

## 🔐 Example

```text
State your pass (Max 20 characters): Jogomalolu
State a pin: 7803

---ENCRYPTION---

Character 1: 'J' (74) -> Encrypted: 49 | Binary: 00110001
...
Pin: 7803 in binary = 00000000 00000000 00011110 01111011

Encrypted pass: 49 | Decrypted pass: 74
...
