# B-i-t-p-th-p-h-n-i
Dùng đệ quy và không đệ quy để tính tháp Hà Nội
Tạo hàm để khiến bài toán hoàn thành theo ba bước chính
1. Chuyển (n-1) đĩa từ A sang B
2. Chuyển 1 đĩa còn lại từ A sang C
3. Chuyển (n-1) đĩa từ B sang C
Bài toán sẽ dần được chia nhỏ đến chuyển một đĩa để mỗi lần gọi hàm sẽ thực hiện theo ba bước như trên

Trong trường hợp không sử dụng đệ quy cần phải sử dụng các phương pháp khử đệ quy khác, một trong các phương pháp hay dùng chính là stack

Ý tưởng chung là sẽ dựa trên số bước để tính số lần lặp stack, công thức tính số bước là 2^n -1 thì có thể tính được, còn stack sẽ theo Last In First Out (LIFO). Xé nhỏ số việc ra, cho if n==1 thì đơn giản là nhấc ra rồi cho vào tháp C. Với n>1 sẽ chia nhỏ bài toán. Bài toán tháp hà nội cổ điển chỉ có ba cột A,B, C nhưng có n đĩa, thực hiện tuần tự theo ba bước ở trên.

Cách làm thì giả sử có n đĩa sẽ làm theo thứ tự
B1: Chuyển (n-1) đĩa A-> B
B2: Chuyển đĩa n từ A->C
B3: Chuyển (n-1) đĩa B-> C
Nhét theo LIFO thì B1 sẽ ở dưới cùng, B3 sẽ ở đáy là trên cùng (Theo cột dọc, lấy từ dưới lên trên). Bắt đầu thực hiện bước 1 trước, chuyển (n-1) đĩa từ A->B... mình sẽ chia nhỏ tiếp thành 
B1: Chuyển (n-2) đĩa A->C
B2: Chuyển đĩa (n-1) từ A->B
B3: Chuyển (n-2) đĩa C->B
Cứ lặp lại như vậy sẽ có quy luật (n-x), nếu x lẻ thì là bài toán chuyển từ A->B, nếu x chẵn là bài toán chuyển từ A-> C