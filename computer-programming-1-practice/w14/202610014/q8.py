class Character:
    total_characters = 0
    def __init__(self, name, hp, defense=5):
        self.name = name
        self.__hp = hp
        self.defense = defense
        Character.total_characters += 1
        
    def take_damage(self, power):
        actual_damage = power - self.defense
        if actual_damage < 0:
            actual_damage = 0
        self.__hp -= actual_damage
        print(f"[{self.name}] {actual_damage}의 피해를 입었습니다. (남은 체력: {self.__hp})")
    def __str__(self):
        return f"이름: {self.name}, 체력: {self.__hp}, 방어력: {self.defense}"
    
character_list = []
    
print("=== 캐릭터 생성 시스템 ===")
    
while True:
    input_name = input("캐릭터 이름 (종료하려면 '끝' 입력): ")
    if input_name == "끝":
        break
    input_hp = int(input("캐릭터 체력(HP): "))
    input_def_raw = input("캐릭터 방어력(엔터치면 기본값): ")
        
    if input_def_raw.strip() == "":
        new_player = Character(input_name, input_hp)
    else:
        new_player = Character(input_name, input_hp, int(input_def_raw))
            
    character_list.append(new_player)
    print(f">> [{input_name}] 캐릭터가 생성되었습니다.")

print("\n=== 생성된 전체 캐릭터 목록 ===")

for player in character_list:
    print(player)
print(f"\n생성된 총 캐릭터 수: {Character.total_characters}")

print("\n=== 전체 광역 공격 테스트 (공격력 20) ===")
for player in character_list:
    player.take_damage(20)