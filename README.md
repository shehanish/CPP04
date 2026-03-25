<h1 align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="100" />
  <br>
  C++ Module 04
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Concept-Subtype%20Polymorphism-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" />
</p>

---

## 📖 Introduction

This module explores the core concepts of **Subtype Polymorphism**, **Abstract Classes**, and **Interfaces** in C++. The exercises focus on understanding how `virtual` functions enable dynamic dispatch and how to manage deep copies when dealing with complex object hierarchies.

## 🛠️ Exercises

### [ex00: Polymorphism](ex00/)
The introduction to dynamic dispatch.
- **Goal**: Implement a base `Animal` class with `Dog` and `Cat` subclasses.
- **Concepts**: The `virtual` keyword, method overriding, and the "WrongAnimal" example to demonstrate what happens without polymorphism.

### [ex01: I don’t want to set the world on fire](ex01/)
Constructors, Destructors, and **Deep Copies**.
- **Goal**: Add a `Brain` class as a member of `Dog` and `Cat`.
- **Deep Copy**: Ensuring that copying an object copies its internal heap-allocated data rather than just the pointer, preventing double-free errors.
- **Memory**: Proper destruction of complex objects.

### [ex02: Abstract class](ex02/)
Preventing instantiation of base classes.
- **Goal**: Convert the `Animal` class into an **Abstract Class** (using pure virtual functions).
- **Concept**: Ensuring that only specific animals (`Dog`, `Cat`) can be instantiated, while the base `Animal` serves only as a template/interface.

## 📝 Learning Objectives

- **Subtype Polymorphism**: Using base class pointers to refer to derived objects.
- **Virtual Destructors**: Essential for preventing memory leaks in inherited structures.
- **Abstract Classes**: Using pure virtual functions `= 0`.
- **Deep Copy vs Shallow Copy**: Mastering the copy constructor and assignment operator for complex compositions.

## 🚀 Usage

1. Navigate to an exercise folder:
   ```bash
   cd ex01
   ```
2. Build the project:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./Animal
   ```

---

<p align="center">
  <i>Part of the 42 C++ Pool. Developed by shkaruna.</i>
</p>
