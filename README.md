# C++ Polymorphism Exercise

This C++ project showcases the use of polymorphism with base and derived classes. The base class, `Pessoa`, represents a person with a name and age. The derived class, `Cliente`, extends the base class and adds a salary attribute. The program uses virtual functions to demonstrate polymorphic behavior.

## Project Structure

### `Pessoa` Class

The `Pessoa` class has the following attributes and functions:

- **Attributes:**
  - `nome`: Name of the person (string).
  - `idade`: Age of the person (int).

- **Methods:**
  - `Pessoa(string _nome, int _idade)`: Constructor to initialize `nome` and `idade`.
  - `~Pessoa()`: Destructor to print a message when the class is destroyed.
  - `virtual void mostra()`: Virtual function to display information about the person.

### `Cliente` Class

The `Cliente` class is derived from `Pessoa` and has an additional attribute:

- **Attributes:**
  - `salario`: Salary of the client (int).

- **Methods:**
  - `Cliente(string _nome, int _idade, int _salario)`: Constructor to initialize `nome`, `idade`, and `salario`.
  - `void mostra()`: Overridden function to display information about the client, utilizing the base class's `mostra` function.

## Compilation and Execution

To compile the project, make sure you have a C++ compiler installed. Then, run the following commands:

```bash
g++ main.cpp -o polymorphism

./polymorphism
