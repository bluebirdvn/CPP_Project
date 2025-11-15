
\#\# MỤC LỤC

\#\#\# \[CHƯƠNG 1: CƠ BẢN (BASICS)\](\#chương-1-cơ-bản-basics)  
\* \[Item 1: Phân biệt giữa Pointers (Con trỏ) và References (Tham chiếu)\](\#item-1-phân-biệt-giữa-pointers-con-trỏ-và-references-tham-chiếu)  
\* \[Item 2: Ưu tiên C++-style casts hơn C-style casts\](\#item-2-ưu-tiên-c-style-casts-hơn-c-style-casts)  
\* \[Item 3: Không bao giờ đối xử đa hình (polymorphically) với mảng\](\#item-3-không-bao-giờ-đối-xử-đa-hình-polymorphically-với-mảng)  
\* \[Item 4: Tránh default constructors (hàm tạo mặc định) vô nghĩa\](\#item-4-tránh-default-constructors-hàm-tạo-mặc-định-vô-nghĩa)

\#\#\# \[CHƯƠNG 2: TOÁN TỬ (OPERATORS)\](\#chương-2-toán-tử-operators)  
\* \[Item 5: Cẩn trọng với các hàm chuyển đổi kiểu do người dùng định nghĩa\](\#item-5-cẩn-trọng-với-các-hàm-chuyển-đổi-kiểu-do-người-dùng-định-nghĩa)  
\* \[Item 6: Phân biệt giữa Prefix (++i) và Postfix (i++)\](\#item-6-phân-biệt-giữa-prefix-i-và-postfix-i)  
\* \[Item 7: Không bao giờ overload &&, ||, hoặc , (dấu phẩy)\](\#item-7-không-bao-giờ-overload--hoặc--dấu-phẩy)  
\* \[Item 8: Hiểu các ý nghĩa khác nhau của \`new\` và \`delete\`\](\#item-8-hiểu-các-ý-nghĩa-khác-nhau-của-new-và-delete)

\#\#\# \[CHƯƠNG 3: NGOẠI LỆ (EXCEPTIONS)\](\#chương-3-ngoại-lệ-exceptions)  
\* \[Item 9: Sử dụng Destructors để ngăn rò rỉ tài nguyên (Resource Leaks)\](\#item-9-sử-dụng-destructors-để-ngăn-rò-rỉ-tài-nguyên-resource-leaks)  
\* \[Item 10: Ngăn rò rỉ tài nguyên trong Constructors\](\#item-10-ngăn-rò-rỉ-tài-nguyên-trong-constructors)  
\* \[Item 11: Ngăn ngoại lệ thoát khỏi Destructors\](\#item-11-ngăn-ngoại-lệ-thoát-khỏi-destructors)  
\* \[Item 12: Hiểu cách ném ngoại lệ khác với truyền tham số\](\#item-12-hiểu-cách-ném-ngoại-lệ-khác-với-truyền-tham-số)  
\* \[Item 13: Catch exceptions by reference (Bắt ngoại lệ bằng tham chiếu)\](\#item-13-catch-exceptions-by-reference-bắt-ngoại-lệ-bằng-tham-chiếu)  
\* \[Item 14: Sử dụng exception specifications một cách thận trọng\](\#item-14-sử-dụng-exception-specifications-một-cách-thận-trọng)  
\* \[Item 15: Hiểu chi phí của xử lý ngoại lệ\](\#item-15-hiểu-chi-phí-của-xử-lý-ngoại-lệ)

\#\#\# \[CHƯƠNG 4: HIỆU NĂNG (EFFICIENCY)\](\#chương-4-hiệu-năng-efficiency)  
\* \[Item 16: Nhớ quy luật 80-20\](\#item-16-nhớ-quy-luật-80-20)  
\* \[Item 17: Cân nhắc sử dụng Lazy Evaluation (Đánh giá lười)\](\#item-17-cân-nhắc-sử-dụng-lazy-evaluation-đánh-giá-lười)  
\* \[Item 18: Phân tán chi phí tính toán (Amortize cost)\](\#item-18-phân-tán-chi-phí-tính-toán-amortize-cost)  
\* \[Item 19: Hiểu nguồn gốc của các đối tượng tạm (Temporary Objects)\](\#item-19-hiểu-nguồn-gốc-của-các-đối-tượng-tạm-temporary-objects)  
\* \[Item 20: Hỗ trợ "Return Value Optimization" (RVO)\](\#item-20-hỗ-trợ-return-value-optimization-rvo)  
\* \[Item 21: Sử dụng Overloading để tránh Implicit Type Conversions\](\#item-21-sử-dụng-overloading-để-tránh-implicit-type-conversions)  
\* \[Item 22: Cân nhắc dùng \`operator=\` thay vì \`operator\` đứng một mình\](\#item-22-cân-nhắc-dùng-operator-thay-vì-operator-đứng-một-mình)  
\* \[Item 23: Cân nhắc các thư viện thay thế\](\#item-23-cân-nhắc-các-thư-viện-thay-thế)  
\* \[Item 24: Hiểu chi phí của Virtual Functions, Multiple Inheritance, RTTI\](\#item-24-hiểu-chi-phí-của-virtual-functions-multiple-inheritance-rtti)

\#\#\# \[CHƯƠNG 5: KỸ THUẬT (TECHNIQUES)\](\#chương-5-kỹ-thuật-techniques)  
\* \[Item 25: Ảo hóa Constructors và Non-member functions\](\#item-25-ảo-hóa-constructors-và-non-member-functions)  
\* \[Item 26: Giới hạn số lượng đối tượng của một Class\](\#item-26-giới-hạn-số-lượng-đối-tượng-của-một-class)  
\* \[Item 27: Yêu cầu hoặc Cấm tạo đối tượng trên Heap\](\#item-27-yêu-cầu-hoặc-cấm-tạo-đối-tượng-trên-heap)  
\* \[Item 28: Smart Pointers (Con trỏ thông minh)\](\#item-28-smart-pointers-con-trỏ-thông-minh)  
\* \[Item 29: Reference Counting (Đếm tham chiếu)\](\#item-29-reference-counting-đếm-tham-chiếu)  
\* \[Item 30: Proxy Classes (Lớp đại diện)\](\#item-30-proxy-classes-lớp-đại-diện)  
\* \[Item 31: Tạo hàm ảo dựa trên nhiều hơn một đối tượng (Double Dispatch)\](\#item-31-tạo-hàm-ảo-dựa-trên-nhiều-hơn-một-đối-tượng-double-dispatch)

\#\#\# \[CHƯƠNG 6: LINH TINH (MISCELLANY)\](\#chương-6-linh-tinh-miscellany)  
\* \[Item 32: Lập trình trong thì tương lai (Program in the future tense)\](\#item-32-lập-trình-trong-thì-tương-lai-program-in-the-future-tense)  
\* \[Item 33: Biến các non-leaf classes thành abstract\](\#item-33-biến-các-non-leaf-classes-thành-abstract)  
\* \[Item 34: Hiểu cách kết hợp C++ và C\](\#item-34-hiểu-cách-kết-hợp-c-và-c)  
\* \[Item 35: Làm quen với chuẩn ngôn ngữ (Standard)\](\#item-35-làm-quen-với-chuẩn-ngôn-ngữ-standard)

\---

\#\# CHƯƠNG 1: CƠ BẢN (BASICS)

\#\#\# Item 1: Phân biệt giữa Pointers (Con trỏ) và References (Tham chiếu)

\#\#\#\# 1\. Tóm tắt cốt lõi (The "What")  
Sử dụng \*\*References\*\* (tham chiếu) khi bạn chắc chắn rằng bạn có một đối tượng để tham chiếu đến, và bạn không có ý định tham chiếu đến một đối tượng khác. Sử dụng \*\*Pointers\*\* (con trỏ) khi bạn cần có khả năng trỏ đến "không có gì" (dùng \`nullptr\`) hoặc khi bạn cần thay đổi đối tượng mà nó trỏ tới trong suốt vòng đời của nó.

\#\#\#\# 2\. Phân tích Lý do (The "Why")  
\* \*\*Tại sao:\*\*  
    \* \*\*An toàn:\*\* References \*phải\* được khởi tạo ngay lúc khai báo và \*không thể\* là \`null\` (về mặt cú pháp). Điều này loại bỏ hoàn toàn một lớp lỗi \`null pointer dereference\` (truy cập con trỏ null), một trong những lỗi phổ biến và nguy hiểm nhất.  
    \* \*\*Dễ đọc:\*\* Cú pháp của reference giống hệt như cú pháp của một đối tượng thông thường (\`myRef.doSomething()\`), trong khi con trỏ yêu cầu cú pháp riêng (\`myPtr-\>doSomething()\`). Điều này làm cho code dùng reference sạch sẽ và dễ hiểu hơn.  
    \* \*\*Tính bất biến (Immutability):\*\* Một khi reference đã "bind" (ràng buộc) vào một đối tượng, nó không thể "bind" lại vào đối tượng khác. Con trỏ có thể trỏ đi bất cứ đâu bất cứ lúc nào.  
\* \*\*Cạm bẫy khi vi phạm:\*\*  
    \* Dùng con trỏ ở những nơi không cần thiết (ví dụ tham số hàm không bao giờ \`null\`) sẽ bắt buộc người gọi và người triển khai hàm phải thêm code kiểm tra \`null\` một cách thừa thãi, làm code phức tạp và chậm hơn.  
    \* \*\*Undefined Behavior (UB):\*\* Cố gắng tạo ra một reference trỏ đến \`null\` (ví dụ: \`int\* p \= nullptr; int& r \= \*p;\`) là hành vi không xác định, có thể gây crash chương trình ngay lập tức. Đừng bao giờ làm vậy.

\#\#\#\# 3\. Ví dụ Code (Trước & Sau)  
\*\*TRƯỚC (Dùng Pointer không cần thiết):\*\*  
\`\`\`cpp  
// Hàm nhận con trỏ, bắt buộc phải kiểm tra null  
void printStudentName(const Student\* pStudent) {  
    if (pStudent) { // Luôn phải có bước kiểm tra này  
        std::cout \<\< pStudent-\>getName();  
    }  
}

// Người gọi cũng có thể vô tình truyền null  
Student\* s \= findStudent("123");  
printStudentName(s);

**SAU (Dùng Reference an toàn và sạch sẽ):**

C++  
// Hàm nhận reference, đảm bảo đối tượng luôn tồn tại  
void printStudentName(const Student& rStudent) {  
    // Không cần kiểm tra null, code sạch hơn  
    std::cout \<\< rStudent.getName();  
}

// Người gọi phải truyền một đối tượng hợp lệ  
Student s \= getStudent("123");  
printStudentName(s); // Đảm bảo s là đối tượng hợp lệ

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Ngoại lệ:** Bạn *bắt buộc* phải dùng con trỏ khi:  
  1. Cần trỏ đến `nullptr`.  
  2. Cần thay đổi đối tượng được trỏ đến (ví dụ: con trỏ `current` trong một cấu trúc dữ liệu).  
  3. Tương tác với các API C cũ (chỉ chấp nhận con trỏ).  
  4. Trong các container chuẩn, bạn không thể tạo `std::vector<int&>` (vector chứa reference) nhưng có thể tạo `std::vector<int*>` (hoặc `std::vector<std::reference_wrapper<int>>` trong C++11).  
* **Lưu ý C++ Hiện Đại:** Ưu tiên dùng Smart Pointers (Item 28\) như `std::unique_ptr` và `std::shared_ptr` thay vì con trỏ thô (raw pointers) để quản lý bộ nhớ. Ưu tiên `std::optional` (C++17) nếu bạn muốn truyền một giá trị "có thể có hoặc không" mà không cần cấp phát heap.

---

### **Item 2: Ưu tiên C++-style casts hơn C-style casts**

#### **1\. Tóm tắt cốt lõi (The "What")**

Hãy ngừng sử dụng ép kiểu kiểu C: `(new_type)expression` hoặc `new_type(expression)`. Thay vào đó, hãy sử dụng các toán tử ép kiểu của C++: `static_cast`, `const_cast`, `dynamic_cast`, và `reinterpret_cast`.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:**  
  * **Rõ ràng ý định (Intent):** C++ casts nói rõ *chính xác* bạn đang làm gì:  
    * `static_cast`: Dùng cho các chuyển đổi "an toàn", có thể kiểm tra lúc biên dịch (số học, cha-con, `void*`).  
    * `const_cast`: Dùng để thêm/bớt `const` hoặc `volatile`.  
    * `dynamic_cast`: Dùng để ép kiểu đa hình an toàn (từ cha sang con) lúc runtime, có kiểm tra.  
    * `reinterpret_cast`: Dùng để "chơi bẩn", ép bit-level, rất nguy hiểm.  
  * **Dễ tìm kiếm:** Bạn có thể tìm kiếm (grep/Find) "const\_cast" trong codebase để tìm những chỗ nguy hiểm. Tìm `(double)` là không thể.  
  * **An toàn:** C-style cast là "cây búa tạ". Nó sẽ thử làm `static_cast`, rồi `reinterpret_cast`, rồi `const_cast`... cho đến khi được thì thôi. Điều này có thể dẫn đến việc bạn vô tình dùng `reinterpret_cast` (rất nguy hiểm) trong khi bạn chỉ muốn `static_cast`. C++ casts chỉ làm đúng một việc nó được bảo.  
* **Cạm bẫy khi vi phạm:**  
  * Bạn vô tình gỡ bỏ `const` của một đối tượng mà không hay biết: `const MyClass c; MyClass* p = (MyClass*)&c; p->modify();` \-\> Gây Undefined Behavior.  
  * Bạn vô tình ép kiểu con trỏ một cách nguy hiểm: `Base* b = (Base*)pOther;` có thể là `static_cast` (OK) hoặc `reinterpret_cast` (rất nguy hiểm) tùy ngữ cảnh.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Dùng C-style cast):**

C++  
class Base {};  
class Derived : public Base {};  
class Other {};

// 1\. Ý định: Ép kiểu cha \-\> con  
Derived\* d \= new Derived();  
Base\* b \= (Base\*)d; // OK, nhưng không rõ ràng

// 2\. Ý định: Gỡ const  
const int c\_val \= 10;  
int\* p\_val \= (int\*)\&c\_val; // Nguy hiểm, không báo lỗi  
\*p\_val \= 20; // Undefined Behavior

// 3\. Ý định: Ép kiểu không liên quan (nguy hiểm)  
Other\* o \= (Other\*)d; // Vẫn biên dịch được\!

**SAU (Dùng C++-style casts):**

C++  
class Base { public: virtual \~Base() {} }; // Thêm virtual dtor cho dynamic\_cast  
class Derived : public Base {};  
class Other {};

// 1\. Ép kiểu cha \-\> con (an toàn lúc compile-time)  
Derived\* d \= new Derived();  
Base\* b\_static \= static\_cast\<Base\*\>(d); // Rõ ràng

// 1b. Ép kiểu cha \-\> con (an toàn lúc run-time)  
Base\* b \= new Derived();  
Derived\* d\_dynamic \= dynamic\_cast\<Derived\*\>(b); // OK  
Other\* o\_dynamic \= dynamic\_cast\<Other\*\>(b); // Trả về nullptr, an toàn

// 2\. Gỡ const  
const int c\_val \= 10;  
int\* p\_val \= const\_cast\<int\*\>(\&c\_val); // Rõ ý định  
// \*p\_val \= 20; // Vẫn là UB, nhưng ít nhất người đọc code biết bạn đang làm gì

// 3\. Ép kiểu không liên quan  
// Other\* o \= static\_cast\<Other\*\>(d); // LỖI BIÊN DỊCH\! Tốt\!  
Other\* o\_re \= reinterpret\_cast\<Other\*\>(d); // Phải dùng, cho thấy ý định "chơi bẩn"

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* `static_cast`: Dùng cho các chuyển đổi an toàn (số học, con trỏ cha/con, `void*`).  
* `const_cast`: Chỉ dùng để thêm/bớt `const` hoặc `volatile`. Thường là dấu hiệu của thiết kế tồi.  
* `dynamic_cast`: Dùng khi ép kiểu đa hình (từ Base\* sang Derived\*). Yêu cầu class phải có ít nhất 1 hàm virtual. Tốn chi phí runtime (do phải tra cứu RTTI).  
* `reinterpret_cast`: Dùng khi ép kiểu con trỏ không liên quan, hoặc con trỏ sang số nguyên. Rất nguy hiểm. (Trong Embedded: Dùng để map địa chỉ thanh ghi: `volatile uint32_t* GPIO_A = reinterpret_cast<volatile uint32_t*>(0x40001000);`).

---

### **Item 3: Không bao giờ đối xử đa hình (polymorphically) với mảng**

#### **1\. Tóm tắt cốt lõi (The "What")**

Không bao giờ sử dụng một con trỏ lớp cơ sở (Base class pointer) để duyệt hoặc `delete` một mảng các đối tượng lớp dẫn xuất (Derived class).

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Toán học con trỏ (Pointer arithmetic) bị sai.  
  1. **Khi duyệt mảng:** Khi bạn viết `pBase[i]`, trình biên dịch tính toán địa chỉ là `(địa_chỉ_pBase) + i * sizeof(Base)`. Nhưng thực tế, mảng này là mảng `Derived`, và `sizeof(Derived)` thường lớn hơn `sizeof(Base)`. Kết quả là `pBase[1]` sẽ trỏ vào *giữa* đối tượng `Derived` đầu tiên, `pBase[2]` trỏ sai... Gây ra data corruption.  
  2. **Khi xóa mảng:** Khi bạn gọi `delete[] pBase`, trình biên dịch không biết kích thước thực sự của mỗi đối tượng. Nó sẽ gọi destructor sai và giải phóng vùng nhớ sai, dẫn đến Undefined Behavior và rò rỉ tài nguyên nghiêm trọng.  
* **Cạm bẫy:** Chương trình không báo lỗi biên dịch, nhưng sẽ crash hoặc chạy sai một cách khó hiểu lúc runtime.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Rất nguy hiểm):**

C++  
class Animal { public: virtual \~Animal() {} int age; };  
class Dog : public Animal { public: int loyalty; }; // sizeof(Dog) \> sizeof(Animal)

void printAges(Animal animals\[\], int n) {  
    for (int i \= 0; i \< n; \++i) {  
        // LỖI: animals\[i\] tính toán địa chỉ sai\!  
        // Nó sẽ đọc 'loyalty' của con chó đầu tiên như là 'age' của con chó thứ hai.  
        std::cout \<\< animals\[i\].age \<\< std::endl;  
    }  
}

int main() {  
    Dog dogPack\[5\];  
    printAges(dogPack, 5); // Gây ra Undefined Behavior  
      
    Animal\* pAnimal \= new Dog\[5\];  
    delete\[\] pAnimal; // CŨNG LÀ UNDEFINED BEHAVIOR\!  
    return 0;  
}

**SAU (Dùng mảng con trỏ hoặc container chuẩn):**

C++  
\#include \<vector\>  
\#include \<memory\>  
\#include \<iostream\>

class Animal { public: virtual \~Animal() {} int age \= 0; };  
class Dog : public Animal { public: Dog() { age \= 2; } int loyalty \= 100; };

// Cách 1: Dùng container hiện đại (Tốt nhất)  
void printAges(const std::vector\<std::unique\_ptr\<Animal\>\>& animals) {  
    for (const auto& pAnimal : animals) {  
        std::cout \<\< pAnimal-\>age \<\< std::endl; // Đa hình hoạt động đúng  
    }  
}

int main() {  
    std::vector\<std::unique\_ptr\<Animal\>\> animalVec;  
    animalVec.push\_back(std::make\_unique\<Dog\>());  
    animalVec.push\_back(std::make\_unique\<Dog\>());  
    printAges(animalVec); // An toàn và đúng  
    // unique\_ptr tự động delete  
    return 0;  
}

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* Đây là một trong những lý do lớn nhất để ưu tiên `std::vector`, `std::array` (hoặc `std::span` trong C++20) thay vì mảng C-style thô.  
* Đa hình trong C++ chỉ hoạt động an toàn thông qua con trỏ (`Base*`) hoặc tham chiếu (`Base&`). Item này cho thấy nó *không* hoạt động với mảng.  
* Liên quan đến **Item 33** (Biến non-leaf class thành abstract).

---

### **Item 4: Tránh default constructors (hàm tạo mặc định) vô nghĩa**

#### **1\. Tóm tắt cốt lõi (The "What")**

Đừng cung cấp một default constructor (hàm tạo không tham số) nếu nó tạo ra một đối tượng "vô dụng" hoặc "chưa hoàn chỉnh". Hãy bắt buộc người dùng cung cấp dữ liệu cần thiết ngay lúc khởi tạo để đảm bảo đối tượng luôn ở trạng thái hợp lệ.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Để đảm bảo tính bất biến (invariants) của class. Nếu một class `GPIO_Pin` cần biết nó là pin số mấy (ví dụ `pin_num`) để hoạt động, thì việc `GPIO_Pin()` (không có `pin_num`) sẽ tạo ra một đối tượng "zombie".  
* **Cạm bẫy khi vi phạm:**  
  * Tạo ra các đối tượng ở trạng thái không hợp lệ.  
  * Bắt buộc phải thêm hàm `init(int pin_num)` và hàm `bool isInitialized()`.  
  * Người dùng có thể quên gọi `init()`, dẫn đến lỗi runtime.  
  * Code của bạn trở nên phức tạp vì mọi hàm thành viên (member function) đều phải kiểm tra `if (!isInitialized())` trước khi hoạt động.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Thiết kế tồi):**

C++  
class SPI\_Device {  
private:  
    int cs\_pin;  
    bool initialized;  
public:  
    SPI\_Device() : initialized(false) {} // Tạo ra object "zombie"  
      
    void init(int chipSelectPin) {  
        cs\_pin \= chipSelectPin;  
        initialized \= true;  
    }  
      
    void sendData(char data) {  
        if (\!initialized) {  
            // Phải kiểm tra ở mọi hàm\!  
            return; // Lỗi  
        }  
        // ...  
    }  
};

SPI\_Device spi;  
// spi.sendData('A'); // Lỗi\! Quên gọi init()  
spi.init(10);  
spi.sendData('A'); // OK

**SAU (Thiết kế tốt, bắt buộc khởi tạo):**

C++  
class SPI\_Device {  
private:  
    int cs\_pin;  
public:  
    // Bắt buộc cung cấp CS pin ngay lúc tạo  
    explicit SPI\_Device(int chipSelectPin) : cs\_pin(chipSelectPin) {  
        // ... khởi tạo hardware ...  
    }  
      
    void sendData(char data) {  
        // Không cần kiểm tra initialized, vì cs\_pin luôn hợp lệ  
        // ...  
    }  
      
    // SPI\_Device(); // Không có default constructor  
};

// SPI\_Device spi; // LỖI BIÊN DỊCH\! Tốt\!  
SPI\_Device spi(10); // OK, đối tượng luôn hợp lệ  
spi.sendData('A');

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Vấn đề:** Các container chuẩn (như `std::vector`) trước C++11 *yêu cầu* class phải có default constructor để tạo mảng (ví dụ `std::vector<MyClass>(10)`).  
* **Giải pháp hiện đại:**  
  1. C++11 trở đi, `std::vector` không còn yêu cầu này nếu bạn dùng `emplace_back` hoặc `push_back`.  
  2. Nếu bạn *cần* tạo một vector với 10 phần tử được khởi tạo sẵn, bạn có thể dùng `std::vector<SPI_Device> devices(10, SPI_Device(DEFAULT_PIN));` (cung cấp một giá trị mẫu).  
  3. Hoặc dùng `std::vector<std::unique_ptr<SPI_Device>>` (mảng các con trỏ).  
* **Ngoại lệ:** Cung cấp default constructor nếu nó có ý nghĩa (ví dụ: `std::string()` tạo ra chuỗi rỗng, `std::vector()` tạo ra vector rỗng).

---

## **CHƯƠNG 2: TOÁN TỬ (OPERATORS)**

### **Item 5: Cẩn trọng với các hàm chuyển đổi kiểu do người dùng định nghĩa**

#### **1\. Tóm tắt cốt lõi (The "What")**

C++ cho phép chuyển đổi kiểu ngầm định (implicit conversion) qua 2 cách:

1. Constructor một tham số (single-argument constructor).  
2. Toán tử chuyển đổi kiểu (`operator NewType()`).

Hãy luôn dùng `explicit` cho constructor một tham số và tránh dùng toán tử chuyển đổi kiểu ngầm định.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Chuyển đổi ngầm định gây ra những hành vi bất ngờ. Trình biên dịch sẽ "âm thầm" gọi các hàm này để cố gắng làm cho code của bạn biên dịch được, dẫn đến việc gọi sai hàm hoặc tạo ra các đối tượng tạm thời (temporary objects) tốn kém mà bạn không hề hay biết.  
* **Cạm bẫy:**  
  * `if (myArray == 10)` có thể vô tình biên dịch được nếu class `Array` có `Array(int size)`.  
  * Một class `Rational` (số hữu tỉ) có `operator double()` có thể bị tự động chuyển sang `double` khi bạn không muốn, làm mất độ chính xác.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Nguy hiểm):**

C++  
\#include \<iostream\>  
\#include \<string\>

class MyString {  
public:  
    // Constructor này cho phép chuyển đổi ngầm định từ int (size) \-\> MyString  
    MyString(int size) : m\_size(size) {  
        m\_data \= new char\[size\];  
        std::cout \<\< "MyString(int size=" \<\< size \<\< ") called\\n";  
    }  
    // ...  
private:  
    char\* m\_data;  
    int m\_size;  
};

void printString(const MyString& s) { /\* ... \*/ }

int main() {  
    printString(10); // Lỗi logic\!  
    // Biên dịch thành công, nó tự động gọi MyString(10)  
    // để tạo object tạm thời rồi truyền vào hàm.  
}

**SAU (An toàn với `explicit`):**

C++  
\#include \<iostream\>  
\#include \<string\>

class MyString {  
public:  
    // 'explicit' ngăn cấm chuyển đổi ngầm định  
    explicit MyString(int size) : m\_size(size) {  
        m\_data \= new char\[size\];  
        std::cout \<\< "MyString(int size=" \<\< size \<\< ") called\\n";  
    }  
    // ...  
private:  
    char\* m\_data;  
    int m\_size;  
};

void printString(const MyString& s) { /\* ... \*/ }

int main() {  
    // printString(10); // LỖI BIÊN DỊCH\! Tốt\!  
    printString(MyString(10)); // Phải gọi tường minh, rõ ràng ý định  
}

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Ngoại lệ:** Đôi khi chuyển đổi ngầm định là hữu ích (ví dụ `std::string` có thể được xây dựng từ `const char*`, hoặc `std::unique_ptr<Derived>` có thể chuyển sang `std::unique_ptr<Base>`). Tuy nhiên, hãy rất cẩn thận.  
* **Lưu ý C++11:** Với toán tử chuyển đổi (`operator bool()`), hãy dùng `explicit operator bool()`. Điều này cho phép `if (myObject)` hoạt động, nhưng cấm `int x = myObject;` (chuyển ngầm định sang `bool` rồi sang `int`). Các Smart Pointer và `std::optional` dùng kỹ thuật này.

---

### **Item 6: Phân biệt giữa Prefix (++i) và Postfix (i++)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Khi overload toán tử `++` và `--`, hãy nhớ rằng:

* Prefix (`++i`) không có tham số: `MyClass& operator++();`  
* Postfix (`i++`) có một tham số `int` giả: `const MyClass operator++(int);`

Khi *sử dụng*, luôn ưu tiên Prefix (`++i`) hơn Postfix (`i++`) vì nó hiệu quả hơn.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:**  
  * **Prefix (`++i`):** Tăng giá trị của đối tượng, sau đó trả về *chính đối tượng đó* (bằng tham chiếu `&`). Không tạo object tạm.  
  * **Postfix (`i++`):** Phải lưu lại giá trị cũ (tạo 1 object tạm), tăng giá trị của đối tượng, sau đó trả về *object tạm* (bằng value `const`).  
* **Cạm bẫy:**  
  * Dùng Postfix trong các vòng lặp với iterator của `std::vector` hoặc `std::map` sẽ tốn chi phí tạo và hủy object tạm một cách không cần thiết trong mỗi vòng lặp. Với `int` thì compiler có thể tối ưu, nhưng với class thì không chắc.  
  * `operator++(int)` phải trả về `const` value để ngăn cản hành vi vô nghĩa như `(i++)++`.

#### **3\. Ví dụ Code (Cách triển khai và cách sử dụng)**

**Cách triển khai (Mẫu):**

C++  
class MyIterator {  
public:  
    // 1\. Prefix: Trả về tham chiếu  
    MyIterator& operator++() {  
        // ... logic tăng con trỏ ...  
        std::cout \<\< "Prefix \++ called\\n";  
        return \*this; // Trả về chính mình  
    }

    // 2\. Postfix: Trả về giá trị const  
    const MyIterator operator++(int) {  
        std::cout \<\< "Postfix \++ called (tốn kém)\\n";  
        MyIterator temp \= \*this; // 1\. Tạo bản sao (chi phí)  
        \++(\*this);               // 2\. Gọi prefix để tăng (Good practice)  
        return temp;             // 3\. Trả về bản sao  
    }  
    // ...  
};

**Cách sử dụng (Tốt nhất):**

C++  
\#include \<vector\>  
\#include \<iostream\>

std::vector\<int\> v \= {1, 2, 3};

// TRƯỚC (Kém hiệu quả):  
std::cout \<\< "Dùng Postfix:\\n";  
for (auto it \= v.begin(); it \!= v.end(); it++) { // Tốn copy (nếu 'it' là class)  
    // ...  
}

// SAU (Hiệu quả):  
std::cout \<\< "Dùng Prefix:\\n";  
for (auto it \= v.begin(); it \!= v.end(); \++it) { // Không tốn copy  
    // ...  
}

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* Quy tắc này áp dụng cho mọi class có hành vi giống iterator hoặc con trỏ.  
* Đây là một trong những tối ưu hóa vi mô (micro-optimization) dễ thực hiện nhất và nên trở thành thói quen.  
* **Liên kết:** Item 22 (Dùng `op=` để triển khai `op`).

---

### **Item 7: Không bao giờ overload `&&`, `||`, hoặc `,` (dấu phẩy)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Đừng bao giờ overload các toán tử logic `&&` (AND), `||` (OR) và toán tử `,` (comma).

#### **2\. Phân tích Lý do (The "Why")**

* **Mất tính chất Short-Circuit:** Toán tử `&&` và `||` built-in của C++ có tính chất **"đánh giá ngắn mạch" (short-circuit evaluation)**.  
  * `if (p != nullptr && p->isValid())`: Nếu `p` là `nullptr`, vế sau (`p->isValid()`) sẽ *không bao giờ* được thực thi.  
  * Nếu bạn overload `operator&&`, nó sẽ trở thành một lệnh gọi hàm: `obj.operator&&(other)`. C++ yêu cầu *tất cả* tham số của hàm phải được tính toán *trước khi* gọi hàm.  
* **Cạm bẫy khi vi phạm:**  
  * Code của bạn sẽ crash: `if (p && p->isValid())` (với `p` là smart pointer đã overload `&&`) sẽ luôn thực thi `p->isValid()` ngay cả khi `p` là `nullptr`.  
* **Toán tử `,`:** Toán tử `,` built-in đảm bảo vế trái được thực thi xong *trước khi* vế phải được thực thi. Overload nó sẽ mất đảm bảo này (trở thành hàm, thứ tự tính toán tham số không xác định).

#### **3\. Ví dụ Code (Không nên làm)**

C++  
class MyBool {  
public:  
    // KHÔNG LÀM ĐIỀU NÀY  
    bool operator&&(const MyBool& rhs) {  
        std::cout \<\< "Overload && called\\n";  
        return m\_val && rhs.m\_val;  
    }  
    // ...  
private:  
    bool m\_val;  
};

int\* p \= nullptr;  
// Giả sử có 1 class SmartPtr 'sp' (là null) đã overload &&  
// if (sp && sp-\>isValid()) { ... }  
// Sẽ tương đương với:  
// sp.operator&& ( sp-\>isValid() )  
// sp-\>isValid() được gọi TRƯỚC khi vào hàm operator&&, gây crash\!

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Ngoại lệ:** Không có. Đây là một quy tắc tuyệt đối. Nếu bạn nghĩ bạn cần overload chúng, gần như chắc chắn bạn đã thiết kế sai.  
* Trong C++ hiện đại, `operator,` đôi khi được overload trong các thư viện (ví dụ: Boost, Eigen) để tạo ra các DSL (Domain-Specific Language) cho khởi tạo vector/matrix (`v << 1, 2, 3;`). Đây là trường hợp *rất* đặc biệt và không nên bắt chước nếu không hiểu rõ.

---

### **Item 8: Hiểu các ý nghĩa khác nhau của `new` và `delete`**

#### **1\. Tóm tắt cốt lõi (The "What")**

Bạn cần phân biệt rõ ràng:

1. **`new` operator (Toán tử `new`):** Đây là từ khóa C++. Nó làm 2 việc: (1) Gọi `operator new` để cấp phát bộ nhớ, (2) Gọi constructor để khởi tạo đối tượng trên vùng nhớ đó.  
2. **`operator new` (Hàm `new`):** Đây là hàm *chỉ cấp phát bộ nhớ* (giống `malloc`). Bạn có thể overload (viết lại) hàm này để tùy chỉnh cách cấp phát (ví dụ: dùng memory pool).  
3. **`placement new`:** Đây là một dạng của `new` (với tham số) cho phép bạn gọi constructor trên một vùng nhớ *đã được cấp phát từ trước*.

Điều tương tự áp dụng cho `delete` operator (hủy \+ giải phóng) và `operator delete` (chỉ giải phóng).

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Hiểu rõ điều này là chìa khóa để tùy chỉnh quản lý bộ nhớ.  
* **Ứng dụng Embedded:** Trong hệ thống nhúng, bạn *luôn muốn* kiểm soát bộ nhớ. Bạn có thể overload `operator new` toàn cục (global) hoặc cho từng class để lấy bộ nhớ từ một vùng nhớ tĩnh (static pool) hoặc từ heap của RTOS (như `pvPortMalloc` của FreeRTOS) thay vì `malloc` của C standard library.  
* `placement new` cực kỳ quan trọng trong embedded khi bạn cần khởi tạo đối tượng tại một địa chỉ thanh ghi cụ thể, hoặc trong một buffer DMA.

#### **3\. Ví dụ Code (Placement new và Overload)**

**Ví dụ 1: Placement New (Khởi tạo trên Stack/Buffer tĩnh)**

C++  
\#include \<new\> // Cần include new để dùng placement new  
\#include \<iostream\>

class Sensor {  
public:  
    Sensor(int id) : m\_id(id) { std::cout \<\< "Sensor " \<\< m\_id \<\< " created\\n"; }  
    \~Sensor() { std::cout \<\< "Sensor " \<\< m\_id \<\< " destroyed\\n"; }  
private:  
    int m\_id;  
};

// Vùng nhớ tĩnh, không dùng heap  
// 'alignas' (C++11) đảm bảo buffer có địa chỉ đúng  
alignas(Sensor) unsigned char sensor\_buffer\[sizeof(Sensor)\];

int main() {  
    std::cout \<\< "Creating sensor on buffer...\\n";  
    // 1\. Dùng placement new để gọi constructor trên buffer  
    Sensor\* pSensor \= new (sensor\_buffer) Sensor(101);  
      
    // ... sử dụng pSensor ...  
    std::cout \<\< "Destroying sensor...\\n";  
      
    // 2\. Phải gọi destructor thủ công (delete KHÔNG làm điều này)  
    pSensor-\>\~Sensor();  
      
    // 3\. Không gọi 'delete pSensor', vì buffer nằm trên stack  
    std::cout \<\< "Buffer is free.\\n";  
}

**Ví dụ 2: Overload `operator new` cho class (Dùng Memory Pool)**

C++  
// Giả sử có một memory pool  
// extern MemoryPool g\_task\_pool; 

class Task {  
    // ...  
public:  
    // Overload 'new' của riêng class này  
    void\* operator new(size\_t size) {  
        std::cout \<\< "Task new called\\n";  
        return ::operator new(size); // Lấy từ pool (giả lập bằng new toàn cục)  
    }  
      
    void operator delete(void\* ptr) {  
        std::cout \<\< "Task delete called\\n";  
        ::operator delete(ptr); // Trả về pool (giả lập)  
    }  
};

int main() {  
    Task\* pTask \= new Task(); // Sẽ gọi Task::operator new  
    delete pTask; // Sẽ gọi Task::operator delete  
}

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* Khi dùng mảng, `new[]` sẽ gọi `operator new[]` và `delete[]` sẽ gọi `operator delete[]`. Bạn cũng phải overload cả cặp này.  
* `placement delete` (ít dùng): Sẽ được gọi nếu constructor (được gọi bởi `placement new`) ném ngoại lệ.

---

## **CHƯƠNG 3: NGOẠI LỆ (EXCEPTIONS)**

*Lưu ý cho Embedded/IoT: Hầu hết các dự án nhúng (đặc biệt là bare-metal hoặc RTOS) biên dịch với cờ `-fno-exceptions` (tắt ngoại lệ) để tiết kiệm bộ nhớ Flash/RAM và tránh chi phí runtime không đoán trước được. Tuy nhiên, hiểu các quy tắc này là bắt buộc để viết code C++ an toàn (Exception-Safe), vì các nguyên tắc này (như RAII) vẫn áp dụng ngay cả khi không có exception.*

### **Item 9: Sử dụng Destructors để ngăn rò rỉ tài nguyên (Resource Leaks)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Đây là nguyên tắc **RAII (Resource Acquisition Is Initialization \- Sở hữu tài nguyên là khởi tạo)**. Hãy bọc *mọi* tài nguyên (bộ nhớ heap, file handle, mutex lock, kết nối network) trong một đối tượng. Việc cấp phát tài nguyên xảy ra trong constructor, và giải phóng tài nguyên xảy ra trong destructor.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** C++ đảm bảo rằng destructor của các đối tượng trên stack sẽ *luôn luôn* được gọi khi chúng ra khỏi scope, bất kể hàm kết thúc bình thường, `return` sớm, hay do một ngoại lệ bị ném ra.  
* **Cạm bẫy khi vi phạm:**  
  * Viết code C-style: `Mutex_Lock(m); ...; Mutex_Unlock(m);`. Nếu có `return` hoặc `throw` ở giữa, hàm `Mutex_Unlock` sẽ không bao giờ được gọi \-\> Deadlock toàn hệ thống.  
  * `MyClass* p = new MyClass(); ...; delete p;`. Nếu có lỗi ở giữa, `delete` không được gọi \-\> Rò rỉ bộ nhớ.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Code C-style, không an toàn với exception):**

C++  
\#include \<mutex\>  
std::mutex mtx;

void processDevice(Device\* pDev) {  
    mtx.lock(); // 1\. Cấp phát tài nguyên  
      
    pDev-\>start();  
    if (pDev-\>isFailed()) {  
        // Lỗi: return sớm, quên unlock()  
        return;   
    }  
      
    pDev-\>doWork();  
      
    mtx.unlock(); // 2\. Giải phóng  
}

**SAU (Code RAII, an toàn tuyệt đối):**

C++  
\#include \<mutex\>  
\#include \<memory\> // cho unique\_ptr

// C++11/17 đã cung cấp sẵn std::lock\_guard  
void processDevice(Device\* pDev) {  
    // Dùng std::lock\_guard (C++11) để quản lý lock  
    std::lock\_guard\<std::mutex\> lock(mtx); // Lock được gọi ở đây  
      
    pDev-\>start();  
    if (pDev-\>isFailed()) {  
        return; // An toàn\! 'lock' sẽ bị hủy \-\> unlock() tự động  
    }  
      
    pDev-\>doWork();  
      
} // 'lock' bị hủy \-\> unlock() tự động.

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Lưu ý C++ Hiện Đại:** Cuốn sách này giới thiệu `auto_ptr`. `auto_ptr` đã **BỊ LOẠI BỎ** (deprecated trong C++11, xóa bỏ trong C++17). Luôn luôn sử dụng `std::unique_ptr` (cho quyền sở hữu duy nhất) và `std::shared_ptr` (cho quyền sở hữu chia sẻ \- Item 29).  
* `std::lock_guard` và `std::unique_lock` (C++11) là các triển khai RAII chuẩn cho mutex.

---

### **Item 10: Ngăn rò rỉ tài nguyên trong Constructors**

#### **1\. Tóm tắt cốt lõi (The "What")**

Nếu một constructor ném ra ngoại lệ, destructor của class đó sẽ **KHÔNG** được gọi. Nếu bạn đã cấp phát tài nguyên *bên trong* thân constructor, bạn phải tự dọn dẹp nó trước khi `throw`.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** C++ chỉ gọi destructor cho các đối tượng đã được *khởi tạo hoàn chỉnh*. Một đối tượng chỉ hoàn chỉnh khi constructor của nó chạy xong (thoát ra bình thường). Nếu constructor `throw`, đối tượng đó được xem là chưa bao giờ tồn tại.

**Cạm bẫy:**  
C++  
MyClass::MyClass() {  
    pData1 \= new Data();  
    pData2 \= new Data(); // Dòng này throw std::bad\_alloc  
} // pData1 sẽ bị rò rỉ, vì \~MyClass() không được gọi

*   
* **Lưu ý:** Các thành viên (member variables) được khởi tạo trong *member initialization list* (danh sách khởi tạo) *sẽ* được hủy. Chỉ những gì cấp phát *trong thân hàm* constructor mới bị rò rỉ.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Bị rò rỉ):**

C++  
class Connection {  
public:  
    Connection() {  
        pBuffer \= new char\[1024\]; // Cấp phát 1  
          
        try {  
            pSocket \= new Socket(); // Cấp phát 2 (Giả sử dòng này throw)  
        } catch (...) {  
            delete\[\] pBuffer; // Phải dọn dẹp pBuffer thủ công  
            throw; // Ném lại ngoại lệ  
        }  
    }  
      
    \~Connection() {  
        delete pSocket;  
        delete\[\] pBuffer;  
    }  
private:  
    char\* pBuffer;  
    Socket\* pSocket;  
};

**SAU (Dùng Smart Pointer là cách tốt nhất):**

C++  
\#include \<memory\> // Dùng smart pointers

class Connection {  
public:  
    // Khởi tạo trong danh sách khởi tạo (member init list)  
    Connection()   
      : pBuffer(std::make\_unique\<char\[\]\>(1024)),  
        pSocket(std::make\_unique\<Socket\>())   
    {  
        // Thân hàm rỗng  
    }  
      
    // Không cần viết destructor\!  
    // \~Connection() {} // unique\_ptr tự động dọn dẹp  
      
private:  
    // Dùng smart pointer  
    std::unique\_ptr\<char\[\]\> pBuffer;  
    std::unique\_ptr\<Socket\> pSocket;  
};  
// Nếu new Socket() throw, destructor của pBuffer (đã khởi tạo xong)  
// sẽ được gọi tự động. An toàn tuyệt đối.

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* Đây là lý do tại sao bạn nên khởi tạo mọi thứ trong *member initialization list* thay vì trong thân hàm constructor.  
* Luôn dùng RAII (Item 9\) cho mọi tài nguyên trong class.

---

### **Item 11: Ngăn ngoại lệ thoát khỏi Destructors**

#### **1\. Tóm tắt cốt lõi (The "What")**

Không bao giờ để Destructor ném ngoại lệ ra ngoài. Hãy bắt (`try-catch`) và xử lý (hoặc nuốt) mọi ngoại lệ ngay bên trong Destructor.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Destructor thường được gọi khi một exception khác đang active (quá trình stack unwinding). Nếu Destructor lại `throw` thêm 1 exception nữa trong khi exception cũ chưa được xử lý, C++ không biết phải làm gì và sẽ gọi **`std::terminate()`** \-\> Crash chương trình ngay lập tức.  
* **Cạm bẫy:** Ghi log, đóng file, đóng kết nối network... trong Destructor. Bất kỳ thao tác nào trong số này đều có thể thất bại và ném ngoại lệ.

#### **3\. Ví dụ Code (Trước & Sau)**

**TRƯỚC (Rất nguy hiểm):**

C++  
class DBConnection {  
public:  
    \~DBConnection() {  
        db.close(); // Giả sử db.close() có thể throw nếu kết nối mất  
    }  
private:  
    Database db;  
};

void doWork() {  
    DBConnection conn;  
    // ...  
    throw std::runtime\_error("Lỗi 1");  
} // Stack unwinding, gọi \~DBConnection().  
  // Nếu db.close() throw "Lỗi 2" \-\> std::terminate()

**SAU (An toàn):**

C++  
class DBConnection {  
public:  
    \~DBConnection() {  
        try {  
            db.close();  
        } catch (const std::exception& e) {  
            // Nuốt ngoại lệ. Có thể ghi log vào file (nếu an toàn)  
            log\_error("Failed to close DB in destructor: " \+ std::string(e.what()));  
        } catch (...) {  
            // Bắt mọi thứ  
        }  
    }  
    // ...  
};

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Lưu ý C++11:** Destructor mặc định được coi là `noexcept(true)`. Nếu bạn viết một destructor mà trình biên dịch nghĩ rằng có thể throw, nó sẽ không biên dịch (hoặc cảnh báo). Bạn phải tự bọc `try-catch` hoặc đánh dấu `noexcept(false)` (rất không khuyến khích).

---

### **Item 12: Hiểu cách ném ngoại lệ khác với truyền tham số**

#### **1\. Tóm tắt cốt lõi (The "What")**

Khi bạn `throw` một đối tượng, nó *luôn luôn* được sao chép (copy), ngay cả khi bạn `catch` bằng tham chiếu. Việc ném ngoại lệ (tốn kém) khác hoàn toàn với việc truyền tham số (rẻ tiền).

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Khi một hàm `throw`, stack frame của hàm đó sẽ bị hủy. Nếu C++ không tạo một bản sao của đối tượng exception, đối tượng đó (nếu là biến local) sẽ bị hủy cùng stack, và `catch` block sẽ nhận được rác.  
* **Chi tiết:** Trình biên dịch tạo một bản sao của đối tượng được ném ra và đặt nó vào một vùng nhớ đặc biệt (không phải stack, không phải heap) để `catch` block có thể truy cập.  
* **Slicing:** Khi bạn `throw Derived()`, nhưng `catch (Base e)` (catch by value), bản sao *thứ hai* (từ bản sao tạm sang `e`) sẽ bị "cắt lát" (slicing), mất hết thông tin của `Derived`.

#### **3\. Ví dụ Code**

C++  
\#include \<iostream\>

class MyException {  
public:  
    MyException() { std::cout \<\< "E: Constructor\\n"; }  
    MyException(const MyException&) { std::cout \<\< "E: Copy Constructor\\n"; }  
    \~MyException() { std::cout \<\< "E: Destructor\\n"; }  
};

void doThrow() {  
    MyException e;  
    std::cout \<\< "Throwing...\\n";  
    throw e; // 1\. Copy-constructor được gọi ở đây để tạo bản sao tạm  
}

int main() {  
    try {  
        doThrow();  
    }   
    // catch (MyException e) // 2\. Sẽ gọi Copy-constructor một lần nữa\! (Tệ)  
    catch (const MyException& e) // 3\. Tốt\! Chỉ 1 lần copy (lúc throw)  
    {   
        std::cout \<\< "Caught\!\\n";  
    }  
}  
// Output (với catch-by-ref):  
// E: Constructor  
// Throwing...  
// E: Copy Constructor  (Tạo bản sao tạm)  
// E: Destructor         (Hủy 'e' gốc)  
// Caught\!  
// E: Destructor         (Hủy bản sao tạm)

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* Luôn `throw` by value, `catch` by reference (Item 13).  
* Vì `throw` luôn copy, đừng bao giờ `throw` một con trỏ (trừ khi nó là smart pointer) vì không rõ ai sẽ `delete` nó.

---

### **Item 13: Catch exceptions by reference (Bắt ngoại lệ bằng tham chiếu)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Luôn luôn `catch` ngoại lệ bằng tham chiếu (thường là `const&`), không bao giờ `catch` bằng giá trị (by value) hoặc bằng con trỏ (by pointer).

* **TỐT:** `catch (const std::exception& e)`  
* **TỆ:** `catch (std::exception e)`  
* **RẤT TỆ:** `catch (std::exception* e)`

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao không catch by value?**  
  1. **Slicing Problem:** Nếu bạn `throw DerivedException()` nhưng `catch (BaseException e)`, đối tượng `e` sẽ bị "cắt lát". Nó chỉ là một `BaseException`, mất hết thông tin của `DerivedException`.  
  2. **Tốn kém:** Tốn thêm một lần copy constructor (Item 12).  
* **Tại sao không catch by pointer?**  
  1. Khuyến khích `throw new MyException()`. Ai sẽ `delete` con trỏ này? `catch` block? Rất dễ rò rỉ bộ nhớ.  
  2. Nếu ai đó `throw` con trỏ tới một đối tượng trên stack (`throw &e_local;`), `catch` block sẽ nhận được một con trỏ rác.  
* **Tại sao `catch (const&)` là tốt nhất?**  
  1. **Không Slicing:** Tham chiếu có thể bind vào đối tượng `Derived` mà không "cắt lát" nó. Đa hình hoạt động đúng.  
  2. **Hiệu quả:** Không tốn thêm chi phí copy nào (ngoài bản copy bắt buộc lúc `throw`).

#### **3\. Ví dụ Code**

C++  
class BaseEx : public std::exception { ... };  
class DerivedEx : public BaseEx { ... };

try {  
    throw DerivedEx();  
}  
// TỆ (Slicing):  
catch (BaseEx e) {  
    // 'e' ở đây là BaseEx, không còn là DerivedEx.  
    // e.what() (nếu virtual) sẽ gọi sai hàm (nếu không virtual).  
}  
// TỐT (Không slicing, hiệu quả):  
catch (const BaseEx& e) {  
    // 'e' ở đây thực sự tham chiếu đến đối tượng DerivedEx.  
    // e.what() (nếu virtual) sẽ gọi đúng hàm của DerivedEx.  
}

---

### **Item 14: Sử dụng exception specifications một cách thận trọng**

*Sách gốc nói về `throw(Type)`, một tính năng đã bị deprecated (gỡ bỏ) trong C++11 và xóa bỏ trong C++17. Lời khuyên này được cập nhật cho `noexcept` (C++11).*

#### **1\. Tóm tắt cốt lõi (The "What")**

Trong C++ hiện đại, hãy sử dụng `noexcept` để đánh dấu các hàm mà bạn *đảm bảo* sẽ không bao giờ ném ngoại lệ.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao `noexcept` quan trọng?**  
  1. **Tối ưu hóa Compiler:** Khi trình biên dịch biết một hàm là `noexcept`, nó không cần tạo "exception handling unwinding tables" cho hàm đó. Điều này giúp giảm đáng kể kích thước file thực thi (binary size), cực kỳ quan trọng trong Embedded.  
  2. **Tối ưu hóa Thư viện:** Các thư viện chuẩn (như `std::vector`) sẽ kiểm tra xem `move constructor` và `move assignment` của kiểu dữ liệu (T) có `noexcept` hay không. Nếu có, `vector` sẽ dùng `move` (rẻ) khi resize. Nếu không, nó buộc phải dùng `copy` (đắt) để đảm bảo an toàn.  
* **Cạm bẫy:** Nếu bạn đánh dấu hàm là `noexcept` nhưng nó lại ném ngoại lệ, chương trình sẽ gọi `std::terminate()` ngay lập tức.

#### **3\. Ví dụ Code**

C++  
// 1\. Dùng noexcept cho các hàm đơn giản  
int get\_value() noexcept { return 5; }  
void swap(MyClass& a, MyClass& b) noexcept {  
    std::swap(a.data, b.data);  
}

// 2\. Rất quan trọng cho Move Semantics  
class MyData {  
public:  
    // Đánh dấu noexcept để std::vector có thể move  
    MyData(MyData&& other) noexcept   
      : p(other.p) {  
        other.p \= nullptr;  
    }  
    // ...  
private:  
    int\* p;  
};

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Khi nào dùng:** Destructors (mặc định là `noexcept` trong C++11), Move Constructors, Move Assignment, các hàm `swap`, và các hàm tiện ích đơn giản.  
* **Khi nào không dùng:** Bất cứ hàm nào gọi code (ví dụ: `new`, thư viện bên ngoài) mà có thể `throw`.

---

### **Item 15: Hiểu chi phí của xử lý ngoại lệ**

#### **1\. Tóm tắt cốt lõi (The "What")**

Sử dụng `try-catch` không miễn phí, ngay cả khi không có ngoại lệ nào được ném ra.

1. **Chi phí bộ nhớ (Flash/ROM):** Trình biên dịch phải tạo "unwinding tables" (bảng tra cứu) để biết cách hủy các đối tượng trên stack nếu có ngoại lệ. Việc này làm tăng kích thước file thực thi (code bloat).  
2. **Chi phí Runtime (CPU):**  
   * **Happy Path (không `throw`):** Chi phí rất thấp (gần như 0\) trên các trình biên dịch hiện đại.  
   * **Unhappy Path (có `throw`):** *Cực kỳ* tốn kém. Quá trình stack unwinding, tra cứu handler, copy exception... chậm hơn `return` hàng ngàn lần.

#### **2\. Phân tích Lý do (The "Why")**

* **Bối cảnh Embedded:** Đây là lý do chính tại sao các hệ thống nhúng thời gian thực (real-time) và các hệ thống bị giới hạn tài nguyên (constrained) thường tắt hẳn exception (`-fno-exceptions`).  
  * Kích thước file thực thi là tài nguyên quý giá (Flash).  
  * Hành vi "Cực kỳ tốn kém" khi `throw` là không thể chấp nhận được trong một tác vụ thời gian thực (vì nó không có tính xác định \- deterministic).  
* **Kết luận:** Nếu bạn *phải* dùng exception, chỉ dùng nó cho các lỗi *thực sự* nghiêm trọng và hiếm gặp, không bao giờ dùng để kiểm soát luồng chương trình (control flow).

---

## **CHƯƠNG 4: HIỆU NĂNG (EFFICIENCY)**

### **Item 16: Nhớ quy luật 80-20**

#### **1\. Tóm tắt cốt lõi (The "What")**

Quy luật Pareto (80-20 rule) trong lập trình: 80% thời gian thực thi của chương trình được tiêu tốn bởi 20% (hoặc ít hơn) code.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Đừng lãng phí thời gian tối ưu hóa những đoạn code hiếm khi chạy (premature optimization). Hãy dùng **Profiler** (công cụ đo lường hiệu năng) để tìm ra 20% "điểm nóng" (hotspots) đó và chỉ tập trung tối ưu chúng.  
* **Cạm bẫy khi vi phạm:**  
  * Dành 1 tuần để tối ưu một hàm `init()` (chỉ chạy 1 lần) thay vì 1 ngày để tối ưu vòng lặp `process_data()` (chạy 1 triệu lần/giây).  
  * Tối ưu hóa vi mô (viết code khó đọc để tiết kiệm vài nano giây) ở những nơi không quan trọng.

#### **3\. Bối cảnh, Ngoại lệ & Liên kết**

* Trong Embedded, "điểm nóng" thường là:  
  * Các ISR (Trình ngắt).  
  * Các vòng lặp xử lý tín hiệu (DSP loops).  
  * Các tác vụ (tasks) RTOS chạy với tần suất cao.  
* Luôn luôn: **"Make it work, make it right, then make it fast (if needed, based on profiling)."**

---

### **Item 17: Cân nhắc sử dụng Lazy Evaluation (Đánh giá lười)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Trì hoãn việc thực hiện một phép tính tốn kém cho đến khi kết quả của nó thực sự cần thiết.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Nếu kết quả không bao giờ được dùng, bạn đã tiết kiệm 100% chi phí tính toán.  
* **Các dạng Lazy Evaluation:**  
  1. **Reference Counting (Đếm tham chiếu \- Item 29):** Trì hoãn việc copy.  
  2. **Copy-on-Write (COW):** Một dạng của đếm tham chiếu, chỉ copy khi có ai đó muốn *ghi* (write) vào dữ liệu.  
  3. **Lazy Fetching:** Chỉ đọc dữ liệu từ database/EEPROM/File khi hàm `getValue()` được gọi, thay vì đọc tất cả trong constructor.  
  4. **Caching:** Lưu lại kết quả lần tính đầu tiên.

#### **3\. Ví dụ Code (Lazy Fetching / Caching)**

C++  
class SensorData {  
public:  
    SensorData(int id) : m\_id(id), m\_isDirty(true) {}

    int getTemperature() const {  
        if (m\_isDirty) {  
            // Phép tính tốn kém (ví dụ: đọc từ I2C, tính toán phức tạp)  
            m\_cachedValue \= readSensor(m\_id);   
            m\_isDirty \= false; // Đã sạch  
        }  
        return m\_cachedValue; // Trả về cache  
    }  
      
    void invalidate() { // Gọi khi biết sensor có dữ liệu mới  
        m\_isDirty \= true;  
    }

private:  
    int m\_id;  
    mutable int m\_cachedValue; // 'mutable' cho phép thay đổi trong hàm const  
    mutable bool m\_isDirty;  
      
    int readSensor(int id) const { /\* ... Giả lập đọc I2C ... \*/ return 25; }  
};

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Mặt trái:** Làm tăng độ phức tạp của class (phải thêm cờ `dirty`, `cache value`). Hàm `get` đơn giản giờ trở nên phức tạp (phải kiểm tra cờ).  
* Dùng khi chi phí tính toán *rất cao* và khả năng nó *không được dùng* là đáng kể.

---

### **Item 18: Phân tán chi phí tính toán (Amortize cost)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Thực hiện **Eager Evaluation (Đánh giá hăng hái)**. Nếu bạn biết một tài nguyên sẽ được sử dụng nhiều lần, hãy cấp phát hoặc tính toán nó trước một lần, để các lần gọi sau trở nên rẻ tiền.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Tránh chi phí cao, không đoán trước được (latency spike) tại các thời điểm quan trọng.  
* **Các dạng Amortization:**  
  1. **Caching / Prefetching:** Tính toán/tải trước dữ liệu (ví dụ: `std::vector::reserve()`).  
  2. **Lookup Tables:** Trong Embedded, tính trước bảng Sin/Cos/Log và lưu vào ROM (thay vì gọi `sin()` tốn kém lúc runtime).  
  3. **Memory Pools (Item 8):** Cấp phát một khối nhớ lớn lúc khởi động, sau đó các lần `new`/`delete` nhỏ lẻ chỉ là việc lấy/trả con trỏ từ pool (rất nhanh).

#### **3\. Ví dụ Code (std::vector::reserve)**

**TRƯỚC (Chi phí không phân tán):**

C++  
std::vector\<int\> v;  
// Mỗi lần push\_back có thể gây realloc (rất tốn kém)  
for (int i \= 0; i \< 1000; \++i) {  
    v.push\_back(i); // Có thể realloc nhiều lần  
}

**SAU (Phân tán chi phí):**

C++  
std::vector\<int\> v;  
// Cấp phát 1 lần duy nhất, tốn kém tại đây  
v.reserve(1000); 

// Tất cả 1000 lần push\_back sau đó đều rất nhanh (O(1))  
for (int i \= 0; i \< 1000; \++i) {  
    v.push\_back(i); // Không bao giờ realloc  
}

---

### **Item 19: Hiểu nguồn gốc của các đối tượng tạm (Temporary Objects)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Đối tượng tạm (không có tên) được trình biên dịch tự động tạo ra trong hai tình huống chính:

1. **Chuyển đổi kiểu ngầm định:** Khi bạn truyền một kiểu "sai" cho hàm và C++ có thể dùng constructor 1-tham số (Item 5\) để tạo object tạm. `printString(10);` \-\> `printString(MyString(10));`  
2. **Hàm trả về by value:** Khi một hàm trả về một đối tượng, đối tượng đó là một temporary. `MyClass c = funcA() + funcB();`

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Việc tạo và hủy các đối tượng tạm này tốn chi phí CPU (gọi constructor/destructor).  
* **Cạm bẫy:** `const MyString& s = "hello";` Dòng này *vẫn* tạo object tạm\! Nó tạo `MyString("hello")` rồi bind `s` vào đó. (An toàn, nhưng không miễn phí).

#### **3\. Ví dụ Code**

C++  
class BigNum {  
public:  
    BigNum(int v \= 0);  
    // ...  
};

BigNum operator+(const BigNum& a, const BigNum& b);

BigNum a \= 1; // 1\. Tạm: BigNum(1)  
BigNum b \= 2; // 2\. Tạm: BigNum(2)

// 3\. Tạm: BigNum(10) được tạo để gọi operator+  
// 4\. Tạm: Kết quả trả về của operator+  
BigNum c \= a \+ 10; 

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Lưu ý C++11 (Move Semantics):** Move semantics *không* loại bỏ temporary, nhưng nó làm cho việc *di chuyển* (move) temporary rẻ hơn nhiều so với *sao chép* (copy).  
* **Liên kết:** Item 5 (dùng `explicit` để chặn temporary từ implicit conversion), Item 20 (dùng RVO để compiler loại bỏ temporary khi return).

---

### **Item 20: Hỗ trợ "Return Value Optimization" (RVO)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Hãy viết hàm trả về object theo cách "thân thiện" với RVO (Tối ưu hóa giá trị trả về) để trình biên dịch có thể loại bỏ hoàn toàn việc copy/move object tạm.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** RVO (và NRVO \- Named RVO) là một trong những tối ưu hóa quan trọng nhất của C++. Thay vì:  
  1. Hàm `create()` tạo object `localObj`.  
  2. Hàm `create()` *copy/move* `localObj` ra một temporary ở bên ngoài.  
  3. Hàm `main()` *copy/move* temporary đó vào `myObj`.  
* Trình biên dịch sẽ "thông minh" khởi tạo `localObj` *ngay tại địa chỉ* của `myObj`. Không có copy, không có move.

#### **3\. Ví dụ Code (Cách viết thân thiện RVO/NRVO)**

C++  
\#include \<iostream\>

class BigObject {  
public:  
    BigObject() { std::cout \<\< "Constructor\\n"; }  
    BigObject(const BigObject&) { std::cout \<\< "COPY Constructor (TỆ)\\n"; }  
    BigObject(BigObject&&) noexcept { std::cout \<\< "MOVE Constructor (TẠM)\\n"; }  
    \~BigObject() { std::cout \<\< "Destructor\\n"; }  
};

// 1\. RVO (Return Value Optimization) \- TỐT NHẤT  
BigObject create\_RVO() {  
    std::cout \<\< "Creating (RVO)...\\n";  
    return BigObject(); // Trả về 1 temporary  
}

// 2\. NRVO (Named RVO) \- TỐT  
BigObject create\_NRVO() {  
    std::cout \<\< "Creating (NRVO)...\\n";  
    BigObject result; // Đặt tên  
    // ...  
    return result; // Trả về object đã đặt tên  
}

int main() {  
    std::cout \<\< "--- RVO Test \---\\n";  
    BigObject o1 \= create\_RVO(); // Compiler sẽ tối ưu, chỉ 1 Ctor  
      
    std::cout \<\< "--- NRVO Test \---\\n";  
    BigObject o2 \= create\_NRVO(); // Compiler cũng tối ưu, chỉ 1 Ctor  
}  
// Output (với compiler tốt):  
// \--- RVO Test \---  
// Creating (RVO)...  
// Constructor        (Của o1, được tạo bên trong hàm)  
// \--- NRVO Test \---  
// Creating (NRVO)...  
// Constructor        (Của o2, được tạo bên trong hàm)  
// Destructor         (Của o2)  
// Destructor         (Của o1)

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Cách phá NRVO:** Nếu hàm của bạn có nhiều đường `return` trả về các object khác nhau (ví dụ: `if (c) return a; else return b;`), compiler sẽ *không* thể áp dụng NRVO và sẽ phải dùng move hoặc copy.  
* **Kết luận:** Hãy `return` 1 object duy nhất (nếu là NRVO) hoặc `return` 1 temporary (nếu là RVO).

---

### **Item 21: Sử dụng Overloading để tránh Implicit Type Conversions**

#### **1\. Tóm tắt cốt lõi (The "What")**

Thay vì để trình biên dịch tạo object tạm (Item 19\) để ép kiểu tham số cho khớp hàm, hãy viết thêm overload function nhận đúng kiểu đó.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Việc tạo object tạm (ví dụ: `BigInt(5)`) tốn kém hơn nhiều so với việc gọi một hàm overload (`operator+(const BigInt&, int)`) được tối ưu hóa riêng.  
* **Cạm bẫy:** Bạn có thể không nhận ra chi phí này nếu không profiling.

#### **3\. Ví dụ Code**

**TRƯỚC (Tốn kém):**

C++  
class BigInt {  
public:  
    BigInt(int val); // Constructor (không explicit)  
    friend const BigInt operator+(const BigInt& a, const BigInt& b) {  
        std::cout \<\< "operator+(BigInt, BigInt)\\n";  
        // ...  
        return BigInt();  
    }  
};

int main() {  
    BigInt a \= 10;  
    std::cout \<\< "Calling b \= a \+ 5\\n";  
    BigInt b \= a \+ 5; // Tốn kém:  
                      // 1\. Gọi BigInt(5) để tạo temporary  
                      // 2\. Gọi operator+(a, temporary)  
}

**SAU (Hiệu quả):**

C++  
class BigInt {  
public:  
    explicit BigInt(int val); // Dùng explicit (Item 5\)  
      
    friend const BigInt operator+(const BigInt& a, const BigInt& b) {  
        std::cout \<\< "operator+(BigInt, BigInt)\\n";  
        // ...  
        return BigInt(0);  
    }  
      
    // Cung cấp overload hiệu quả  
    friend const BigInt operator+(const BigInt& a, int b\_val) {  
        std::cout \<\< "operator+(BigInt, int)\\n";  
        // ... Tối ưu hóa cho int ...  
        return BigInt(0);  
    }  
};

int main() {  
    BigInt a \= 10;  
    std::cout \<\< "Calling b \= a \+ 5\\n";  
    BigInt b \= a \+ 5; // Hiệu quả: Gọi thẳng operator+(a, 5\)  
}

---

### **Item 22: Cân nhắc dùng `operator=` thay vì `operator` đứng một mình**

#### **1\. Tóm tắt cốt lõi (The "What")**

Khi triển khai các toán tử (như `+`, `-`, `*`, `/`), hãy triển khai `+=`, `-=`, `*=`, `/=` trước. Sau đó, triển khai các toán tử đứng một mình (`+`, `-`, `*`, `/`) bằng cách gọi các toán tử `op=` tương ứng.

#### **2\. Phân tích Lý do (The "Why")**

* **Hiệu quả:** `operator+=` (và các `op=` khác) thường hiệu quả hơn vì chúng *thay đổi tại chỗ* (in-place) và không cần tạo object tạm để trả về.  
* **Dễ bảo trì:** Bạn chỉ cần tập trung logic vào một hàm (`+=`). Hàm `+` chỉ là một hàm tiện ích (helper) gọi lại `+=`.  
* **Tính nhất quán:** Đảm bảo `a + b` và `a += b` có hành vi tương đồng.

#### **3\. Ví dụ Code**

C++  
class BigNum {  
public:  
    // 1\. Triển khai operator+= (hiệu quả, in-place)  
    BigNum& operator+=(const BigNum& rhs) {  
        // ... logic cộng dồn vào \*this ...  
        return \*this;  
    }  
      
    // ...  
};

// 2\. Triển khai operator+ (đứng một mình) bằng cách GỌI LẠI operator+=  
// (Nên là non-member để cho phép chuyển đổi kiểu ở cả 2 vế)  
inline const BigNum operator+(const BigNum& lhs, const BigNum& rhs) {  
    // 1\. Tạo bản sao của vế trái  
    // 2\. Dùng \+=  
    // 3\. Trả về  
    return BigNum(lhs) \+= rhs; // Kỹ thuật "copy-and-op-assign"  
}

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* Kỹ thuật `return BigNum(lhs) += rhs;` tận dụng RVO (Item 20\) và đảm bảo an toàn (làm việc trên bản sao, không ảnh hưởng `lhs`).  
* **Lưu ý C++11:** Bạn có thể tối ưu `operator+` hơn nữa bằng cách nhận 1 tham số by-value và `std::move` nó.

---

### **Item 23: Cân nhắc các thư viện thay thế**

#### **1\. Tóm tắt cốt lõi (The "What")**

Đừng mặc định rằng thư viện chuẩn (`std`) luôn là lựa chọn tốt nhất cho *mọi* tình huống, đặc biệt là về hiệu năng.

#### **2\. Phân tích Lý do (The "Why")**

* Thư viện chuẩn được thiết kế để *tổng quát*, *an toàn*, và *portable*. Đôi khi nó phải hy sinh hiệu năng.  
* **Ví dụ:**  
  * `std::iostream` (rất chậm) vs `printf` (nhanh) vs `fmt` library (vừa nhanh vừa an toàn).  
  * `std::map` (cây đỏ-đen, O(logN)) vs `std::unordered_map` (bảng băm, O(1) trung bình) vs `absl::flat_hash_map` (Google, nhanh hơn nhiều).

#### **3\. Bối cảnh (Đặc biệt cho Embedded/IoT)**

* **Kích thước code (Flash):** `std::iostream` cực kỳ lớn. `printf` (từ `stdio.h`) nhỏ gọn hơn nhiều. Các thư viện log tối giản (minimal logging) tự viết là tốt nhất.  
* **Bộ nhớ (RAM):** `std::map` có thể tốn nhiều RAM cho các node con trỏ. Một `std::vector` đã được sort \+ `std::lower_bound` (tìm kiếm nhị phân) có thể hiệu quả hơn về bộ nhớ.  
* **Hiệu năng Real-time:** Một số thư viện (như `std::string`) có thể cấp phát bộ nhớ ngầm, gây ra độ trễ không đoán trước được.

---

### **Item 24: Hiểu chi phí của Virtual Functions, Multiple Inheritance, RTTI**

#### **1\. Tóm tắt cốt lõi (The "What")**

Không có gì là miễn phí (Zero-overhead principle là lý tưởng, nhưng thực tế có cost).

* **Virtual Functions:** Tốn 1 `vptr` (con trỏ) trong mỗi object \+ 1 `vtbl` (bảng) cho mỗi class.  
* **Multiple Inheritance:** Tốn kém hơn (về size và tốc độ) so với đơn kế thừa.  
* **RTTI:** Tốn bộ nhớ (Flash) để lưu thông tin kiểu (type info).

#### **2\. Phân tích Chi tiết**

* **Virtual Function Cost:**  
  * **Memory:** Mỗi object có 1 `vptr` (virtual pointer) (thường là 4/8 bytes). Mỗi class có 1 `vtbl` (virtual table) (lưu con trỏ hàm).  
  * **Runtime:** Mỗi lần gọi hàm ảo tốn thêm 2-3 lệnh (đọc `vptr`, index vào `vtbl`, gọi hàm qua con trỏ).  
  * **Tối ưu hóa:** Ngăn cản `inline` (trừ khi compiler biết chắc kiểu, ví dụ: gọi qua object `d.func()` thay vì con trỏ `p->func()`).  
* **Multiple Inheritance Cost:** Phức tạp. Một object có thể có *nhiều* `vptr`. Việc ép kiểu con trỏ giữa các class cha có thể yêu cầu *thay đổi giá trị con trỏ* (pointer offset adjustment), không chỉ là `static_cast` 0-cost.  
* **RTTI (Run-Time Type Information) Cost:**  
  * Dùng cho `dynamic_cast` và `typeid`.  
  * Yêu cầu lưu trữ thông tin về tên class và cấu trúc kế thừa, làm tăng kích thước file thực thi.  
  * `dynamic_cast` tốn chi phí runtime đáng kể để duyệt cây kế thừa.

#### **4\. Bối cảnh (Embedded)**

* **`vptr`/`vtbl`:** Chi phí này thường chấp nhận được nếu bạn cần đa hình.  
* **RTTI/`dynamic_cast`:** Hầu hết các dự án Embedded *tắt* RTTI (`-fno-rtti`) để tiết kiệm Flash và tránh chi phí runtime. Nếu cần ép kiểu cha-con, họ thường dùng `static_cast` (rủi ro hơn) hoặc tự quản lý type-id (an toàn hơn `static_cast`).

---

## **CHƯƠNG 5: KỸ THUẬT (TECHNIQUES)**

### **Item 25: Ảo hóa Constructors và Non-member functions**

#### **1\. Tóm tắt cốt lõi (The "What")**

C++ không cho phép `virtual constructor` hoặc `virtual non-member function`. Nhưng bạn có thể *mô phỏng* chúng.

1. **Virtual Constructor:** Dùng một hàm (thường là `clone()`) để tạo bản sao đa hình.  
2. **Virtual Non-member:** Dùng một hàm non-member (ví dụ: `operator<<`) làm "vỏ bọc" (wrapper) và gọi một hàm `virtual` bên trong.

#### **2\. Phân tích Lý do (The "Why")**

* **Virtual Constructor (`clone()`):** Khi bạn có một `Base*` trỏ đến `Derived`, làm sao để copy đối tượng `Derived` mà không biết kiểu của nó? Bạn gọi `pBase->clone()`, hàm này sẽ gọi `Derived::clone()` (nhờ `virtual`) và trả về một `Derived` mới.  
* **Virtual Non-member (`operator<<`):** Bạn không thể làm `operator<<` là member (vì vế trái là `std::ostream`). Bạn cũng không thể làm nó `virtual`. Giải pháp là để `operator<<` (non-member) gọi một hàm `virtual print()` (member).

#### **3\. Ví dụ Code**

**1\. Virtual Constructor (Clone Pattern):**

C++  
class Base {  
public:  
    virtual \~Base() {}  
    // 1\. Dùng "virtual constructor" idiom  
    virtual Base\* clone() const \= 0;  
};

class Derived : public Base {  
public:  
    // 2\. Covariant Return Type (C++) cho phép trả về Derived\*  
    Derived\* clone() const override {  
        return new Derived(\*this); // Gọi copy ctor  
    }  
};

// Sử dụng:  
Base\* pB \= new Derived();  
Base\* pClone \= pB-\>clone(); // pClone là một Derived mới

**2\. Virtual Non-member (Mô phỏng `operator<<`):**

C++  
class Base {  
public:  
    virtual \~Base() {}  
    // 1\. Hàm virtual print bên trong  
    virtual void print(std::ostream& os) const { os \<\< "Base"; }  
};

class Derived : public Base {  
public:  
    // 2\. Override hàm print  
    void print(std::ostream& os) const override { os \<\< "Derived"; }  
};

// 3\. Non-member operator\<\< (vỏ bọc) gọi virtual print  
std::ostream& operator\<\<(std::ostream& os, const Base& b) {  
    b.print(os); // Dispatch động (dynamic dispatch) xảy ra ở đây  
    return os;  
}

---

### **Item 26: Giới hạn số lượng đối tượng của một Class**

#### **1\. Tóm tắt cốt lõi (The "What")**

Sử dụng **Singleton Pattern** để giới hạn chỉ có *một* instance. Hoặc dùng **Object Pool Pattern** để giới hạn *N* instance.

#### **2\. Phân tích Lý do (The "Why")**

* **Why:** Trong Embedded, bạn chỉ có 1 phần cứng: 1 chip `SPI`, 1 `UART`, 1 `ScreenBuffer`. Bạn phải đảm bảo phần mềm chỉ tạo *một* đối tượng duy nhất để quản lý phần cứng đó, tránh xung đột.  
* **Cách làm (Singleton):**  
  1. Private constructor (cấm người khác `new`).  
  2. Xóa copy/move (cấm copy).  
  3. Cung cấp một hàm `static getInstance()` trả về một *reference* tới một *static object* bên trong hàm.

#### **3\. Ví dụ Code (Modern C++ Singleton \- "Meyers Singleton")**

C++  
class HardwareManager {  
public:  
    // 3\. Cung cấp hàm truy cập static  
    static HardwareManager& getInstance() {  
        // Biến static local được khởi tạo 1 lần duy nhất, thread-safe (từ C++11)  
        static HardwareManager instance;   
        return instance;  
    }

    // 2\. Xóa copy/move  
    HardwareManager(const HardwareManager&) \= delete;  
    HardwareManager& operator=(const HardwareManager&) \= delete;  
    HardwareManager(HardwareManager&&) \= delete;  
    HardwareManager& operator=(HardwareManager&&) \= delete;

    void doSomething() { /\* ... \*/ }

private:  
    // 1\. Private constructor  
    HardwareManager() { /\* ... khởi tạo hardware ... \*/ }  
    \~HardwareManager() { /\* ... \*/ }  
};

// Sử dụng:  
// HardwareManager hm; // LỖI BIÊN DỊCH\! Tốt\!  
HardwareManager::getInstance().doSomething();

---

### **Item 27: Yêu cầu hoặc Cấm tạo đối tượng trên Heap**

#### **1\. Tóm tắt cốt lõi (The "What")**

* **Cấm tạo trên Heap (Chỉ cho phép Stack):** Đặt `operator new` và `operator new[]` là `private` (hoặc `delete` trong C++11).  
* **Bắt buộc tạo trên Heap (Chỉ cho phép `new`):** Đặt Destructor là `private`. Cung cấp một hàm `destroy()` public để gọi `delete this`.

#### **2\. Phân tích Lý do (The "Why")**

* **Cấm Heap (Chỉ Stack):** Rất hữu ích cho các lớp RAII (Item 9\) như `std::lock_guard`. Bạn *muốn* `lock_guard` luôn nằm trên stack để nó tự động `unlock` khi ra khỏi scope. Nếu ai đó `new lock_guard()`, nó sẽ không bao giờ tự hủy \-\> Deadlock.  
* **Bắt buộc Heap (Chỉ `new`):** Hữu ích cho các đối tượng tự quản lý vòng đời (ví dụ: đối tượng tự hủy khi ref count về 0 \- Item 29).

#### **3\. Ví dụ Code**

**1\. Cấm tạo trên Heap (Chỉ cho phép Stack):**

C++  
class StackOnlyLock {  
public:  
    StackOnlyLock() { /\* ... lock ... \*/ }  
    \~StackOnlyLock() { /\* ... unlock ... \*/ }

private:  
    // Cấm 'new StackOnlyLock()'  
    void\* operator new(size\_t) \= delete;  
    void operator delete(void\*) \= delete;  
};

int main() {  
    StackOnlyLock myLock; // OK, trên stack  
    // StackOnlyLock\* pLock \= new StackOnlyLock(); // LỖI BIÊN DỊCH\! Tốt\!  
}

**2\. Bắt buộc tạo trên Heap (Chỉ cho phép `new`):**

C++  
class HeapOnlyObject {  
public:  
    HeapOnlyObject() {}  
      
    // 2\. Cung cấp hàm hủy public  
    void destroy() {  
        delete this; // An toàn vì nó chỉ được gọi khi object trên heap  
    }  
private:  
    // 1\. Cấm tạo trên stack bằng cách private dtor  
    \~HeapOnlyObject() { std::cout \<\< "Destroyed\\n"; }  
};

int main() {  
    // HeapOnlyObject obj; // LỖI BIÊN DỊCH\! Tốt\! (vì dtor là private)  
    HeapOnlyObject\* pObj \= new HeapOnlyObject(); // OK  
      
    // delete pObj; // LỖI BIÊN DỊCH\!  
    pObj-\>destroy(); // OK  
}

---

### **Item 28: Smart Pointers (Con trỏ thông minh)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Sách này mô tả cách tự viết `auto_ptr`. Đây là một class bọc con trỏ thô, overload `operator->` và `operator*`, và `delete` con trỏ trong destructor.

#### **2\. Phân tích Lý do (The "Why")**

* **Why:** Để tự động hóa việc quản lý tài nguyên (RAII \- Item 9\) và ngăn rò rỉ bộ nhớ.  
* **`auto_ptr` (Sách dùng):** Có một khuyết điểm chết người: Khi *copy* `auto_ptr`, nó *di chuyển* (move) quyền sở hữu.  
  * `auto_ptr<T> p1(new T);`  
  * `auto_ptr<T> p2 = p1;` // `p1` bây giờ là `null`, `p2` sở hữu con trỏ.  
  * Điều này cực kỳ nguy hiểm khi truyền `auto_ptr` vào hàm by-value.

#### **3\. Ví dụ Code (C++ HIỆN ĐẠI)**

**Tuyệt đối không dùng `auto_ptr`. Dùng `std::unique_ptr` và `std::shared_ptr`.**

**1\. `std::unique_ptr` (Sở hữu duy nhất, 0-cost abstraction):**

C++  
\#include \<memory\>

void takeOwnership(std::unique\_ptr\<MyClass\> p) {  
    p-\>doWork();  
} // p ra khỏi scope, MyClass bị delete

int main() {  
    // 1\. Tạo  
    std::unique\_ptr\<MyClass\> p1 \= std::make\_unique\<MyClass\>();  
      
    // 2\. Không thể copy  
    // std::unique\_ptr\<MyClass\> p2 \= p1; // LỖI BIÊN DỊCH\! Tốt\!  
      
    // 3\. Phải 'move' để chuyển giao quyền sở hữu  
    takeOwnership(std::move(p1));   
      
    // p1 bây giờ là nullptr  
    if (\!p1) {  
        std::cout \<\< "p1 is now null\\n";  
    }  
}

**2\. `std::shared_ptr` (Sở hữu chung, dùng đếm tham chiếu \- Item 29):**

C++  
\#include \<memory\>

int main() {  
    std::shared\_ptr\<MyClass\> p1 \= std::make\_shared\<MyClass\>();  
    std::cout \<\< "Use count: " \<\< p1.use\_count() \<\< "\\n"; // 1  
      
    {  
        std::shared\_ptr\<MyClass\> p2 \= p1; // Copy (tăng ref count)  
        std::cout \<\< "Use count: " \<\< p1.use\_count() \<\< "\\n"; // 2  
    } // p2 ra khỏi scope, (giảm ref count)  
      
    std::cout \<\< "Use count: " \<\< p1.use\_count() \<\< "\\n"; // 1  
} // p1 ra khỏi scope, ref count về 0, MyClass bị delete

---

### **Item 29: Reference Counting (Đếm tham chiếu)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Reference Counting là một kỹ thuật cho phép nhiều đối tượng "bên ngoài" (handle) cùng trỏ đến và chia sẻ một đối tượng dữ liệu "bên trong" (body). Một bộ đếm (reference count) theo dõi xem có bao nhiêu handle đang trỏ đến body. Khi bộ đếm về 0, body sẽ tự hủy.

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Tiết kiệm bộ nhớ và chi phí copy. Thay vì 10 object `String` mỗi cái giữ 1MB data "Hello", 10 object `String` chỉ cần 10 con trỏ (handle) cùng trỏ đến 1 block 1MB data (body) có ref count \= 10\.  
* **Copy-On-Write (COW):** Một tối ưu hóa của ref counting. Khi copy (ví dụ: `String s2 = s1;`), chỉ tăng ref count (rất rẻ). Chỉ khi nào một handle muốn *ghi* (write) (ví dụ: `s2[0] = 'x';`), nó mới tạo một bản sao (copy) của data cho riêng mình, giảm ref count của bản cũ, rồi mới ghi.

#### **3\. Bối cảnh & Liên kết**

* **`std::shared_ptr` (Item 28\) chính là một triển khai của Reference Counting.**  
* **Lưu ý C++ Hiện Đại:** Kỹ thuật COW (thường dùng cho `std::string`) đã không còn được ưa chuộng trong môi trường đa luồng (multi-threaded). Lý do là việc kiểm tra và tăng/giảm ref count đòi hỏi phải `atomic` (hoặc dùng mutex), làm cho việc *đọc* (read) cũng bị chậm đi. `std::string` của C++11 trở đi thường dùng **Short String Optimization (SSO)** thay thế.

---

### **Item 30: Proxy Classes (Lớp đại diện)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Sử dụng một class trung gian (Proxy) để "giả vờ" là object thật. Proxy đứng giữa client và object thật để kiểm soát truy cập, trì hoãn việc tạo object (Lazy Evaluation), hoặc phân biệt các ngữ cảnh sử dụng khác nhau.

#### **2\. Phân tích Lý do (The "Why")**

* **Ví dụ 1: 2D Array:** Để cho phép cú pháp `myArray[i][j]`, `operator[]` đầu tiên (của class `Array2D`) phải trả về một Proxy (class `Array1D`). Sau đó, `operator[]` thứ hai (của class `Array1D`) mới trả về giá trị thực.  
* **Ví dụ 2: Phân biệt Read/Write (Rất quan trọng):**  
  * `char c = s[0];` (Read)  
  * `s[0] = 'x';` (Write)  
  * Làm sao `operator[]` biết là Read hay Write?  
  * **Giải pháp:** `s[0]` trả về một `CharProxy` object.  
    * Nếu `CharProxy` được gán cho `char c`, `operator char()` (conversion) được gọi \-\> (Read).  
    * Nếu `CharProxy` bị gán (`= 'x'`), `operator=` được gọi \-\> (Write).  
  * Điều này cho phép `String` (Item 29\) chỉ thực hiện Copy-On-Write khi (Write) xảy ra.

\]

#### **3\. Ví dụ Code (Mô phỏng Proxy cho Read/Write)**

C++  
class String; // (Class chính, xem Item 29\)

// Proxy class  
class CharProxy {  
public:  
    CharProxy(String& s, int index) : str(s), idx(index) {}

    // 1\. Dùng cho (Write): s\[0\] \= 'x';  
    CharProxy& operator=(char c) {  
        str.performWrite(idx, c); // Báo cho String chính là "Write"  
        return \*this;  
    }

    // 2\. Dùng cho (Read): char c \= s\[0\];  
    operator char() const {  
        return str.performRead(idx); // Báo cho String chính là "Read"  
    }

private:  
    String& str;  
    int idx;  
};

class String {  
public:  
    // operator\[\] trả về Proxy  
    CharProxy operator\[\](int index) {  
        return CharProxy(\*this, index);  
    }  
      
    // ...  
private:  
    friend class CharProxy;  
    void performWrite(int idx, char c) { /\* ... logic COW ... \*/ }  
    char performRead(int idx) const { /\* ... logic read ... \*/ }  
};

---

### **Item 31: Tạo hàm ảo dựa trên nhiều hơn một đối tượng (Double Dispatch)**

#### **1\. Tóm tắt cốt lõi (The "What")**

C++ chỉ hỗ trợ **Single Dispatch** (hàm `virtual` được gọi dựa trên kiểu của `this`). Nếu bạn cần hành vi thay đổi dựa trên kiểu của *hai* đối tượng (ví dụ: `pObject1->collideWith(pObject2)`), bạn cần mô phỏng **Double Dispatch**.

#### **2\. Phân tích Lý do (The "Why")**

**Vấn đề:**  
C++  
class Asteroid; class SpaceShip;  
class GameObject {  
public:  
    // Single dispatch, chỉ biết kiểu của 'this'  
    virtual void collide(GameObject& other) \= 0;  
};

* Bên trong `Asteroid::collide(GameObject& other)`, làm sao biết `other` là `Asteroid` hay `SpaceShip`?  
* **Giải pháp 1 (RTTI \- Tệ):** Dùng `dynamic_cast` (Item 2\) để kiểm tra `if (dynamic_cast<SpaceShip*>(&other))`... Rất chậm và vi phạm Open/Closed Principle (phải sửa code cũ khi thêm class mới).  
* **Giải pháp 2 (Double Dispatch \- Tốt):** Dùng 2 lần gọi `virtual`. (Đây là **Visitor Pattern**).

#### **3\. Ví dụ Code (Double Dispatch / Visitor Pattern)**

C++  
// \--- Forward declarations \---  
class SpaceShip;  
class Asteroid;

// \--- Visitor Interface \---  
class Visitor {  
public:  
    virtual void visit(SpaceShip& s) \= 0;  
    virtual void visit(Asteroid& a) \= 0;  
};

// \--- Visitable Elements \---  
class GameObject {  
public:  
    virtual void accept(Visitor& v) \= 0;  
};

class SpaceShip : public GameObject {  
public:  
    void accept(Visitor& v) override { v.visit(\*this); }  
    // ...  
};

class Asteroid : public GameObject {  
public:  
    void accept(Visitor& v) override { v.visit(\*this); }  
    // ...  
};

// \--- Logic xử lý va chạm \---  
// (Triển khai Visitor để xử lý va chạm của Asteroid)  
class AsteroidCollisionVisitor : public Visitor {  
public:  
    // Đã biết 1 vế là Asteroid (this)  
    // Giờ dispatch vế kia:  
      
    // 1\. Asteroid va chạm SpaceShip  
    void visit(SpaceShip& s) override {  
        std::cout \<\< "Asteroid collided with SpaceShip\!\\n";  
    }  
      
    // 2\. Asteroid va chạm Asteroid  
    void visit(Asteroid& a) override {  
        std::cout \<\< "Asteroid collided with Asteroid\!\\n";  
    }  
};

// \--- Cách gọi \---  
int main() {  
    Asteroid a1;  
    SpaceShip s1;  
      
    GameObject\* p1 \= \&a1;  
    GameObject\* p2 \= \&s1;  
      
    // Xử lý va chạm  
    AsteroidCollisionVisitor visitor;  
    p2-\>accept(visitor); // p2 (s1) gọi visitor.visit(s1)  
}

*(Lưu ý: Triển khai trong sách hơi khác, dùng 2 virtual call trực tiếp, nhưng Visitor Pattern là cách chuẩn hóa kỹ thuật này).*

---

## **CHƯƠNG 6: LINH TINH (MISCELLANY)**

### **Item 32: Lập trình trong thì tương lai (Program in the future tense)**

#### **1\. Tóm tắt cốt lõi (The "What")**

Viết code với giả định rằng nó sẽ bị thay đổi, mở rộng, và bảo trì bởi người khác (hoặc chính bạn trong tương lai khi đã quên). Đừng hard-code, đừng đưa ra các quyết định thiết kế thiển cận chỉ vì "bây giờ chưa cần".

#### **2\. Phân tích Lý do (The "Why")**

* **Ví dụ:**  
  * Nếu một class có thể sẽ được kế thừa, hãy thêm `virtual destructor` *ngay bây giờ*, ngay cả khi nó chưa có class con nào.  
  * Đừng dùng `if (type == 1)`... Hãy dùng `enum class Type` để dễ dàng thêm `type == 3` trong tương lai.  
  * **Trong Embedded:** Viết **Hardware Abstraction Layer (HAL)**. Đừng gọi thẳng `LPC_GPIO1->PIN = 0x1;`. Hãy viết `led.TurnOn()`. Ngày mai khi đổi chip (ví dụ: sang STM32), bạn chỉ cần sửa `led` class, không phải sửa logic nghiệp vụ.

---

### **Item 33: Biến các non-leaf classes thành abstract**

#### **1\. Tóm tắt cốt lõi (The "What")**

Trong một cây kế thừa, chỉ các class lá (leaf \- class cuối cùng, không ai kế thừa nó nữa) mới nên được khởi tạo (concrete). Các class trung gian (non-leaf) nên là Abstract (chứa pure virtual function).

#### **2\. Phân tích Lý do (The "Why")**

* **Tại sao:** Ngăn chặn **Slicing Problem** và **Partial Assignment**.

**Vấn đề (Partial Assignment):**  
C++  
class Animal { ... }; // Concrete  
class Dog : public Animal { ... }; // Concrete

Dog d1, d2;  
Animal\* pA1 \= \&d1;  
Animal\* pA2 \= \&d2;

\*pA1 \= \*pA2; // CHỈ GỌI Animal::operator=  
             // Phần 'Dog' của d1 không bị ảnh hưởng.  
             // d1 giờ là một "quái vật" nửa d1 cũ, nửa d2.

* 

**Giải pháp:** Biến `Animal` thành abstract.  
C++  
class Animal { // Abstract  
public:  
    virtual void speak() \= 0;  
};   
// Animal a; // LỖI BIÊN DỊCH\! Tốt\!  
// \*pA1 \= \*pA2; // Sẽ lỗi nếu Animal::operator= bị xóa hoặc protected

*   
* **Kết luận:** Nếu class `A` vừa có thể được tạo (concrete) vừa có thể bị kế thừa (non-leaf), nó sẽ gây ra rắc rối. Hãy tách nó ra: `AbstractAnimal` (interface) và `GenericAnimal` (concrete leaf) nếu cần.

---

### **Item 34: Hiểu cách kết hợp C++ và C**

#### **1\. Tóm tắt cốt lõi (The "What")**

Để code C++ gọi hàm C (hoặc ngược lại) và link (liên kết) thành công, bạn phải dùng `extern "C"` để tắt **Name Mangling** của C++.

#### **2\. Phân tích Lý do (The "Why")**

* **Name Mangling:** C++ hỗ trợ overloading (nhiều hàm cùng tên khác tham số). Để Linker phân biệt, compiler "băm" (mangle) tên hàm thành một chuỗi duy nhất. `void foo(int)` \-\> `_Z3fooi`, `void foo(float)` \-\> `_Z3foof`.  
* **Vấn đề:** Code C không làm vậy. `void foo(int)` \-\> `_foo`.  
* **Giải pháp:** `extern "C"` báo cho compiler C++: "Hãy dùng quy ước gọi (calling convention) và đặt tên (mangling) của C cho hàm này".

#### **3\. Ví dụ Code (Header file .h dùng chung)**

**File `my_c_lib.h` (dùng cho cả C và C++):**

C++  
// Bẫy 'ifdef' chuẩn để header này an toàn  
\#ifdef \_\_cplusplus  
extern "C" {  
\#endif

// \--- Code C thuần túy \---  
struct My\_C\_Struct {  
    int x;  
};

void my\_c\_function(int a);  
// \--- Hết code C \---

\#ifdef \_\_cplusplus  
} // Kết thúc extern "C"  
\#endif

**File `main.cpp` (Code C++):**

C++  
\#include "my\_c\_lib.h" // Include an toàn

int main() {  
    my\_c\_function(10); // C++ gọi hàm C  
    My\_C\_Struct s;  
    s.x \= 5;  
    return 0;  
}

#### **4\. Bối cảnh, Ngoại lệ & Liên kết**

* **Lưu ý:**  
  1. Chỉ truyền dữ liệu POD (Plain Old Data) (struct C, int, char\*) qua ranh giới C/C++. Đừng truyền `std::string` hay `std::vector`.  
  2. Hàm C không thể `throw` exception, phải xử lý lỗi qua mã trả về.

---

### **Item 35: Làm quen với chuẩn ngôn ngữ (Standard)**

#### **1\. Tóm tắt cốt lõi (The "What")**

C++ là một ngôn ngữ luôn phát triển (C++98, C++03, C++11, C++14, C++17, C++20, C++23...). Những gì đúng ở năm 1996 (khi sách ra đời) có thể đã thay đổi. Hãy luôn cập nhật kiến thức.

#### **2\. Phân tích (Cập nhật cho năm 2024\)**

* **STL (Standard Template Library):** Đã trở thành tiêu chuẩn không thể thiếu. Nắm vững `vector`, `map`, `string`, `algorithm`.  
* **C++11 (Thay đổi lớn nhất):**  
  * `auto`: Tự động suy diễn kiểu.  
  * `nullptr`: Thay thế `NULL`.  
  * Smart Pointers: `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr` (Item 28, 29).  
  * Move Semantics & Rvalue References (`&&`): Tối ưu hóa việc "di chuyển" thay vì "sao chép" tài nguyên.  
  * `noexcept`: (Item 14).  
  * Lambda expressions: `[](){ ... }`.  
  * `constexpr`: Tính toán lúc biên dịch.  
* **C++17:** `std::optional`, `std::variant`, `std::string_view`, `if constexpr`.  
* **Kết luận:** Các nguyên tắc *thiết kế* trong sách (RAII, Encapsulation, Interface) là vĩnh cửu. Các *kỹ thuật* (implementation) cụ thể (như `auto_ptr`) đã được thay thế bằng các giải pháp tốt hơn trong thư viện chuẩn hiện đại.

Tệp \`More\_Effective\_Cpp\_Analysis.md\` ở trên chứa toàn bộ 35 Item đã được phân tích chi tiết và cập nhật.

Bạn có thể tải về, xem trước (Preview), hoặc sao chép nội dung để sử dụng. Chúc bạn học tốt\!

