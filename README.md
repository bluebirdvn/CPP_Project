# P2P Chat Application

Ứng dụng chat peer-to-peer (P2P) được xây dựng bằng C++ cho phép nhiều người dùng kết nối và giao tiếp trực tiếp với nhau mà không cần máy chủ trung tâm.

## Tính năng

- **Kết nối P2P**: Kết nối trực tiếp giữa các peer
- **Multi-threaded**: Xử lý nhiều kết nối đồng thời
- **Giao tiếp hai chiều**: Gửi và nhận tin nhắn real-time
- **Quản lý kết nối**: Theo dõi và quản lý tất cả các peer đang kết nối
- **Command-line Interface**: Giao diện dòng lệnh đơn giản và dễ sử dụng

## Kiến trúc

### Cấu trúc thư mục

```
P2PChatApp/
├── inc/                    # Header files
│   ├── ChatServer.hpp      # Server lắng nghe kết nối
│   ├── Command.hpp         # Command pattern interface
│   ├── ConnectionManager.hpp # Quản lý tất cả các kết nối
│   ├── Peer.hpp            # Đại diện cho mỗi peer
│   └── SocketWrapper.hpp   # RAII wrapper cho socket
├── src/                    # Implementation files
│   ├── ChatServer.cpp
│   ├── Command.cpp
│   ├── Connection.cpp
│   └── Peer.cpp
├── main.cpp                # Entry point
├── Makefile
└── README.md
```

### Các thành phần chính

1. **ChatServer**: Lắng nghe và chấp nhận các kết nối đến từ peer khác
2. **ConnectionManager**: Singleton quản lý tất cả các peer đang kết nối
3. **Peer**: Đại diện cho một kết nối peer, xử lý gửi/nhận tin nhắn
4. **Command Pattern**: Xử lý các lệnh từ người dùng
5. **SocketWrapper**: RAII wrapper đảm bảo tài nguyên socket được giải phóng đúng cách

## Yêu cầu hệ thống

- **OS**: Linux/Unix
- **Compiler**: g++ với hỗ trợ C++14 trở lên
- **Libraries**: 
  - POSIX threads (pthread)
  - Berkeley sockets

## Biên dịch

```bash
make
```

Hoặc biên dịch thủ công:

```bash
g++ -std=c++14 -pthread -Iinc -o P2PChatApp main.cpp src/*.cpp
```

## Cách sử dụng

### Khởi chạy ứng dụng

```bash
./P2PChatApp <IP_ADDRESS> <PORT>
```

**Ví dụ:**
```bash
./P2PChatApp 127.0.0.1 8080
```

### Các lệnh có sẵn

| Lệnh | Mô tả | Ví dụ |
|------|-------|-------|
| `connect <IP> <PORT>` | Kết nối đến một peer khác | `connect 127.0.0.1 8081` |
| `list` | Hiển thị danh sách tất cả các peer đang kết nối | `list` |
| `send <ID> <MESSAGE>` | Gửi tin nhắn đến peer có ID chỉ định | `send 1 Hello there!` |
| `terminate <ID>` | Ngắt kết nối với peer có ID chỉ định | `terminate 1` |
| `myip` | Hiển thị địa chỉ IP đang lắng nghe | `myip` |
| `myport` | Hiển thị cổng đang lắng nghe | `myport` |
| `help` | Hiển thị danh sách các lệnh | `help` |
| `exit` | Thoát ứng dụng | `exit` |

## Ví dụ sử dụng

### Kịch bản: Hai người dùng chat với nhau

**Terminal 1 (User A):**
```bash
$ ./P2PChatApp 127.0.0.1 8080
Server listening on 127.0.0.1:8080
> myip
Listening IP: 127.0.0.1
> myport
Listening Port: 8080
```

**Terminal 2 (User B):**
```bash
$ ./P2PChatApp 127.0.0.1 8081
Server listening on 127.0.0.1:8081
> connect 127.0.0.1 8080
Peer 127.0.0.1:8080 connected with ID: 1
> send 1 Hello from User B!
```

**Terminal 1 (User A nhận tin nhắn):**
```bash
Peer 127.0.0.1:8081 connected with ID: 1
[Message from 1]: Hello from User B!
> send 1 Hi User B! How are you?
```

**Terminal 2 (User B nhận phản hồi):**
```bash
[Message from 1]: Hi User B! How are you?
> list
ID      IP Address      Port
--      ----------      ----
1       127.0.0.1       8080
```

## Chi tiết kỹ thuật

### Thread Safety
- **ConnectionManager**: Sử dụng `std::mutex` để đảm bảo thread-safe khi thêm/xóa peer
- **Peer**: Mỗi peer có thread riêng để lắng nghe tin nhắn đến

### Memory Management
- Sử dụng smart pointers (`std::unique_ptr`) để quản lý tài nguyên
- RAII pattern cho socket management
- Tự động cleanup khi peer disconnect

### Network Protocol
- TCP sockets để đảm bảo tin nhắn được gửi đúng thứ tự
- Non-blocking I/O với `select()` để xử lý timeout

## Xử lý lỗi

Ứng dụng xử lý các lỗi phổ biến:
- Invalid IP address hoặc port
- Connection failures
- Socket creation errors
- Peer disconnection
- Invalid command input

## Hạn chế và cải tiến tương lai

### Hạn chế hiện tại
- Tin nhắn không được mã hóa
- Không có xác thực người dùng
- Không lưu lịch sử chat
- Không có GUI

### Cải tiến tương lai
- [ ] Thêm mã hóa end-to-end (TLS/SSL)
- [ ] Implement user authentication
- [ ] Lưu trữ lịch sử tin nhắn
- [ ] Hỗ trợ file transfer
- [ ] Thêm GUI (Qt/GTK)
- [ ] Group chat functionality
- [ ] NAT traversal cho P2P qua Internet
