# **Tóm tắt 55 Quy tắc từ "Effective C++" (Third Edition)**

Đây là bản tóm tắt chi tiết 55 quy tắc lập trình C++ hiệu quả từ cuốn sách kinh điển của Scott Meyers. Mỗi quy tắc đều được giải thích rõ ràng về *Vấn đề* (cạm bẫy khi làm sai) và *Giải pháp* (cách làm đúng và lý do tại sao).

## **Mục Lục**

* [Chương 1: Làm quen với C++](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-1-l%C3%A0m-quen-v%E1%BB%9Bi-c)  
* [Chương 2: Hàm khởi tạo, Hàm hủy, và Toán tử gán](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-2-h%C3%A0m-kh%E1%BB%9Fi-t%E1%BA%A1o-h%C3%A0m-h%E1%BB%A7y-v%C3%A0-to%C3%A1n-t%E1%BB%AD-g%C3%A1n)  
* [Chương 3: Quản lý Tài nguyên](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-3-qu%E1%BA%A3n-l%C3%BD-t%C3%A0i-nguy%C3%AAn)  
* [Chương 4: Thiết kế và Khai báo](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-4-thi%E1%BA%BFt-k%E1%BA%BF-v%C3%A0-khai-b%C3%A1o)  
* [Chương 5: Cài đặt](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-5-c%C3%A0i-%C4%91%E1%BA%B7t)  
* [Chương 6: Kế thừa và Thiết kế Hướng đối tượng](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-6-k%E1%BA%BF-th%E1%BB%ABa-v%C3%A0-thi%E1%BA%BFt-k%E1%BA%BF-h%C6%B0%E1%BB%9Bng-%C4%91%E1%BB%91i-t%C6%B0%E1%BB%A3ng)  
* [Chương 7: Template và Lập trình Generic](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-7-template-v%C3%A0-l%E1%BA%ADp-tr%C3%ACnh-generic)  
* [Chương 8: Tùy chỉnh new và delete](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-8-t%C3%B9y-ch%E1%BB%89nh-new-v%C3%A0-delete)  
* [Chương 9: Hỗn hợp](https://www.google.com/search?q=%23ch%C6%B0%C6%A1ng-9-h%E1%BB%97n-h%E1%BB%A3p)

## **Chương 1: Làm quen với C++**

### **Item 1: Coi C++ như một liên bang các ngôn ngữ (View C++ as a federation of languages)**

**Vấn đề:** C++ không phải là một ngôn ngữ đơn lẻ, mà là sự kết hợp của 4 "ngôn ngữ con": C, C++ Hướng đối tượng (OO-C++), C++ Template (Template-C++), và Thư viện Template Chuẩn (STL) \[cite: 11-12\]. Việc áp dụng một quy tắc từ "bang" này sang "bang" khác có thể dẫn đến code không hiệu quả hoặc mâu thuẫn.

**Giải pháp:** Hãy nhận biết bạn đang ở "ngôn ngữ con" nào. Các quy tắc hiệu quả sẽ thay đổi.

* **Giải thích (Tại sao?):** Một quy tắc tốt ở "bang" này có thể tệ ở "bang" khác. Ví dụ: pass-by-value là tốt nhất cho các kiểu int (C) và iterator (STL), nhưng pass-by-reference-to-const lại tốt nhất cho các class (OO-C++) (xem Item 20). Hiểu rõ liên bang này giúp bạn giải quyết các mâu thuẫn rõ ràng trong các quy tắc.

**Ví dụ:** Quy tắc truyền tham số (pass-by-value vs. pass-by-reference).

// TRƯỚC (chưa tốt \- Áp dụng một quy tắc cho tất cả):  
// "Luôn truyền bằng tham chiếu vì nó nhanh"  
void processInt(const int& x); // Lãng phí, pass-by-value cho int nhanh hơn  
void processClass(const MyClass& c); // OK  
void processIter(const std::vector\<int\>::iterator& iter); // Sai quy ước STL

// SAU (tốt hơn \- Áp dụng quy tắc của từng "bang"):  
// 1\. Dùng quy tắc của "bang C": Pass-by-value cho các kiểu tích hợp  
void goodForC(int x);  
// 2\. Dùng quy tắc của "bang OO-C++": Pass-by-ref-to-const cho các class  
void goodForOO(const MyClass& c); // Xem Item 20  
// 3\. Dùng quy tắc của "bang STL": Pass-by-value cho iterators và function objects  
void goodForSTL(std::vector\<int\>::iterator iter);

### **Item 2: Ưu tiên const, enum, và inline hơn là \#define (Prefer consts, enums, and inlines to \#defines)**

**Vấn đề:** Bộ tiền xử lý (\#define) chỉ là công cụ thay thế văn bản.

* Nó không nằm trong bảng ký hiệu (symbol table) \[cite: 13\], gây khó khăn khi gỡ lỗi (bạn chỉ thấy con số 1.653 thay vì ASPECT\_RATIO).  
* Nó không tôn trọng phạm vi (scope) \[cite: 15\], phá vỡ tính đóng gói.  
* Macro giống hàm cực kỳ nguy hiểm và có thể dẫn đến hành vi không mong muốn (ví dụ: CALL\_WITH\_MAX(++a, b) có thể tăng a hai lần).

**Giải pháp:** Sử dụng các công cụ của trình biên dịch.

* **Giải thích (Tại sao?):** Trình biên dịch hiểu rõ về kiểu và phạm vi. const là một biến có kiểu, nằm trong bảng ký hiệu và tôn trọng scope. inline function (Item 30\) cung cấp hiệu năng của macro mà không mất đi tính an toàn (kiểm tra kiểu, đánh giá tham số đúng một lần).

**Ví dụ 1: Hằng số**

// TRƯỚC (chưa tốt):  
\#define PI 3.14159  
// SAU (tốt hơn):  
const double PI \= 3.14159; // Có kiểu, có scope, nằm trong symbol table

**Ví dụ 2: Macro giống hàm**

// TRƯỚC (nguy hiểm):  
\#define CALL\_WITH\_MAX(a, b) f((a) \> (b) ? (a) : (b))  
int a \= 5;  
CALL\_WITH\_MAX(++a, 0); // Lỗi: 'a' bị tăng HAI LẦN\! \[cite: 16\]

// SAU (an toàn):  
template\<typename T\>  
inline void callWithMax(const T& a, const T& b) {  
    f(a \> b ? a : b); // 'a' chỉ được đánh giá một lần  
}

### **Item 3: Sử dụng const bất cứ khi nào có thể (Use const whenever possible)**

**Vấn đề:** Bạn muốn ngăn chặn việc vô tình thay đổi các giá trị không nên thay đổi và làm cho interface rõ ràng hơn.

**Giải pháp:** Dùng const như một cam kết về ngữ nghĩa (semantic constraint) rằng một giá trị sẽ bất biến.

* **Giải thích (Tại sao?):** const cho phép trình biên dịch bắt lỗi giúp bạn (ví dụ: gán nhầm if (a\*b \= c)). Quan trọng nhất, const trên **hàm thành viên** (void foo() const;) cho phép hàm đó được gọi trên các đối tượng const, điều này là then chốt để pass-by-reference-to-const (Item 20\) trở nên hữu dụng.

**Ví dụ:** Nạp chồng operator\[\] để cho phép const (chỉ đọc) và non-const (đọc/ghi).

class TextBlock {  
private:  
    std::string text;  
public:  
    // SAU (tốt hơn \- Nạp chồng const/non-const):  
      
    // Phiên bản cho các đối tượng non-const (cho phép đọc/ghi)  
    char& operator\[\](std::size\_t position) {  
        return text\[position\];  
    }  
      
    // Phiên bản cho các đối tượng const (chỉ cho phép đọc)  
    const char& operator\[\](std::size\_t position) const {   
        return text\[position\];  
    }  
};

TextBlock tb("Hello");  
tb\[0\] \= 'x'; // OK: gọi phiên bản non-const

const TextBlock ctb("World");  
std::cout \<\< ctb\[0\]; // OK: gọi phiên bản const \[cite: 20\]  
// ctb\[0\] \= 'x'; // LỖI BIÊN DỊCH\! (Rất tốt)

* **Logical Constness:** Nếu bạn cần thay đổi một biến (ví dụ: cache) bên trong hàm const, hãy khai báo biến đó là mutable \[cite: 22\].

### **Item 4: Đảm bảo đối tượng được khởi tạo trước khi sử dụng (Make sure that objects are initialized before they're used)**

**Vấn đề:** Đọc một biến chưa được khởi tạo là hành vi không xác định (undefined behavior).

**Giải pháp:** Luôn sử dụng **danh sách khởi tạo thành viên (member initialization list)** trong hàm khởi tạo.

* **Giải thích (Tại sao?):**  
  1. **Hiệu năng:** Gán trong thân hàm (ví dụ: theName \= name;) sẽ tốn 1 lần gọi default constructor \+ 1 lần gọi copy assignment. Dùng danh sách khởi tạo (: theName(name)) chỉ tốn 1 lần gọi copy constructor \[cite: 28\].  
  2. **Bắt buộc:** Các thành viên là const hoặc tham chiếu (references) *buộc phải* được khởi tạo trong danh sách này.

**Ví dụ 1: Hiệu năng**

class ABEntry {  
private:  
    std::string theName;  
public:  
    // TRƯỚC (chưa tốt \- Kém hiệu quả):  
    ABEntry(const std::string& name) {  
        theName \= name; // Gọi default ctor CỦA theName, SAU ĐÓ gọi operator=  
    }  
      
    // SAU (tốt hơn \- Hiệu quả):  
    ABEntry(const std::string& name)  
        : theName(name) // Gọi TRỰC TIẾP copy ctor CỦA theName \[cite: 28\]  
    { }   
};

**Ví dụ 2: Thảm họa Thứ tự Khởi tạo Static**

* **Vấn đề:** Thứ tự khởi tạo của các biến static toàn cục ở các file .cpp khác nhau là không xác định. Nếu A dùng B mà B chưa được khởi tạo \-\> CRASH.  
* **Giải pháp (Dùng "Local Static"):**

// TRƯỚC (nguy hiểm):  
// File A.cpp  
FileSystem tfs; // Biến toàn cục

// SAU (an toàn \- Dùng "Local Static" qua hàm):  
// FileSystem.h  
FileSystem& tfs(); // Cung cấp một hàm  
// FileSystem.cpp  
FileSystem& tfs() {  
    // Được khởi tạo an toàn 100% khi gọi lần đầu \[cite: 31-32\]  
    static FileSystem fs;   
    return fs;  
}  
// Client code:  
Directory tempDir(tfs()); // Luôn an toàn

## **Chương 2: Hàm khởi tạo, Hàm hủy, và Toán tử gán**

### **Item 5: Biết những hàm nào C++ âm thầm viết và gọi (Know what functions C++ silently writes and calls)**

**Vấn đề:** Nếu bạn viết class Empty {};, nó không hề rỗng.

**Giải pháp:** Trình biên dịch sẽ tự động khai báo 4 hàm thành viên public và inline cho bạn nếu cần:

1. Hàm khởi tạo mặc định (Default Constructor)  
2. Hàm khởi tạo sao chép (Copy Constructor)  
3. Toán tử gán sao chép (Copy Assignment Operator)  
4. Hàm hủy (Destructor) \[cite: 34-35\]  
* **Giải thích (Tại sao?):** Trình biên dịch tạo ra chúng để thực hiện các thao tác cơ bản (như sao chép từng thành viên, gọi hàm hủy của thành viên) \[cite: 35-36\].  
* **Cảnh báo:** Trình biên dịch sẽ *không* tạo Hàm khởi tạo mặc định nếu bạn đã tự định nghĩa *bất kỳ* hàm khởi tạo nào khác. Trình biên dịch sẽ *từ chối* tạo Toán tử gán sao chép nếu class chứa thành viên const hoặc tham chiếu.

### **Item 6: Cấm một cách tường minh các hàm do trình biên dịch tạo ra mà bạn không muốn (Explicitly disallow the use of compiler-generated functions you do not want)**

**Vấn đề:** Bạn muốn tạo một class không thể sao chép (non-copyable), nhưng Item 5 nói rằng trình biên dịch sẽ tự tạo các hàm sao chép public cho bạn.

**Giải pháp:** Để cấm sao chép, hãy **khai báo hàm khởi tạo sao chép và toán tử gán sao chép là private** và **không định nghĩa chúng**.

* **Giải thích (Tại sao?):**  
  * private: Ngăn client bên ngoài gọi chúng (gây lỗi *compile-time*) \[cite: 38\].  
  * Không định nghĩa: Ngăn code nội bộ (member/friend) gọi chúng (gây lỗi *link-time*) \[cite: 38\].

**Ví dụ (Dùng class cơ sở Uncopyable là tốt nhất):**

class Uncopyable {  
protected: // Cho phép class con gọi  
    Uncopyable() {}  
    \~Uncopyable() {}  
private:  
    Uncopyable(const Uncopyable&); // Cấm sao chép  
    Uncopyable& operator=(const Uncopyable&);  
};

// Chỉ cần kế thừa private từ Uncopyable  
class HomeForSale : private Uncopyable {  
    // ... class của bạn giờ đây không thể sao chép  
};  
// HomeForSale h1;  
// HomeForSale h2(h1); // LỖI BIÊN DỊCH\!

### **Item 7: Khai báo hàm hủy là virtual trong các class cơ sở đa hình (Declare destructors virtual in polymorphic base classes)**

**Vấn đề:** delete một đối tượng con (Derived) thông qua một con trỏ cha (Base) sẽ gây rò rỉ tài nguyên nếu hàm hủy của Base không phải là virtual.

* **Giải thích (Tại sao?):** delete p; (với p là Base\*) sẽ chỉ gọi \~Base(). Nó *không biết* về \~Derived(). Điều này khiến toàn bộ tài nguyên của Derived bị rò rỉ \[cite: 41\].

**Giải pháp:** Luôn khai báo hàm hủy là virtual trong bất kỳ class nào được thiết kế để làm class cơ sở đa hình (tức là, class có ít nhất một hàm virtual khác).

* **Giải thích (Tại sao?):** virtual \~Base() đảm bảo rằng khi delete p;, trình biên dịch sẽ tra cứu động (dynamic dispatch), gọi \~Derived() *trước*, sau đó tự động gọi \~Base(), dọn dẹp toàn bộ đối tượng.

**Ví dụ:**

class TimeKeeper {  
public:  
    // SAU (an toàn):  
    virtual \~TimeKeeper() {} // \[cite: 41\]  
};

class AtomicClock : public TimeKeeper {  
public:  
    \~AtomicClock() { /\* ... giải phóng tài nguyên của AtomicClock ... \*/ }  
};

TimeKeeper\* ptk \= new AtomicClock();  
delete ptk; // OK. Gọi \~AtomicClock(), sau đó gọi \~TimeKeeper().

### **Item 8: Ngăn ngoại lệ thoát ra khỏi hàm hủy (Prevent exceptions from leaving destructors)**

**Vấn đề:** Nếu một hàm hủy ném ngoại lệ trong khi một ngoại lệ khác đang được xử lý (stack unwinding), chương trình sẽ bị std::terminate (CRASH).

* **Giải thích (Tại sao?):** C++ không thể xử lý hai ngoại lệ cùng lúc. Nếu Ngoại lệ A đang xảy ra, C++ gọi các hàm hủy. Nếu một hàm hủy ném Ngoại lệ B, C++ sẽ "bỏ cuộc" và crash \[cite: 44-45\].

**Giải pháp:** Hàm hủy của bạn **không bao giờ** được phép để ngoại lệ thoát ra. Nếu bạn phải gọi một hàm có thể ném ngoại lệ (như db.close()), hãy bọc nó trong try...catch và "nuốt" ngoại lệ đó (hoặc abort).

**Ví dụ:**

class DBConn {  
private:  
    DBConnection db;  
public:  
    // SAU (an toàn):  
    \~DBConn() {  
        try {  
            db.close();  
        } catch (...) {  
            std::cerr \<\< "Lỗi khi đóng database, nuốt ngoại lệ.";  
            // Không ném lại (không re-throw)  
            // Hoặc có thể gọi std::abort() nếu đây là lỗi nghiêm trọng \[cite: 46\]  
        }  
    }  
      
    // TỐT HƠN NỮA: Cung cấp hàm close() riêng  
    void close() {  
        db.close();  
    }  
};

### **Item 9: Đừng bao giờ gọi hàm virtual trong hàm khởi tạo hoặc hàm hủy (Never call virtual functions during construction or destruction)**

**Vấn đề:** Khi hàm khởi tạo của Base đang chạy, đối tượng *chưa* phải là kiểu Derived. Bất kỳ lệnh gọi hàm virtual nào cũng sẽ chỉ gọi phiên bản Base \[cite: 49\].

* **Giải thích (Tại sao?):** Hàm khởi tạo Base chạy *trước* hàm khởi tạo Derived. Tại thời điểm Base() chạy, các thành viên dữ liệu của Derived còn chưa được khởi tạo. Để đảm bảo an toàn, C++ coi đối tượng đó là kiểu Base trong suốt quá trình Base() chạy. Điều tương tự (ngược lại) xảy ra trong hàm hủy \[cite: 49-50\].

**Ví dụ:**

class Transaction {  
public:  
    Transaction() {  
        // TRƯỚC (sai):  
        // logTransaction(); // Sẽ gọi Transaction::logTransaction,  
    }  
    virtual void logTransaction() const \= 0;  
};

class BuyTransaction : public Transaction {  
public:  
    virtual void logTransaction() const { /\* ... \*/ }  
};

// Lỗi logic: Khi tạo BuyTransaction, nó sẽ gọi Transaction(),  
// hàm này sẽ cố gọi hàm thuần ảo Transaction::logTransaction() \-\> CRASH.

// SAU (tốt hơn):  
class Transaction {  
public:  
    explicit Transaction(const std::string& logInfo) {  
        log(logInfo); // Gọi hàm non-virtual  
    }  
private:  
    void log(const std::string& logInfo);  
};

class BuyTransaction : public Transaction {  
public:  
    BuyTransaction( /\* params \*/ )  
        : Transaction(createLogString( /\* params \*/ )) // Class con tạo log và GỬI LÊN  
    { ... }  
private:  
    static std::string createLogString( /\* params \*/ );  
};

### **Item 10: Hãy để toán tử gán trả về một tham chiếu đến \*this (Have assignment operators return a reference to \*this)**

**Vấn đề:** Để hỗ trợ "gán theo chuỗi" (chaining): x \= y \= z;.

**Giải pháp:** Tuân thủ quy ước chuẩn: trả về \*this bằng tham chiếu.

* **Giải thích (Tại sao?):** Phép gán x \= y \= z được phân tích là x \= (y \= z). Phép toán (y \= z) phải trả về y (đã được cập nhật) để gán tiếp cho x. Bằng cách return \*this;, bạn đang trả về chính đối tượng bên trái (y), cho phép gán theo chuỗi hoạt động \[cite: 52-53\].

**Ví dụ:**

class Widget {  
public:  
    // SAU (tốt):  
    Widget& operator=(const Widget& rhs) {  
        // ...  
        return \*this; //  
    }  
};

### **Item 11: Xử lý việc tự gán trong operator= (Handle assignment to self in operator=)**

**Vấn đề:** w \= w; (tự gán) có thể gây thảm họa nếu bạn delete tài nguyên trước khi sao chép \[cite: 53-54\].

* **Giải thích (Tại sao?):** Một cài đặt ngây thơ (delete pb; pb \= new Bitmap(\*rhs.pb);) sẽ delete tài nguyên của \*this. Nếu \*this và rhs là một, rhs.pb cũng bị delete. Sau đó, bạn cố gắng sao chép từ một con trỏ đã bị delete \-\> CRASH \[cite: 54-55\].

**Giải pháp:** Đảm bảo operator= an toàn khi tự gán và an toàn với ngoại lệ.

**Ví dụ:**

class Widget {  
    Bitmap\* pb;  
public:  
    // TRƯỚC (nguy hiểm):  
    // Widget& operator=(const Widget& rhs) {  
    //     delete pb; // Nếu w \= w, pb của rhs cũng bị delete  
    //     pb \= new Bitmap(\*rhs.pb); // Lỗi\!  
    //     return \*this;  
    // }

    // SAU (An toàn với ngoại lệ VÀ tự gán):  
    Widget& operator=(const Widget& rhs) {  
        Bitmap \*pOrig \= pb; // 1\. Lưu con trỏ cũ  
          
        // 2\. Tạo bản sao. Nếu new thất bại, đối tượng cũ vẫn nguyên vẹn  
        pb \= new Bitmap(\*rhs.pb);   
          
        // 3\. Chỉ xóa con trỏ cũ sau khi mọi thứ thành công  
        delete pOrig;   
          
        return \*this;  
    }  
};

* **Cách tốt nhất:** Dùng "copy-and-swap" (Item 29\) \[cite: 56\].

### **Item 12: Sao chép tất cả các thành phần của một đối tượng (Copy all parts of an object)**

**Vấn đề:** Khi tự viết hàm sao chép (copy ctor/assignment), bạn có thể quên sao chép một thành viên mới, hoặc quên gọi hàm sao chép của class cha.

* **Giải thích (Tại sao?):** Trình biên dịch *tin tưởng* bạn. Nếu bạn thêm một thành viên lastTransaction vào Customer, trình biên dịch *sẽ không* cảnh báo rằng Customer::operator= của bạn đã quên sao chép nó. Nếu bạn quên gọi hàm Customer::operator= của cha, phần Customer sẽ không được gán \[cite: 58-59\].

**Giải pháp:** Luôn sao chép *tất cả* thành viên và *tất cả* class cha.

**Ví dụ:**

class PriorityCustomer : public Customer {  
private:  
    int priority;  
public:  
    // TRƯỚC (chưa tốt \- Quên class cha):  
    // PriorityCustomer& operator=(const PriorityCustomer& rhs) {  
    //     priority \= rhs.priority; // Quên gán 'name' từ Customer\!  
    //     return \*this;  
    // }  
      
    // SAU (tốt):  
    PriorityCustomer& operator=(const PriorityCustomer& rhs) {  
        Customer::operator=(rhs); // 1\. GỌI TOÁN TỬ GÁN CỦA CHA \[cite: 59\]  
        priority \= rhs.priority; // 2\. Gán thành viên  
        return \*this;  
    }  
};

## **Chương 3: Quản lý Tài nguyên**

### **Item 13: Sử dụng đối tượng để quản lý tài nguyên (Use objects to manage resources)**

**Vấn đề:** Rò rỉ tài nguyên (bộ nhớ, file, khóa...) khi hàm return sớm hoặc ném ngoại lệ \[cite: 62\].

* **Giải thích (Tại sao?):** Quản lý thủ công (ví dụ: new ở đầu, delete ở cuối) sẽ thất bại nếu một ngoại lệ được ném ra ở giữa. Lệnh delete sẽ bị bỏ qua.

**Giải pháp:** Dùng **RAII (Resource Acquisition Is Initialization)**. Bọc tài nguyên vào một đối tượng. Hàm khởi tạo (Constructor) *lấy* tài nguyên, hàm hủy (Destructor) *giải phóng* tài nguyên.

* **Giải thích (Tại sao?):** C++ *đảm bảo* hàm hủy luôn được gọi khi đối tượng ra khỏi phạm vi, bất kể là do kết thúc hàm, return, hay throw \[cite: 62-63\].

**Ví dụ:**

// TRƯỚC (nguy hiểm):  
void f1() {  
    Investment\* pInv \= createInvestment(); // Lấy tài nguyên  
    if (...) throw std::exception(); // RÒ RỈ pInv\!  
    delete pInv;   
}

// SAU (an toàn \- Dùng RAII Smart Pointer):  
\#include \<memory\> // std::auto\_ptr hoặc std::unique\_ptr (C++11)

void f2() {  
    // 1\. Lấy tài nguyên VÀ giao ngay cho đối tượng quản lý  
    std::auto\_ptr\<Investment\> pInv(createInvestment());   
    if (...) throw std::exception(); // AN TOÀN\!  
} // 2\. Hàm hủy của auto\_ptr TỰ ĐỘNG được gọi ở đây  
  // và nó sẽ tự động \`delete\` con trỏ. \[cite: 63\]

### **Item 14: Suy nghĩ cẩn thận về hành vi sao chép trong các class quản lý tài nguyên (Think carefully about copying behavior in resource-managing classes)**

**Vấn đề:** Khi một đối tượng RAII (ví dụ Lock) bị sao chép, điều gì xảy ra với tài nguyên (ví dụ Mutex)?

* **Giải thích (Tại sao?):** Sao chép nông (Shallow Copy) mặc định sẽ khiến hai đối tượng trỏ đến cùng một tài nguyên. Khi đối tượng đầu tiên bị hủy, nó giải phóng tài nguyên. Khi đối tượng thứ hai bị hủy, nó cố gắng giải phóng tài nguyên *một lần nữa* \-\> thảm họa.

**Giải pháp:** Bạn phải chọn một trong 4 logic sở hữu sau:

1. **Cấm Sao chép:** (Phổ biến nhất). Dùng Item 6 \[cite: 67\].  
2. **Đếm tham chiếu (Reference Counting):** Dùng std::tr1::shared\_ptr.  
3. **Sao chép sâu (Deep Copy):** Sao chép chính tài nguyên đó.  
4. **Chuyển giao quyền sở hữu:** (Ví dụ: std::auto\_ptr) \[cite: 68\].

**Ví dụ (Lựa chọn 2 \- Đếm tham chiếu với Deleter tùy chỉnh):**

class Lock {  
public:  
    // Dùng shared\_ptr với "deleter" tùy chỉnh là hàm unlock()  
    explicit Lock(Mutex \*pm)  
        : mutexPtr(pm, unlock) { // \[cite: 68\]  
        lock(mutexPtr.get());   
    }  
    // Không cần hàm hủy\! shared\_ptr sẽ tự động gọi 'unlock' khi bộ đếm về 0  
private:  
    std::tr1::shared\_ptr\<Mutex\> mutexPtr;  
};

### **Item 15: Cung cấp quyền truy cập vào tài nguyên thô trong các class quản lý tài nguyên (Provide access to raw resources in resource-managing classes)**

**Vấn đề:** Đã bọc tài nguyên vào RAII, nhưng cần làm việc với API C cũ chỉ chấp nhận con trỏ/handle thô \[cite: 69\].

**Giải pháp:** Cung cấp một cách để lấy tài nguyên thô.

* **Giải thích (Tại sao?):** Nếu không có cách truy cập này, lớp RAII của bạn sẽ không thể dùng được với các thư viện khác. Mục đích của RAII là *quản lý thời gian sống*, không nhất thiết là *che giấu* tài nguyên \[cite: 72\].

**Ví dụ (Tường minh vs. Ngầm định):**

// Cách 1: Chuyển đổi tường minh (Explicit) \- AN TOÀN HƠN  
std::tr1::shared\_ptr\<Investment\> pInv(createInvestment());  
int days \= daysHeld(pInv.get()); // \[cite: 70\]

// Cách 2: Chuyển đổi ngầm định (Implicit) \- TIỆN LỢI HƠN  
class Font {  
public:  
    operator FontHandle() const { return f; } // \[cite: 71\]  
private:  
    FontHandle f;  
};  
Font f(getFont());  
changeFontSize(f, 10); // Tự động chuyển đổi f thành FontHandle  
// Cảnh báo: Chuyển đổi ngầm định có thể gây lỗi (ví dụ: FontHandle f2 \= f1;)

### **Item 16: Sử dụng dạng tương ứng của new và delete (Use the same form in corresponding uses of new and delete)**

**Vấn đề:** C++ có new/delete (cho đối tượng đơn) và new\[\]/delete\[\] (cho mảng).

**Giải pháp:** Nếu dùng new, phải dùng delete. Nếu dùng new\[\], phải dùng delete\[\].

* **Giải thích (Tại sao?):** new\[\] lưu **số lượng phần tử** vào bộ nhớ (thường là ngay trước con trỏ). delete\[\] đọc số lượng đó để gọi đúng số lần hàm hủy. Nếu bạn dùng delete cho mảng, chỉ phần tử đầu tiên được hủy, gây rò rỉ 99% tài nguyên \[cite: 73-74\].

**Ví dụ:**

// TRƯỚC (Rất sai):  
std::string \*stringArray \= new std::string\[100\];  
delete stringArray; // LỖI: Chỉ hủy 1 đối tượng, 99 đối tượng kia bị RÒ RỈ\! \[cite: 73\]

// SAU (Đúng):  
std::string \*stringArray \= new std::string\[100\];  
delete \[\] stringArray; // OK

* **Tốt nhất:** Dùng std::vector thay vì new\[\].

### **Item 17: Lưu đối tượng được 'new' vào con trỏ thông minh trong các câu lệnh độc lập (Store newed objects in smart pointers in standalone statements)**

**Vấn đề:** Một lệnh gọi hàm processWidget(std::shared\_ptr\<Widget\>(new Widget), priority()); có thể gây rò rỉ bộ nhớ.

* **Giải thích (Tại sao?):** Trình biên dịch có quyền thực thi theo thứ tự: 1\. new Widget (tạo con trỏ thô), 2\. priority() (ném ngoại lệ), 3\. shared\_ptr constructor. Nếu priority() ném ngoại lệ, con trỏ thô ở bước 1 bị mất vĩnh viễn \[cite: 75-77\].

**Giải pháp:** Luôn thực hiện new và gán vào smart pointer trong một câu lệnh độc lập *trước khi* gọi hàm khác.

**Ví dụ:**

// TRƯỚC (nguy hiểm):  
processWidget(std::tr1::shared\_ptr\<Widget\>(new Widget), priority());

// SAU (an toàn):  
std::tr1::shared\_ptr\<Widget\> pw(new Widget); // 1\. An toàn trước  
processWidget(pw, priority()); // 2\. Sau đó mới gọi hàm khác

## **Chương 4: Thiết kế và Khai báo**

### **Item 18: Thiết kế interface sao cho dễ sử dụng đúng và khó sử dụng sai (Make interfaces easy to use correctly and hard to use incorrectly)**

**Vấn đề:** Nếu người dùng có thể mắc lỗi với interface của bạn, họ sẽ mắc lỗi.

* **Giải thích (Tại sao?):** Interface của bạn nên *dẫn dắt* người dùng. Lỗi nên được phát hiện tại *compile-time* (bất khả thi về cú pháp) thay vì *runtime* (lỗi logic).

**Giải pháp:** Sử dụng hệ thống kiểu (type system) để ngăn lỗi.

**Ví dụ 1: Lỗi thứ tự**

// TRƯỚC (nguy hiểm):  
class Date { public: Date(int month, int day, int year); };  
Date d(30, 3, 1995); // Lỗi logic: 30 là 'month'?

// SAU (an toàn \- Dùng kiểu riêng):  
struct Day { ... }; struct Month { ... }; struct Year { ... };  
class Date { public: Date(const Month& m, const Day& d, const Year& y); };  
// Date d(30, 3, 1995); // LỖI BIÊN DỊCH\!  
Date d(Month(3), Day(30), Year(1995)); // OK \[cite: 79\]

**Ví dụ 2: Lỗi rò rỉ tài nguyên**

// TRƯỚC (nguy hiểm):  
Investment\* createInvestment(); // Client phải nhớ 'delete'  
// SAU (an toàn):  
std::tr1::shared\_ptr\<Investment\> createInvestment(); // Tự động quản lý \[cite: 81\]

### **Item 19: Đối xử với việc thiết kế class như là thiết kế kiểu dữ liệu (Treat class design as type design)**

**Vấn đề:** Tạo một class không chỉ là nhóm dữ liệu, mà là tạo ra một type (kiểu dữ liệu) mới.

* **Giải thích (Tại sao?):** Khi tạo class, bạn phải chịu trách nhiệm cho *tất cả* các khía cạnh mà nhà thiết kế ngôn ngữ đã làm cho int: Nó được tạo, hủy, sao chép, gán như thế nào? Nó có thể chuyển đổi kiểu không? Nó có được kế thừa không? \[cite: 84-85\].

**Giải pháp:** Hãy suy nghĩ như một nhà thiết kế ngôn ngữ và trả lời tất cả các câu hỏi trong checklist (xem Item 4, 5, 6, 7, 20, 22, 24, 29, 34...).

### **Item 20: Ưu tiên truyền bằng tham chiếu đến hằng hơn là truyền bằng giá trị (Prefer pass-by-reference-to-const to pass-by-value)**

**Vấn đề:** Truyền bằng giá trị (pass-by-value) sao chép toàn bộ đối tượng (tốn kém) và gây ra lỗi "slicing".

* **Giải thích (Tại sao?):**  
  1. **Hiệu năng:** pass-by-value gọi copy ctor \+ dtor (và của tất cả thành viên) \[cite: 86-87\]. const T& chỉ truyền một con trỏ ngầm.  
  2. **Slicing:** pass-by-value một đối tượng Derived vào tham số Base sẽ *tạo ra một đối tượng Base mới*, "cắt lát" (slice off) mất phần Derived. Tính đa hình bị mất \[cite: 87-88\].

**Ví dụ (Slicing Problem):**

class Window { public: virtual void display() const; };  
class WindowWithScrollBars : public Window { public: virtual void display() const; };

// TRƯỚC (chưa tốt \- Bị Slicing):  
void printWindowInfo(Window w) { // 'w' là một bản sao Window  
    w.display(); // Luôn gọi Window::display  
}  
// SAU (tốt):  
void printWindowInfo(const Window& w) { // 'w' là tham chiếu  
    w.display(); // Gọi đúng hàm virtual  
}

* **Ngoại lệ:** Kiểu tích hợp (built-in), iterators, và function object nên được truyền bằng giá trị.

### **Item 21: Đừng cố trả về một tham chiếu khi bạn bắt buộc phải trả về một đối tượng (Don't try to return a reference when you must return an object)**

**Vấn đề:** Lạm dụng const& cho giá trị trả về. Một tham chiếu *phải* trỏ đến một đối tượng đã tồn tại \[cite: 91\].

* **Giải thích (Tại sao?):**  
  1. **Trả về tham chiếu đến local:** Đối tượng local bị hủy khi hàm kết thúc \-\> **Dangling reference** (tham chiếu lơ lửng) \[cite: 91\].  
  2. **Trả về tham chiếu đến new:** Không ai delete được \-\> **Resource leak** \[cite: 91-92\].  
  3. **Trả về tham chiếu đến static:** Gây lỗi logic (ví dụ: (a\*b) \== (c\*d) luôn đúng vì chúng trỏ đến cùng 1 đối tượng static) \[cite: 92-93\].

**Giải pháp:** Cứ **trả về đối tượng bằng giá trị (by value)**. Trình biên dịch sẽ dùng "Return Value Optimization" (RVO) để loại bỏ việc sao chép không cần thiết \[cite: 94\].

**Ví dụ:**

// SAU (Đúng):  
const Rational operator\*(const Rational& lhs, const Rational& rhs) {  
    return Rational(...); // Trả về bằng giá trị.  
}

### **Item 22: Khai báo thành viên dữ liệu là private (Declare data members private)**

**Vấn đề:** public data members phá vỡ tính đóng gói.

* **Giải thích (Tại sao?):** Nếu dữ liệu là public, bạn *không bao giờ* có thể thay đổi cách cài đặt (ví dụ: đổi average từ biến lưu trữ sang hàm tính toán) mà không làm hỏng code của client \[cite: 95-97\]. protected cũng tệ như public, vì nó làm hỏng code của *tất cả* các class con \[cite: 97\].

Giải pháp: Luôn dùng private data và cung cấp các hàm public (getter/setter).  
Ví dụ:  
// SAU (tốt):  
class SpeedData {   
public:  
    double averageSoFar() const { return currentAverage; }  
private:  
    double currentAverage;  
};  
// Giờ bạn có thể thay đổi cách tính 'currentAverage' mà client không biết.

### **Item 23: Ưu tiên hàm non-member non-friend hơn là hàm member (Prefer non-member non-friend functions to member functions)**

**Vấn đề:** Chúng ta có xu hướng nhét mọi hàm tiện ích (ví dụ: clearEverything()) vào class (ví dụ: WebBrowser), làm class bị "phình" và giảm tính đóng gói.

**Giải pháp:** Nếu một hàm có thể được cài đặt mà chỉ cần dùng interface public của class, hãy biến nó thành **hàm non-member** (và non-friend).

* **Giải thích (Tại sao?):** Nó **tăng tính đóng gói**. Một hàm member có thể truy cập *tất cả* các thành viên private. Một hàm non-member thì không. Điều này giúp giảm sự phụ thuộc \[cite: 99-100\]. Nó cũng cho phép tách code ra nhiều file header (như vector và algorithm) \[cite: 100-101\].

**Ví dụ:**

// TRƯỚC (chưa tốt):  
class WebBrowser {  
public:  
    void clearCache();  
    void clearEverything() { ... } // Hàm Member  
private:  
    std::string cacheDir;   
};

// SAU (tốt hơn \- Tăng tính đóng gói):  
class WebBrowser {  
public:  
    void clearCache();  
};  
// Hàm Non-Member (đặt trong cùng namespace)  
void clearBrowser(WebBrowser& wb) {  
    wb.clearCache();  
}

### **Item 24: Khai báo hàm non-member khi muốn chuyển đổi kiểu áp dụng cho tất cả tham số (Declare non-member functions when type conversions should apply to all parameters)**

**Vấn đề:** Hàm member operator\* không cho phép chuyển đổi kiểu ngầm định trên tham số bên trái (\*this).

* **Giải thích (Tại sao?):** r \* 2 (với r là Rational) trở thành r.operator\*(2). Trình biên dịch có thể chuyển đổi 2 \-\> Rational(2) cho tham số rhs. Nhưng 2 \* r trở thành 2.operator\*(r). int (2) không có operator\*, và trình biên dịch *sẽ không* chuyển đổi 2 thành Rational (đối tượng \*this) \[cite: 102-104\].

**Giải pháp:** Đối với các toán tử có tính giao hoán, hãy dùng **hàm non-member**. Nó cho phép trình biên dịch áp dụng chuyển đổi kiểu ngầm định cho *cả hai* tham số \[cite: 104-105\].

**Ví dụ:**

// SAU (tốt \- Dùng hàm Non-member):  
const Rational operator\*(const Rational& lhs, const Rational& rhs) { /\* ... \*/ }  
Rational r(1, 2);  
r \* 2; // OK  
2 \* r; // OK\!

### **Item 25: Cân nhắc hỗ trợ một hàm swap không ném ngoại lệ (Consider support for a non-throwing swap)**

**Vấn đề:** std::swap mặc định (3 lần sao chép) rất chậm cho các class dùng "pimpl" (pointer to implementation).

**Giải pháp:** Cung cấp một hàm swap tùy chỉnh, hiệu quả (chỉ hoán đổi con trỏ pImpl) và **không ném ngoại lệ** (nothrow).

* **Giải thích (Tại sao?):** std::swap mặc định sao chép *toàn bộ dữ liệu* mà pImpl trỏ tới (3 lần\!). Một swap tùy chỉnh chỉ hoán đổi 3 con trỏ. Hàm swap (nothrow) này là nền tảng cho "copy-and-swap" (Item 29\) để đạt được an toàn ngoại lệ mức cao nhất.

**Ví dụ (Cách cài đặt đúng):**

// 1\. Cung cấp hàm member swap  
class Widget {  
public:  
    void swap(Widget& other) {  
        using std::swap;  
        swap(pImpl, other.pImpl); // Hoán đổi con trỏ \[cite: 108\]  
    }  
private:  
    WidgetImpl \*pImpl;  
};

// 2\. Cung cấp hàm non-member swap (trong cùng namespace)  
inline void swap(Widget& a, Widget& b) { a.swap(b); }

// 3\. Chuyên biệt hóa std::swap  
namespace std {  
    template\<\> void swap\<Widget\>(Widget& a, Widget& b) { a.swap(b); }  
}

// 4\. Cách Client gọi (Rất quan trọng):  
// using std::swap;  
// swap(w1, w2); // Sẽ gọi phiên bản tối ưu của bạn \[cite: 110\]

## **Chương 5: Cài đặt**

### **Item 26: Trì hoãn việc định nghĩa biến càng lâu càng tốt (Postpone variable definitions as long as possible)**

**Vấn đề:** Định nghĩa biến sớm (ví dụ: ở đầu hàm) sẽ tốn chi phí khởi tạo/hủy một cách lãng phí, nhất là khi hàm ném ngoại lệ trước khi biến được dùng \[cite: 114\].

* **Giải thích (Tại sao?):** Ngoài ra, string s; s \= "hi"; (1 default ctor \+ 1 assignment) *chậm hơn* string s("hi"); (1 copy ctor).

**Giải pháp:** Chỉ định nghĩa biến ngay tại nơi bạn cần dùng nó, và lý tưởng nhất là **khởi tạo** nó ngay lúc đó (thay vì định nghĩa rồi gán).

**Ví dụ:**

// TRƯỚC (lãng phí):  
std::string encryptPassword(const std::string& p) {  
    std::string encrypted; // 1\. Khởi tạo mặc định (lãng phí)  
    if (p.length() \< 8\) throw std::logic\_error("Short password"); // Lãng phí\!  
    encrypted \= p; // 2\. Gán (kém hiệu quả)  
    // ...  
    return encrypted;  
}

// SAU (hiệu quả):  
std::string encryptPassword(const std::string& p) {  
    if (p.length() \< 8\) throw std::logic\_error("Short password");  
    std::string encrypted(p); // 1\. Khởi tạo khi cần \[cite: 115\]  
    // ...  
    return encrypted;  
}

### **Item 27: Giảm thiểu việc ép kiểu (Minimize casting)**

**Vấn đề:** Ép kiểu (casting) phá vỡ hệ thống kiểu an toàn của C++. dynamic\_cast tốn kém hiệu năng.

* **Giải thích (Tại sao?):** Ép kiểu C-style ((T)x) là "búa tạ", nó có thể làm bất cứ điều gì (kể cả const\_cast và reinterpret\_cast) \[cite: 116-117\]. Nhu cầu ép kiểu thường là dấu hiệu của thiết kế tồi (ví dụ: nên dùng virtual thay vì dynamic\_cast \[cite: 120-122\]).

**Giải pháp:** Khi bắt buộc, dùng ép kiểu C++-style (static\_cast, dynamic\_cast, const\_cast, reinterpret\_cast). Chúng rõ ràng về ý định, an toàn hơn, và dễ tìm kiếm.

**Ví dụ (Lỗi thiết kế phổ biến):**

// TRƯỚC (Sai lầm nghiêm trọng khi gọi hàm cha):  
class SpecialWindow : public Window {  
public:  
    virtual void onResize() {  
        // SAI: Ép kiểu \*this tạo ra MỘT BẢN SAO TẠM CỦA PHẦN 'Window'  
        static\_cast\<Window\>(\*this).onResize(); // \[cite: 119\]  
    }  
};

// SAU (Đúng \- Không cần ép kiểu):  
class SpecialWindow : public Window {  
public:  
    virtual void onResize() {  
        Window::onResize(); // Chỉ định rõ ràng class cha \[cite: 120\]  
    }  
};

### **Item 28: Tránh trả về "handle" tới các thành phần nội bộ của đối tượng (Avoid returning "handles" to object internals)**

**Vấn đề:** Trả về reference, pointer, hoặc iterator đến dữ liệu private là rất nguy hiểm.

* **Giải thích (Tại sao?):**  
  1. **Phá vỡ const:** Một hàm const trả về Point& cho phép client thay đổi một đối tượng const \[cite: 124-125\].  
  2. **Dangling Handles:** Client lấy "handle" của một đối tượng tạm thời, và đối tượng đó bị hủy ngay sau đó, khiến "handle" trỏ vào rác.

**Ví dụ (Dangling Handle):**

// Hàm này trả về một Rectangle TẠM THỜI (bằng giá trị)  
const Rectangle boundingBox(const GUIObject& obj); 

// LẤY CON TRỎ trỏ vào BÊN TRONG đối tượng tạm thời  
const Point \*pUpperLeft \= &(boundingBox(\*pgo).upperLeft());   
// HẾT CÂU LỆNH: Rectangle tạm thời bị HỦY.  
// pUpperLeft BÂY GIỜ LÀ CON TRỎ LƠ LỬNG\! \[cite: 126\]

* **Giải pháp:** Hàm upperLeft() nên trả về một bản sao (by value).

### **Item 29: Cố gắng viết code an toàn với ngoại lệ (Strive for exception-safe code)**

**Vấn đề:** Khi có ngoại lệ, hàm không được rò rỉ tài nguyên (Basic Guarantee) và lý tưởng nhất là nên "rollback" về trạng thái cũ (Strong Guarantee).

* **Giải thích (Tại sao?):** "Strong Guarantee" (đảm bảo mạnh) có nghĩa là hàm có tính "nguyên tử" (atomic): hoặc thành công 100%, hoặc thất bại và *khôi phục* mọi thứ về trạng thái ban đầu \[cite: 128-129\].

**Giải pháp:**

* **Basic Guarantee:** Dùng **RAII** (Item 13\) để chống rò rỉ tài nguyên.  
* **Strong Guarantee:** Dùng kỹ thuật **"Copy-and-Swap" (dùng Item 25\)**.

**Ví dụ (Copy-and-Swap):**

void PrettyMenu::changeBackground(std::istream& imgSrc) {  
    using std::swap;  
    Lock ml(\&mutex); // RAII  
      
    // 1\. TẠO BẢN SAO của dữ liệu  
    std\_tr1::shared\_ptr\<PMImpl\> pNew(new PMImpl(\*pImpl));  
      
    // 2\. THAY ĐỔI TRÊN BẢN SAO. Nếu ném ngoại lệ, gốc không bị ảnh hưởng.  
    pNew-\>bgImage.reset(new Image(imgSrc));  
    \++pNew-\>imageChanges;  
      
    // 3\. HOÁN ĐỔI (nothrow) dữ liệu mới vào  
    swap(pImpl, pNew); // \[cite: 131-132\]  
} 

### **Item 30: Hiểu rõ các khía cạnh của inlining (Understand the ins and outs of inlining)**

**Vấn đề:** Lạm dụng inline có thể làm chương trình *chậm hơn* do "phình to mã nguồn" (Code bloat).

* **Giải thích (Tại sao?):** inline *thay thế* lệnh gọi hàm bằng code của hàm. Nếu hàm lớn và được gọi ở 1000 nơi, code của bạn sẽ phình to. File thực thi lớn hơn sẽ làm giảm hiệu quả của instruction cache và tăng paging, khiến chương trình chạy chậm hơn \[cite: 134-135\].

**Giải pháp:** inline là một yêu cầu (request).

* **Nên:** inline các hàm nhỏ, được gọi thường xuyên.  
* **Không nên:** inline hàm phức tạp, có vòng lặp, đệ quy.  
* **Cảnh báo:** inline constructor/destructor (chúng lớn hơn bạn nghĩ, vì phải gọi ctor/dtor của cha và thành viên) \[cite: 137-138\].

### **Item 31: Giảm thiểu sự phụ thuộc biên dịch giữa các file (Minimize compilation dependencies between files)**

**Vấn đề:** Thay đổi file header (thậm chí chỉ là private member) buộc tất cả các file khác \#include nó phải biên dịch lại (Compilation Cascade).

* **Giải thích (Tại sao?):** Trình biên dịch *cần* sizeof(T) để cấp phát bộ nhớ. Nếu Person.h chứa Address theAddress;, nó *phải* \#include "Address.h" để biết sizeof(Address).

**Giải pháp:** Tách biệt interface khỏi implementation bằng **Pimpl Idiom** (Pointer to Implementation).

* **Giải thích (Tại sao?):** Bằng cách chỉ chứa một con trỏ (std::unique\_ptr\<Address\> pImpl;), Person.h *không* cần sizeof(Address). Nó chỉ cần biết sizeof(Address\*). Do đó, Person.h chỉ cần *khai báo tiền phương* (class Address;) và không cần \#include "Address.h". Tất cả \#include nặng được giấu trong Person.cpp \[cite: 142-143\].

**Ví dụ (Pimpl Idiom):**

// file Person.h (Header)  
\#include \<string\>  
\#include \<memory\>   
class PersonImpl; class Date; class Address; // 1\. Chỉ dùng Forward Declaration

class Person {  
public:  
    Person(const std::string& name, const Date& birthday, const Address& addr);  
    std::string name() const;  
private:  
    std::unique\_ptr\<PersonImpl\> pImpl; // 2\. Chỉ chứa MỘT con trỏ  
};

// file Person.cpp (Implementation)  
\#include "Person.h"  
\#include "PersonImpl.h" // file .cpp mới  
\#include "Date.h"  
\#include "Address.h"  
struct PersonImpl { ... }; // 3\. Định nghĩa implementation ở đây  
// ... (Các hàm Person chỉ là "forward" lời gọi đến pImpl)

* **Cách khác:** Dùng **Interface Class** (class cơ sở trừu tượng) \[cite: 145-146\].

## **Chương 6: Kế thừa và Thiết kế Hướng đối tượng**

### **Item 32: Đảm bảo kế thừa public mô hình hóa quan hệ "là-một" (Make sure public inheritance models "is-a")**

**Vấn đề:** Lập trình viên dùng kế thừa public sai mục đích (ví dụ: cho "has-a").

* **Giải thích (Tại sao?):** Kế thừa public là một lời hứa: *mọi thứ* đúng với class cha cũng phải đúng với class con. Nếu Square (Hình vuông) kế thừa public từ Rectangle (Hình chữ nhật), nó phải tuân thủ hành vi "thay đổi chiều rộng mà không đổi chiều cao" của Rectangle. Vì Square không thể làm vậy, nó *không phải* "là-một" Rectangle \[cite: 153-155\].

**Giải pháp:** Chỉ dùng kế thừa public cho quan hệ "is-a" thực sự.

**Ví dụ (Lỗi logic):**

// TRƯỚC (Sai logic):  
class Rectangle { ... };  
class Square : public Rectangle { ... }; // Sai\!  
void makeBigger(Rectangle& r) { r.setWidth(r.width() \+ 10); }  
Square s;  
makeBigger(s); // LỖI LOGIC: 's' không còn là hình vuông nữa\!

### **Item 33: Tránh che giấu tên được kế thừa (Avoid hiding inherited names)**

**Vấn đề:** Một hàm trong class con (ví dụ: Derived::mf1()) sẽ *che giấu* (hide) *tất cả* các hàm cùng tên trong class cha (ví dụ: Base::mf1(int)), ngay cả khi chúng có tham số khác nhau.

* **Giải thích (Tại sao?):** C++ name lookup tìm trong scope Derived *trước*. Ngay khi tìm thấy "mf1", nó *dừng lại* và không tìm trong Base nữa \[cite: 156-158\].

**Giải pháp:** Dùng khai báo **using Base::mf1;** trong Derived để "kéo" tất cả các phiên bản nạp chồng (overload) của cha xuống \[cite: 159\].

**Ví dụ:**

class Base { public: virtual void mf1(int x); };  
class Derived : public Base {  
public:  
    // TRƯỚC (chưa tốt):  
    // virtual void mf1() { ... } // Che giấu Base::mf1(int)  
      
    // SAU (tốt):  
    using Base::mf1; // Kéo Base::mf1(int) xuống  
    virtual void mf1() { ... }   
};  
// Derived d;  
// d.mf1(10); // LỖI nếu không có 'using', OK nếu có 'using'.

### **Item 34: Phân biệt giữa kế thừa interface và kế thừa implementation (Differentiate between inheritance of interface and inheritance of implementation)**

**Vấn đề:** virtual và non-virtual có ý nghĩa thiết kế rất khác nhau.

* **Giải thích (Tại sao?):**  
  1. **Pure virtual (= 0):** Kế thừa **Interface**. Class con *bắt buộc* phải cài đặt.  
  2. **Simple virtual:** Kế thừa Interface \+ **Cài đặt Mặc định**. (Nguy hiểm, vì class con có thể quên override và vô tình dùng một cài đặt mặc định bị sai \[cite: 163-165\]).  
  3. **Non-virtual:** Kế thừa Interface \+ **Cài đặt Bắt buộc** (Item 36).

**Giải pháp:** Để an toàn, hãy tách biệt interface và cài đặt mặc định.

**Ví dụ (Sửa lỗi "Simple virtual" nguy hiểm):**

// SAU (an toàn):  
class Airplane {  
public:  
    virtual void fly() \= 0; // 1\. Interface là thuần ảo  
protected:  
    void defaultFly() { /\* code mặc định \*/ } // 2\. Cài đặt mặc định là non-virtual  
};  
class ModelA : public Airplane {  
public:  
    virtual void fly() { defaultFly(); } // 3\. Class con chủ động gọi  
};  
class ModelC : public Airplane {  
public:  
    virtual void fly() { /\* code riêng \*/ } // 4\. Class con bắt buộc phải cài đặt  
};

### **Item 35: Cân nhắc các giải pháp thay thế cho hàm virtual (Consider alternatives to virtual functions)**

**Vấn đề:** Hàm virtual là một lựa chọn thiết kế *tĩnh* (static) \- hành vi được quyết định bởi *kiểu* của class. Bạn không thể thay đổi hành vi của một đối tượng tại runtime.

**Giải pháp:** Cân nhắc **Strategy Pattern** (dùng con trỏ hàm hoặc std::function).

* **Giải thích (Tại sao?):** virtual gán hành vi cho *class*. Strategy Pattern gán hành vi cho *từng đối tượng*. Điều này cho phép ebg1 và ebg2 (cùng kiểu) có hành vi khác nhau, và cho phép thay đổi hành vi đó tại runtime \[cite: 171-172\].

**Ví dụ (Dùng tr1::function):**

typedef std::tr1::function\<int (const GameCharacter&)\> HealthCalcFunc;

class GameCharacter {  
public:  
    explicit GameCharacter(HealthCalcFunc hcf) : healthFunc(hcf) {}  
    int healthValue() const { return healthFunc(\*this); }  
private:  
    HealthCalcFunc healthFunc; // 1\. Chứa một "chiến lược"  
};  
// 2\. Các chiến lược khác nhau  
int loseHealthQuickly(const GameCharacter&);  
struct HealthCalculator { int operator()(const GameCharacter&) const; };  
// 3\. Các đối tượng cùng kiểu có thể có hành vi khác nhau  
GameCharacter c1(loseHealthQuickly);  
GameCharacter c2(HealthCalculator());

### **Item 36: Đừng bao giờ định nghĩa lại một hàm non-virtual đã kế thừa (Never redefine an inherited non-virtual function)**

**Vấn đề:** Hàm non-virtual được **liên kết tĩnh (static binding)**.

* **Giải thích (Tại sao?):** Nếu Derived định nghĩa lại Base::mf() (non-virtual), code của bạn sẽ bị "đa nhân cách":  
  * Base\* pB \= new Derived; pB-\>mf(); sẽ gọi **Base::mf** (vì kiểu con trỏ là Base\*).  
  * Derived\* pD \= new Derived; pD-\>mf(); sẽ gọi Derived::mf (vì kiểu con trỏ là Derived\*).  
    Đây là hành vi mâu thuẫn trên cùng một đối tượng, phá vỡ logic "is-a" \[cite: 178-179\].

**Giải pháp:** **Không bao giờ làm điều này.** Nếu hàm cần thay đổi, hãy biến nó thành virtual (Item 34).

### **Item 37: Đừng bao giờ định nghĩa lại giá trị tham số mặc định đã kế thừa (Never redefine a function's inherited default parameter value)**

**Vấn đề:** Hàm virtual được **liên kết động** (runtime), nhưng tham số mặc định lại được **liên kết tĩnh** (compile-time).

* **Giải thích (Tại sao?):** Khi bạn gọi pr-\>draw() (với pr là Shape\* trỏ đến Rectangle), trình biên dịch sẽ:  
  1. *Runtime (Động):* Tìm hàm Rectangle::draw() (vì virtual).  
  2. Compile-time (Tĩnh): Lấy tham số mặc định từ Shape::draw() (vì kiểu con trỏ là Shape\*).  
     Bạn sẽ gọi Rectangle::draw(Red) thay vì Rectangle::draw(Green) \[cite: 181-182\].

**Giải pháp:** **Không bao giờ làm điều này.** Nếu cần, hãy dùng NVI (Item 35\) và đặt giá trị mặc định vào hàm non-virtual wrapper.

**Ví dụ (Thảm họa):**

class Shape { public: virtual void draw(ShapeColor color \= Red) const; };  
class Rectangle : public Shape { public: virtual void draw(ShapeColor color \= Green) const; };  
Shape\* pr \= new Rectangle();  
pr-\>draw(); // Sẽ gọi Rectangle::draw(Red)\!

### **Item 38: Mô hình hóa quan hệ "has-a" hoặc "is-implemented-in-terms-of" thông qua composition (Model "has-a" or "is-implemented-in-terms-of" through composition)**

**Vấn đề:** Không phải mọi mối quan hệ đều là "is-a" (Item 32).

* **Giải thích (Tại sao?):** "is-a" (public inheritance) là một *cam kết về hành vi*. "has-a" (có-một) và "is-implemented-in-terms-of" (được-cài-đặt-dựa-trên) là các mối quan hệ về *cấu trúc* hoặc *cài đặt*.

**Giải pháp:** Sử dụng **composition** (đối tượng thành viên).

* **"has-a":** Miền ứng dụng. Person "has-a" Address.  
* **"is-implemented-in-terms-of":** Miền cài đặt. Set (tập hợp) "được-cài-đặt-dựa-trên" std::list. Dùng public class Set : public std::list là *sai*, vì list cho phép trùng lặp, còn Set thì không \[cite: 185-186\].

**Ví dụ (is-implemented-in-terms-of):**

// SAU (Đúng \- Dùng Composition):  
template\<class T\>  
class Set {  
private:  
    std::list\<T\> rep; // "Được-cài-đặt-dựa-trên" list \[cite: 185\]  
public:  
    void insert(const T& item) {  
        if (\!member(item)) { rep.push\_back(item); }  
    }  
};

### **Item 39: Sử dụng kế thừa private một cách thận trọng (Use private inheritance judiciously)**

**Vấn đề:** Kế thừa private cũng có nghĩa là "is-implemented-in-terms-of". Khi nào dùng nó thay vì composition (Item 38)?

* **Giải thích (Tại sao?):** Kế thừa private làm cho tất cả các hàm của Base trở thành private trong Derived. Nó *không* phải là "is-a" \[cite: 187\].

**Giải pháp:** **Luôn ưu tiên composition**. Chỉ dùng kế thừa private khi bạn *bắt buộc* phải:

1. Truy cập thành viên protected của class cha.  
2. Override (định nghĩa lại) một hàm virtual của class cha \[cite: 188-189\].

**Ví dụ:**

class Timer { public: virtual void onTick() const; };

// Chúng ta CẦN override onTick(), nên KHÔNG THỂ dùng composition.  
class Widget : private Timer { // Dùng kế thừa private \[cite: 189\]  
private:  
    virtual void onTick() const { /\* ... \*/ } // Override hàm virtual của cha  
};

### **Item 40: Sử dụng đa kế thừa một cách thận trọng (Use multiple inheritance judiciously)**

**Vấn đề:** Đa kế thừa (MI) rất phức tạp.

* **Giải thích (Tại sao?):**  
  1. **Ambiguity:** D kế thừa func() từ cả B và C \[cite: 192-193\].  
  2. **Diamond Problem:** D \-\> B, C \-\> A. D sẽ có *hai* bản sao của A.

**Giải pháp:** Tránh MI nếu có thể. Nếu phải dùng "Diamond", hãy dùng **Kế thừa ảo (Virtual Inheritance)** (virtual public A) để D chỉ có *một* bản sao của A. Nhưng cách này tốn kém và phức tạp \[cite: 193-194\].

Ví dụ (Trường hợp dùng MI hợp lý):  
Kết hợp Interface public (is-a) và Implementation private (is-implemented-in-terms-of).  
class IPerson { /\* ... interface thuần ảo (is-a) ... \*/ };  
class PersonInfo { /\* ... implementation (is-implemented-in-terms-of) ... \*/ };

// Dùng MI  
class CPerson : public IPerson,      // \[cite: 197-198\]  
                private PersonInfo     
{  
    // ... cài đặt interface của IPerson bằng cách dùng PersonInfo ...  
};

## **Chương 7: Template và Lập trình Generic**

### **Item 41: Hiểu về interface ngầm và tính đa hình lúc biên dịch (Understand implicit interfaces and compile-time polymorphism)**

**Vấn đề:** Lập trình template (TMP) có tư duy khác với Lập trình Hướng đối tượng (OOP).

* **Giải thích (Tại sao?):**  
  * **OOP:** Dùng **interface tường minh** (chữ ký hàm trong .h) và **đa hình lúc runtime** (hàm virtual).  
  * **TMP:** Dùng **interface ngầm định** (các biểu thức *phải* hợp lệ, ví dụ: T phải có w.size()) và **đa hình lúc compile-time** (khởi tạo template) \[cite: 199-201\].

**Ví dụ (Interface ngầm định):**

template\<typename T\>  
void doProcessing(T& w) {  
    // Interface ngầm định của T là:  
    // 1\. Phải có hàm w.size()  
    // 2\. Kết quả của w.size() phải so sánh được với 10  
    // 3\. Phải có hàm w.normalize()  
    if (w.size() \> 10\) {   
        w.normalize();  
    }  
}

### **Item 42: Hiểu hai ý nghĩa của typename (Understand the two meanings of typename)**

**Vấn đề:** typename dùng để làm gì?

* **Giải thích (Tại sao?):** Trình biên dịch *không thể biết* T::const\_iterator là một *kiểu dữ liệu* hay một *biến*. Nó *mặc định* rằng đó *không* phải là kiểu. typename *bắt buộc* trình biên dịch phải coi đó là một kiểu.

**Giải pháp:**

1. **Ý nghĩa 1 (Tùy chọn):** template\<typename T\> và template\<class T\> là **giống hệt nhau**.  
2. **Ý nghĩa 2 (Bắt buộc):** Dùng typename để chỉ định một "tên phụ thuộc lồng nhau" là một kiểu dữ liệu.

**Ví dụ:**

template\<typename C\>  
void print2nd(const C& container) {  
    // SAU (đúng):  
    typename C::const\_iterator iter(container.begin()); // Báo cho C++ đây là 1 KIỂU  
}

* **Ngoại lệ:** Không dùng typename trong danh sách kế thừa hoặc danh sách khởi tạo \[cite: 206\].

### **Item 43: Biết cách truy cập tên trong các class cơ sở được template hóa (Know how to access names in templatized base classes)**

**Vấn đề:** Khi Derived\<T\> kế thừa từ Base\<T\>, trình biên dịch không tự động tìm kiếm các tên (ví dụ: hàm baseFunc()) trong Base\<T\>.

* **Giải thích (Tại sao?):** Trình biên dịch không nhìn vào Base\<T\> vì nó có thể bị *chuyên biệt hóa* (specialized) thành một phiên bản không có baseFunc. Nó chọn cách báo lỗi sớm thay vì đợi đến lúc khởi tạo \[cite: 207-210\].

**Giải pháp:** *Chỉ rõ* cho trình biên dịch biết tên đó ở đâu:

1. this-\>baseFunc(); (Phổ biến nhất).  
2. using Base\<T\>::baseFunc;.

**Ví dụ:**

template\<typename T\> class Base { public: void baseFunc(); };  
template\<typename T\>  
class Derived : public Base\<T\> {  
public:  
    void useBaseFunc() {  
        // SAU (Cách 1 \- Tốt nhất):  
        this-\>baseFunc(); // \[cite: 210\]  
    }  
};

### **Item 44: Tách code không phụ thuộc vào tham số ra khỏi template (Factor parameter-independent code out of templates)**

**Vấn đề:** Template có thể gây "phình to mã nguồn" (code bloat). Matrix\<T, 5\>::invert() và Matrix\<T, 10\>::invert() là hai hàm hoàn toàn riêng biệt, gây lãng phí.

* **Giải thích (Tại sao?):** Trình biên dịch tạo ra một phiên bản code mới cho *mỗi* tổ hợp tham số template.

**Giải pháp:** Tách phần code *không phụ thuộc* vào n (tham số non-type) ra một class cơ sở chung (MatrixBase\<T\>). Class cơ sở này sẽ nhận n như một *tham số hàm*.

**Ví dụ:**

// SAU (chia sẻ code):  
template\<typename T\>  
class SquareMatrixBase {  
protected:  
    void invert(std::size\_t n) { /\* logic phức tạp dùng 'n' \*/ }  
};

template\<typename T, std::size\_t n\>  
class SquareMatrix : private SquareMatrixBase\<T\> {  
public:  
    void invert() { this-\>invert(n); } // Gọi hàm của cha  
};  
// (Tất cả cùng chia sẻ MỘT hàm SquareMatrixBase\<T\>::invert(size\_t))

* **Đánh đổi:** Cách này có thể chậm hơn một chút (do n không còn là hằng số compile-time) nhưng tiết kiệm đáng kể kích thước file thực thi \[cite: 216\].

### **Item 45: Dùng template hàm thành viên để chấp nhận "tất cả các kiểu tương thích" (Use member function templates to accept "all compatible types")**

**Vấn đề:** Làm thế nào để SmartPtr\<Base\> có thể được khởi tạo từ SmartPtr\<Derived\>? (Vì SmartPtr\<Base\> và SmartPtr\<Derived\> là 2 kiểu hoàn toàn không liên quan).

**Giải pháp:** Dùng "hàm khởi tạo sao chép tổng quát", vốn là một **template hàm thành viên**.

* **Giải thích (Tại sao?):** template\<typename U\> SmartPtr(const SmartPtr\<U\>& other) sẽ tạo ra hàm khởi tạo *theo yêu cầu*. Phép gán heldPtr(other.get()) bên trong nó *chỉ biên dịch được* nếu T\* \= U\* là hợp lệ (ví dụ: Base\* \= Derived\*), tự động lọc các chuyển đổi không hợp lệ \[cite: 219-220\].

**Ví dụ:**

template\<typename T\>   
class SmartPtr {  
private: T\* heldPtr;  
public:  
    T\* get() const { return heldPtr; }  
      
    // TEMPLATE HÀM KHỞI TẠO  
    template\<typename U\>  
    SmartPtr(const SmartPtr\<U\>& other)  
        : heldPtr(other.get()) { //  
    }  
};

SmartPtr\<Base\> pB \= SmartPtr\<Derived\>(new Derived()); // OK\!

### **Item 46: Định nghĩa hàm non-member bên trong template khi muốn có chuyển đổi kiểu (Define non-member functions inside templates when type conversions are desired)**

**Vấn đề:** Item 24 (dùng operator\* non-member) bị hỏng khi dùng với class template, vì trình biên dịch không thể **suy luận tham số template (template argument deduction)** cho các chuyển đổi ngầm định (ví dụ: 2 \* Rational\<T\>) \[cite: 222-223\].

**Giải pháp:** Dùng "mánh" C++: **Định nghĩa hàm operator\* non-member đó *bên trong* class, với tư cách là friend**.

* **Giải thích (Tại sao?):** Khi Rational\<int\> được khởi tạo, nó sẽ tạo ra một hàm friend *thông thường* (non-template) operator\*(Rational\<int\>, Rational\<int\>). Vì nó là hàm thông thường, trình biên dịch *có thể* dùng chuyển đổi kiểu ngầm định (như int \-\> Rational\<int\>) để gọi nó, giải quyết vấn đề \[cite: 223-224\].

**Ví dụ:**

template\<typename T\>  
class Rational {  
public:  
    // ...  
    // Định nghĩa friend BÊN TRONG class  
    friend const Rational operator\*(const Rational& lhs, const Rational& rhs) {  
        return Rational(lhs.numerator() \* rhs.numerator(), ...);  
    }  
};  
Rational\<int\> r(1,2);  
r \= 2 \* r; // OK\!

### **Item 47: Sử dụng "traits classes" để lấy thông tin về các kiểu (Use traits classes for information about types)**

**Vấn đề:** Làm thế nào để viết một hàm (như advance) có thể tối ưu hóa cài đặt của nó dựa trên *đặc tính* của kiểu T (ví dụ: iterator là random-access hay bidirectional) tại *compile-time*?

**Giải pháp:** Dùng **Traits Classes** (ví dụ: std::iterator\_traits\<T\>) và **nạp chồng hàm (overloading)**.

* **Giải thích (Tại sao?):** Đây là một "if/else" tại *compile-time*. Hàm advance (master) lấy "tag" (một kiểu) từ traits class. Sau đó, nó gọi một hàm "worker" (doAdvance) bằng cách truyền một đối tượng tạm của "tag" đó. Trình biên dịch sẽ dùng *nạp chồng hàm* để chọn đúng phiên bản doAdvance (phiên bản O(1) cho random-access, hoặc O(n) cho bidirectional) \[cite: 230-232\].

**Ví dụ:**

// 1\. Các hàm "worker" nạp chồng  
template\<typename IterT, typename DistT\>  
void doAdvance(IterT& iter, DistT d, std::random\_access\_iterator\_tag) { iter \+= d; }

template\<typename IterT, typename DistT\>  
void doAdvance(IterT& iter, DistT d, std::bidirectional\_iterator\_tag) { ... }

// 2\. Hàm "master" (chính)  
template\<typename IterT, typename DistT\>  
void advance(IterT& iter, DistT d) {  
    // Lấy 'tag' từ traits class và gọi hàm worker tương ứng  
    doAdvance(iter, d,   
              typename std::iterator\_traits\<IterT\>::iterator\_category());   
}

### **Item 48: Nhận biết về lập trình meta bằng template (Be aware of template metaprogramming)**

**Vấn đề:** TMP là gì?

* **Giải thích (Tại sao?):** Đó là một "ngôn ngữ" kỳ lạ chạy *bên trong* trình biên dịch của bạn. Nó dùng **đệ quy template** (thay cho vòng lặp) và **chuyên biệt hóa** (thay cho if) để thực hiện tính toán tại *compile-time*. Lợi ích chính là *chuyển công việc* từ runtime về compile-time, giúp chương trình cuối cùng nhanh hơn \[cite: 233, 235\].

**Giải pháp:** Nhận biết sự tồn tại của nó và các kỹ thuật cơ bản.

**Ví dụ (Tính Giai thừa tại Compile-time):**

// 1\. Template cơ sở (Đệ quy \- "vòng lặp")  
template\<unsigned n\>  
struct Factorial {  
    enum { value \= n \* Factorial\<n-1\>::value };  
};

// 2\. Chuyên biệt hóa (Điểm dừng đệ quy \- "if n==0")  
template\<\>   
struct Factorial\<0\> {  
    enum { value \= 1 };  
};

// 3\. Cách sử dụng:  
// int x \= Factorial\<5\>::value; // Trình biên dịch sẽ thay thế bằng 'int x \= 120;'

## **Chương 8: Tùy chỉnh new và delete**

### **Item 49: Hiểu hành vi của new-handler (Understand the behavior of the new-handler)**

**Vấn đề:** operator new làm gì khi hết bộ nhớ?

* **Giải thích (Tại sao?):** Nó không ném ngoại lệ ngay. Nó gọi một hàm new-handler toàn cục (mà bạn có thể cài đặt bằng std::set\_new\_handler) trong một vòng lặp while(true). Nó hy vọng new-handler sẽ giải phóng được bộ nhớ. Nó chỉ ném bad\_alloc khi new-handler là null \[cite: 240-241\].

**Giải pháp:** new-handler của bạn *phải* làm một trong 5 điều: 1\. Làm trống bộ nhớ, 2\. Cài handler khác, 3\. Gỡ handler (để new ném ngoại lệ), 4\. Ném bad\_alloc, hoặc 5\. abort.

**Ví dụ:**

void outOfMem() {  
    std::cerr \<\< "Hết bộ nhớ\!\\n";  
    std::abort();  
}  
std::set\_new\_handler(outOfMem);  
int \*p \= new int\[10000000000L\]; // Sẽ gọi outOfMem nếu thất bại

### **Item 50: Hiểu khi nào thì nên thay thế new và delete (Understand when it makes sense to replace new and delete)**

**Vấn đề:** Tại sao phải thay thế new/delete mặc định?

* **Giải thích (Tại sao?):**  
  1. **Hiệu năng:** new mặc định là "dùng cho mọi mục đích", có thể chậm. Một allocator tùy chỉnh (ví dụ: cấp phát nhiều đối tượng 16-byte từ một "pool") sẽ nhanh hơn nhiều \[cite: 248\].  
  2. **Phát hiện lỗi:** Cài đặt new tùy chỉnh để chèn "chữ ký" (ví dụ: 0xDEADBEEF) nhằm phát hiện lỗi ghi đè (memory overruns) \[cite: 247\].  
  3. **Thu thập thống kê:** Đo lường cách chương trình dùng bộ nhớ.

**Giải pháp:** Chỉ thay thế khi có lý do chính đáng. Tự viết rất khó (ví dụ: lỗi căn chỉnh (alignment)) \[cite: 249-250\]. Hãy dùng các thư viện có sẵn như boost::pool.

### **Item 51: Tuân thủ quy ước khi viết new và delete (Adhere to convention when writing new and delete)**

**Vấn đề:** Nếu bạn tự viết new/delete, chúng phải hoạt động đúng chuẩn.

* **Giải thích (Tại sao?):**  
  * operator new: Phải có vòng lặp while(true) gọi new-handler (Item 49). Phải xử lý yêu cầu 0 byte.  
  * operator new (Class): Phải xử lý "kích thước sai" (từ class con, ví dụ: new Derived gọi Base::new) bằng cách gọi ::operator new(size) \[cite: 254\].  
  * operator delete: Phải kiểm tra con trỏ null và không làm gì cả (vì delete nullptr là an toàn) \[cite: 255\].

**Ví dụ (Class new):**

void\* Base::operator new(std::size\_t size) throw(std::bad\_alloc) {  
    if (size \!= sizeof(Base)) { // Nếu size sai (do kế thừa)  
        return ::operator new(size); // Chuyển cho global new \[cite: 254\]  
    }  
    // ... code cấp phát của riêng Base ...  
}

### **Item 52: Viết placement delete nếu bạn viết placement new (Write placement delete if you write placement new)**

**Vấn đề:** Bạn viết một placement new (ví dụ: operator new(size\_t, ostream&)). Điều gì xảy ra nếu hàm *khởi tạo* (constructor) ném ngoại lệ? Bộ nhớ bị rò rỉ\!

* **Giải thích (Tại sao?):** new là 2 bước: 1\. operator new (cấp phát), 2\. Constructor (khởi tạo). Nếu bước 2 throw, C++ *phải* hoàn tác bước 1\. Nó tìm một operator delete có *chữ ký y hệt* (ví dụ: operator delete(void\*, ostream&)) để gọi. Nếu bạn không viết nó, không có gì được gọi và bộ nhớ bị rò rỉ \[cite: 258-259\].

**Giải pháp:** Luôn cung cấp một placement delete tương ứng cho mỗi placement new bạn viết.

**Ví dụ:**

class Widget {  
public:  
    // NẾU BẠN VIẾT HÀM NÀY:  
    static void\* operator new(std::size\_t size, std::ostream& logStream);  
      
    // BẠN CŨNG PHẢI VIẾT HÀM NÀY:  
    static void operator delete(void \*pMemory, std::ostream& logStream) throw();  
};

## **Chương 9: Hỗn hợp**

### **Item 53: Hãy chú ý đến cảnh báo của trình biên dịch (Pay attention to compiler warnings)**

**Vấn đề:** Lập trình viên thường bỏ qua cảnh báo (warnings).

**Giải pháp:** **Đừng\!** Hãy bật mức cảnh báo cao nhất và đặt mục tiêu **biên dịch không có cảnh báo nào**.

* **Giải thích (Tại sao?):** Cảnh báo thường là lỗi logic nghiêm trọng mà trình biên dịch "nghi ngờ". Một cảnh báo "hides virtual function" (che giấu hàm virtual) có nghĩa là bạn đã gõ sai (ví dụ: quên const) và đã *không* override được hàm, vi phạm Item 33 và 36 \[cite: 262-263\].

### **Item 54: Làm quen với thư viện chuẩn, bao gồm TR1 (Familiarize yourself with the standard library, including TR1)**

**Vấn đề:** Lập trình viên tự phát minh lại bánh xe.

**Giải pháp:** Hãy học và dùng thư viện chuẩn. Đặc biệt là **TR1** (nay là C++11/14/17...).

* **Giải thích (Tại sao?):** Chúng là những công cụ mạnh mẽ, đã được kiểm nghiệm: tr1::shared\_ptr (Item 13\) \[cite: 265\], tr1::function (Item 35\) \[cite: 265-266\], tr1::unordered\_map (Hash tables) \[cite: 266\], \<type\_traits\> (Item 47\) \[cite: 267\].

### **Item 55: Làm quen với Boost (Familiarize yourself with Boost)**

**Vấn đề:** Thư viện chuẩn không có mọi thứ bạn cần.

**Giải pháp:** Hãy dùng **Boost (boost.org)**.

* **Giải thích (Tại sao?):** Đây là một bộ sưu tập thư viện chất lượng cực cao, đã qua bình duyệt (peer-reviewed), và là "nơi thử nghiệm" cho hầu hết các tính năng của C++11 (bao gồm TR1) \[cite: 269-270\]. Nó cung cấp các công cụ mà thư viện chuẩn không có, như boost::pool (Item 50\) và Boost.MPL (Item 48\) \[cite: 270-272\].
