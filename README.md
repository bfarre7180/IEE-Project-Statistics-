# IEE-Project-Statistics-

📊 **Recursion vs Iteration Performance Analysis in C++**

This project demonstrates the performance difference between recursive and iterative implementations using C++. It uses the `<chrono>` library for precise benchmarking and performs a basic statistical analysis (paired t-test) to show that recursion and iteration have the same mean difference time to execute for 10 given methods.

---

## 📚 Table of Contents

- [Overview](#overview)
- [Methodology](#methodology)
- [How to Build](#how-to-build)
- [Results](#results)
- [Conclusion](#conclusion)
- [Technologies](#technologies)
- [Author](#author)

---

## 🧠 Overview

Recursive and iterative approaches are both widely used in problem-solving. While recursion offers elegant code, it often introduces performance overhead due to stack usage and function calls. This project benchmarks both methods and uses statistical reasoning to validate performance claims.

---

## 📐 Methodology

I implemented recursive and iterative versions of various simple functions like summation up to an interval:

- 10 Functions in recursive
- 10 Functions in iteration
- Each are the exact same implementation

Execution time was measured using `std::chrono` over multiple runs. We computed the average execution times for both approaches and performed a simple paired t-test to determine statistical significance.

---

## 🛠️ How to Build

Make sure you have a C++ compiler installed.

```bash
git clone https://github.com/yourusername/IEE-Project-Statistics-.git
cd IEE-Project-Statistics-
./IEEproject
```

---

## 📝 Results

Every time you run the program the output will be slightly different from one another but each give the same result. In one of them I got this
![image](https://github.com/user-attachments/assets/237012b5-c7b3-4616-853d-9c3844970c60)

Now using the equations for the paired t-test we should be able to come to a conclusion, I will make a test statistic that will be able to find the p-value and I can make a two-sided confidence interval using ɑ = 1%, and the null hypothesis will be.

**Hypotheses:**

H₀: μ<sub>D</sub> = 0  
H₁: μ<sub>D</sub> ≠ 0

**Test statistic:**

t₀ = **d̄** / (s<sub>D</sub> / √n)

**Confidence Interval:**

**d̄** − t<sub>α/2, n−1</sub> × (s<sub>D</sub> / √n) ≤ μ<sub>D</sub> ≤ **d̄** + t<sub>α/2, n−1</sub> × (s<sub>D</sub> / √n)

**Data:**

n = 10

**d̄** = 0.09934

s<sub>D</sub> = 0.22618

t<sub>α/2, n−1</sub> = 3.24984

df = n - 1 = 9

**Results:**

t<sub>0</sub> = 1.3889

p-value = 0.09913

Confidence interval --->  -0.1331 ≤ μ<sub>D</sub> ≤ 0.3318

---

## 💡 Conclusions

Since the p-value is > ɑ that means that we will fail to reject the null hypothesis which means that there is not sufficient evidence to support that they have different mean times to compute. This puts us at the interval, I believe at 99% confidence that the true mean difference between the two lies between the interval [-0.1131,0.3318]ms.

---

## ⚙️ Technologies

Used C++ to make the program that runs the tests and used the chrono library along with others, like stdio, and iostream for I/O.

---

## 🕵🏻 Author

**Brandon Farrell**
