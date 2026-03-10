# 👨‍💻 Person → Employee → Programmer (C++ OOP Project)

This project demonstrates the power of **Object-Oriented Programming (OOP)** concepts in C++, focusing on **Inheritance**, **Function Overriding**, **Encapsulation**, and **Code Reusability**.

---

## 📚 Training Source

This project was developed as part of the Object-Oriented Programming training with
Dr. Mohamed AbouHadhood 👨‍🏫

🔗 www.programmingadvices.com

---

## 📌 Project Overview
We started by creating a **Person** class that contains the basic details of any person:  
- `ID`, `FirstName`, `LastName`, `Email`, `Phone`  

Then we extended this class to create:  

1. **Employee Class** 🧑‍💼  
   - Inherits all properties and methods from **Person**.  
   - Adds new attributes: `Title`, `Department`, `Salary`.  
   - Uses **constructor chaining** to initialize both the parent and child class data.  
   - Applies **Function Overriding** to redefine the `Print()` method to suit employee details.  

2. **Programmer Class** 👨‍💻  
   - Inherits from **Employee**.  
   - Adds a new attribute: `MainProgrammingLanguage`.  
   - Overrides the `Print()` function again to display full programmer info.  

---

## 🎯 Objectives & Concepts Applied

- **Encapsulation**  
  Keeping data members private and exposing them only through setters & getters.  

- **Inheritance**  
  - Reusing existing code from the `Person` class into `Employee`.  
  - Extending `Employee` into `Programmer`.  
  - This significantly reduces code duplication and increases reusability.  

- **Constructor Chaining**  
  Passing parameters from child class constructors to parent class constructors to ensure proper initialization.  

- **Function Overriding**  
  Redefining the `Print()` method in both `Employee` and `Programmer` to display the right information.  

- **Reusability & Cleaner Code**  
  With inheritance, we avoided repeating common attributes and logic, resulting in more structured and maintainable code.  

---

## ⚡ Key Takeaways

- Inheritance makes code shorter, cleaner, and more reusable.

- Function Overriding allows customizing behavior in child classes.

- Constructor chaining ensures proper object initialization at every inheritance level.

- OOP helps unify coding styles and makes my code closer to professional standards.


---


## 🖥️ Example Usage

```cpp
int main()
{
    clsProgrammer Programmer1(10, "Ahmed", "Yaser", "a@gmail.com", "9384303",
                              "Software Developer", "ProgrammingAdvices", 5000, "C++");

    Programmer1.Print();

    Programmer1.SendEmail("Hi", "How are you?");
    Programmer1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}

