#include <bits/stdc++.h>
#include <string>
using namespace std;

// Khai báo biến toàn cục không cần thiết, tốt nhất nên tránh.
// Chỉ giữ lại ll=long long
using ll=long long;

// Hàm solve được sửa để nhận tham số string (Cách 2 - Khuyến khích)
string solve(string subject)
{
    // Bỏ qua việc chuyển đổi s, thay vào đó chuyển đổi subject
    transform(subject.begin(), subject.end(), subject.begin(), ::tolower);

    vector<string> a = {"you", "we", "they"};
    if (subject == "i") {
        return "am";
    }
    else if (find(a.begin(), a.end(), subject) != a.end())
        return "are";
    else
        return "is";
}

int main(){
    string f, s, v, b = ""; // Khai báo các biến cần thiết

    // 1. Đọc cả câu
    getline(cin, f);
    b = f; // Khởi tạo b bằng f (để b có giá trị khi if không chạy)

    // 2. Tìm vị trí chủ ngữ để trích xuất (Giả sử chủ ngữ là từ đầu tiên)
    stringstream ss(f);
    ss >> s; // Trích xuất từ đầu tiên và gán cho s (chủ ngữ)

    // 3. Gọi hàm solve với chủ ngữ đã tìm được
    v = solve(s);

    cout<<v<<endl;

    return 0;
}
