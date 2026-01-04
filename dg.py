if __name__ == '__main__':
    name1=[]
    score1=[]
    for _ in range(int(input())):
        name = input()
        name1.append(name)
        score = float(input())
        score1.append(score)
    tog=[list(k) for k in zip(name1,score1)]
    
    ss1=list(set(score1))
    ss1.sort()

    second_grade=ss1[1]
    stu=[]

    for i in tog:
        if i[1]==second_grade:
            stu.append(i[0])
    

    print(ss1)
    stu.sort()
    stu1="\n".join(stu)
    print(stu1)
