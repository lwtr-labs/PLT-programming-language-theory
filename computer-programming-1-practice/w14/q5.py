class Post:
    count = 0
    def __init__(self, title, author, content):
        self.title = title
        self.author = author
        self.content = content
        Post.count += 1 
    def display_info(self):
        print("제목:", self.title)
        print("작성자:", self.author)
        print("내용:")
        print(self.content)
        print("-" * 20)
        
post_list = []

post_list.append(Post("첫 번째 게시글", "홍길동", "안녕하세요. 첫 번째 게시글입니다."))
post_list.append(Post("두 번째 게시글", "이순신", "안녕하세요. 두 번째 게시글입니다."))
post_list.append(Post("세 번째 게시글", "유관순", "안녕하세요. 세 번째 게시글입니다."))

print("=== 전체 게시글 목록 ===")
for post in post_list:
    post.display_info()
    
print("총 게시글 개수:", len(post_list))

num = int(input("조회할 게시글 번호 입력: ")) - 1
print(f"- {num+1}번 게시글 죄회 -")
post_list[num].display_info()