# Data Structures Homework

# Big-O Time Complexity – First 7 Algorithms
Algorithm 1 – O(n)

A single loop runs from 1 to n. Number of operations = n. Big-O = O(n).

Algorithm 2 – O(n²)

Nested loops each run n times. Total operations = n * n. Big-O = O(n²).

Algorithm 3 – O(log n)

Loop variable doubles each time (i = i * 2). Number of iterations = log₂ n. Big-O = O(log n).

Algorithm 4 – O(log n)

Loop variable divides by a constant (i = i / 5). Number of iterations = log₅ n. Big-O = O(log n).

Algorithm 5 – O(log n)

Loop runs until i < n³ and multiplies by 5. Iterations = log₅(n³) = 3 log n. Big-O = O(log n).

Algorithm 6 – O(√n)

Loop condition is i² ≤ n. Iterations ≈ √n. Big-O = O(√n).

Algorithm 7 – O(√n)

k increases as 1 + 2 + 3 + ... + i. Loop stops when k ≈ n. i ≈ √n. Big-O = O(√n).

Bu repository, **C dili** kullanılarak yazılmış temel **Veri Yapıları ve Algoritmalar** ödevlerini içermektedir. Her konu ayrı bir dosyada, anlaşılır ve ders/ödev formatına uygun şekilde hazırlanmıştır.

---

## 📌 İçerikler

### 1. Sparse Matrix Conversion

* Normal (2D) matrisin **Sparse Matrix** gösterimine dönüştürülmesi
* Sadece sıfır olmayan elemanlar saklanır
* Bellek verimliliği sağlanır

---

### 2. Tower of Hanoi

* Özyinelemeli (recursive) çözüm
* n disk için **2^n − 1** hamle
* Zaman karmaşıklığı: **O(2^n)**

---

### 3. Infix to Postfix (Shunting Yard Algorithm)

* Aritmetik ifadelerin **Infix → Postfix** dönüşümü
* Stack kullanımı
* Operatör öncelikleri dikkate alınır

---

### 4. Max Heap & Min Heap

* Dizi tabanlı heap yapısı
* **Max Heap** ve **Min Heap** oluşturma
* Heapify ve buildHeap fonksiyonları

---

### 5. Doubly Linked List

* Çift yönlü bağlı liste yapısı
* Ekleme, silme ve listeleme işlemleri
* Recursive ve iterative silme fonksiyonları

---

### 6. Circular Linked List

* Dairesel bağlı liste
* Başa ve sona ekleme
* Listeyi dolaşma (traversal)

---

### 7. Array Üzerinde Ekleme ve Silme

* Sabit boyutlu dizide eleman ekleme
* Belirli indexten silme işlemi
* Kaydırma (shift) mantığı

---

### 8. Graph Cluster Extraction

* Adjacency Matrix kullanımı
* **DFS tabanlı** küme (cluster) bulma
* Bağlantılı bileşenlerin çıkarılması

---

### 9. DFS & BFS Uygulamaları

* Derinlik Öncelikli Arama (DFS)
* Genişlik Öncelikli Arama (BFS)
* Graph traversal örnekleri

---

### 10. Array Kullanarak Tree Oluşturma

* Binary Tree'nin dizi ile temsil edilmesi
* Root, left ve right child ekleme
* Ağaç yapısının yazdırılması

---

## 🛠 Kullanılan Teknolojiler

* Programlama Dili: **C**
* Derleyici: GCC / Clang
* IDE: IntelliJ IDEA / VS Code

---

## 📚 Amaç

Bu repository, veri yapıları konularını:

* Temel mantığıyla
* Okunabilir ve sade kod yapısıyla
* Üniversite ödev standartlarına uygun şekilde
  sunmayı amaçlamaktadır.

---

👤 **Author:** Emre Kaya
