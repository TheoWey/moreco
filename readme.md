# 🤖 Hybrid Recommendation Engine (C++/Python/Database)

A modular recommendation system that combines high-performance algorithms in **C++**, machine learning capabilities in **Python**, and persistent storage via a **relational database** (SQLite or PostgreSQL). This project simulates a real-world scenario where data science meets system-level performance and scalable architecture.

---

## 🧩 Project Overview

This project implements a **hybrid recommendation engine** capable of:

- Collecting user-item interaction data
- Computing similarity-based recommendations in **C++**
- Training machine learning models for personalized suggestions in **Python**
- Storing and serving results using a **SQL database**
- Offering optional API access for external applications

---

## ⚙️ Technologies Used

| Layer         | Stack                      | Description                                           |
|---------------|----------------------------|----------------------------------------------         |
| Backend       | **C++17**                  | Fast similarity computation (KNN, SVD, Graph)         |
| ML / Analysis | **Python 3.10+**           | Model training and evaluation (scikit-learn, LightFM) |
| Database      | **PostgreSQL / SQLite**    | Stores users, items, interactions, recommendations    |
| Integration   | **pybind11 / subprocess**  | Bridge between C++ and Python layers                  |
| Optional API  | **Flask / FastAPI**        | REST API to expose recommendation endpoints           |

---

## 🧠 Features

- 📊 Track and store user-item interactions
- 🧮 Compute fast similarity-based recommendations (C++)
- 🧠 Train ML models for hybrid or content-based recommendations (Python)
- 📥 Store and retrieve results via SQL
- 📈 Visualize recommendation performance (precision, recall, etc.)
- 🔌 Optional: Build an API to serve predictions to other applications

---

## 🗂️ Project Structure

